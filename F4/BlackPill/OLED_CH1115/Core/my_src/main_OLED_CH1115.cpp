/**
  * @file    main_OLED_CH1115.cpp
  *
  *  Created on: 21 янв. 2026 г.
  *      Author: Alexey Polurotov
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "dma.h"
#include "spi.h"
#include "usb_device.h"
#include "gpio.h"

#include "gui.h"
#include "u8g2.h"
#include "screen.h"
#include "button.h"
#include "Delays.h"
#include "DigitalPins.h"
#include "UsbDevice.h"

/* Typedefs ----------------------------------------------------------------- */
typedef void (*Irq_type)();

typedef enum TimerIrq_type
{
	Up  = 0,
	All = 0,
	brk = 1,
	trg = 2,
	cc  = 3,
} TimerIrq_type;

/* Variables ---------------------------------------------------------------- */
uint8_t Image[8 * 128] = { 0, };  // буфер для вывода на дисплей
u8g2_t myDisplay;
EScreenMode CurrentScreen { MainScreen };

volatile uint8_t  _Tick_1ms { 0 };
volatile uint8_t  _Tick_counter_5ms { 0 };
volatile uint16_t _Tick_counter_25ms { 0 };
volatile uint16_t _Tick_counter_500ms { 0 };
volatile uint16_t _Tick_counter_5000ms { 0 };
volatile uint8_t _pauseThread { 0 }; // Флаг приостановки потока

/* Function prototypes -------------------------------------------------------*/
void init();
void loop();

/* ===========================================================================*/
extern "C" void main_OLED_CH1115(void)
{
	init();
	loop();
}

void init()
{
	BUTTON_Init();
	// Настройка таймера 5 для измерения времени и задержек
	// Настройка Измерения времени и "точных" задержек
	// "точных"  - погрешность могут вносить обработчики прерываний
	Delays::config(5);

	u8g2_Setup_ssd1306_128x64_noname_f(&myDisplay, U8G2_R0, u8x8_byte_stm32_hw_spi, u8x8_stm32_gpio_and_delay);  // Инициализация u8g2-структуры
	u8g2_InitDisplay(&myDisplay); // Отправка последовательности инициализации на дисплей, после чего дисплей переходит в спящий режим
	u8g2_SetPowerSave(&myDisplay, 0); // Пробуждение дисплея

	return;
}

void loop()
{
	uint8_t *pCommandBuf;
	uint32_t tempTime;
	uint32_t startTimeSync1ms = Delays::GetCounterValue();
	const uint32_t timeout_in_us = 1000; //

	while (true)
	{
		// Задачи выполняемые с заданными интервалами
		if ((tempTime = Delays::GetWorkTimeIn_us(startTimeSync1ms)) >= timeout_in_us)
		{
			_Tick_counter_25ms  += tempTime / 1000;
			_Tick_counter_500ms += tempTime / 1000;
			// Операции каждые 1 мс
			startTimeSync1ms = Delays::GetCounterValue(); // Задаем новый отсчет

			BUTTON_Process();
			if (BUTTON_GetAction(BUTTON_NEXT) == BUTTON_SHORT_PRESS)
			{
				switch (CurrentScreen)
				{
				case MainScreen:
					CurrentScreen = ZeroSettingScreen1;
					break;
				case ZeroSettingScreen1:
					CurrentScreen = SettingsScreen;
					break;
				case ZeroSettingScreen4:
					CurrentScreen = SettingsScreen;
					break;
				case SettingsScreen:
					CurrentScreen = InfoScreen;
					break;
				default:
					__NOP();
					break;
				}
			}
			if (BUTTON_GetAction(BUTTON_ESC) == BUTTON_SHORT_PRESS)
			{
				switch (CurrentScreen)
				{
				case ZeroSettingScreen1:
					CurrentScreen = MainScreen;
					OLED_Clear();
					break;
				case ZeroSettingScreen2:
					CurrentScreen = ZeroSettingScreen1;
					break;
				case ZeroSettingScreen3:
					CurrentScreen = ZeroSettingScreen1;
					break;
				case ZeroSettingScreen4:
					CurrentScreen = ZeroSettingScreen1;
					break;
				case SettingsScreen:
					CurrentScreen = ZeroSettingScreen1;
					break;
				case InfoScreen:
					CurrentScreen = SettingsScreen;
					break;
				default:
					__NOP();
					break;
				}
			}
			if (BUTTON_GetAction(BUTTON_OK) == BUTTON_SHORT_PRESS)
			{
				switch (CurrentScreen)
				{
				case ZeroSettingScreen1:
					CurrentScreen = ZeroSettingScreen2;
					break;
				case ZeroSettingScreen2:
					_is_countdown_active = true;
					CurrentScreen = ZeroSettingScreen3;
					break;
				case ZeroSettingScreen3:
					_is_countdown_active = true;
					CurrentScreen = ZeroSettingScreen4;
					break;
				case ZeroSettingScreen4:
					CurrentScreen = MainScreen;
					OLED_Clear();
					break;
				case InfoScreen:
					CurrentScreen = ServiceScreen;
					break;
				case ServiceScreen:
					CurrentScreen = InfoScreen;
					break;
				default:
					__NOP();
					break;
				}
			}
			BUTTON_ResetActions();

			// Операции каждые 500 мс (2 Гц)
			if ((_Tick_counter_500ms) >= 500)
			{
				_Tick_counter_500ms = 0;
				DigitalPins::LedBoardToggle(); // мигаем светодиодом на плате 1раз/сек
			} // end of if ((_Tick_counter_500ms) >= 500)

			// Операции каждые 25 мс (40 Гц)
			if ((_Tick_counter_25ms) >= 25)
			{
				_Tick_counter_25ms = 0;
				switch (CurrentScreen)
				{
				case MainScreen:
					OLED_DrawMainScreen();
					break;
				case ZeroSettingScreen1:
					OLED_DrawZeroSettingScreen1();
					break;
				case ZeroSettingScreen2:
					OLED_DrawZeroSettingScreen2();
					break;
				case ZeroSettingScreen3:
					if (_is_countdown_active)
					{
						OLED_DrawZeroSettingCoundownScreen();
						_is_countdown_active = false;
					}
					OLED_DrawZeroSettingScreen3();
					break;
				case ZeroSettingScreen4:
					if (_is_countdown_active)
					{
						OLED_DrawZeroSettingCoundownScreen();
						_is_countdown_active = false;
					}
					OLED_DrawZeroSettingScreen4();
					break;
				case SettingsScreen:
					OLED_DrawSettingsScreen();
					break;
				case InfoScreen:
					OLED_DrawInfoScreen();
					break;
				case ServiceScreen:
					OLED_DrawSeviceScreen();
					break;
				default:
					__NOP();
					break;
				}
			} // end of if ((_Tick_counter_25ms) >= 25)
		} // end of if (_Tick_1ms != 0)

		// Остальные задачи

		// Принимаем и обрабатываем команды от компьютера
		if ((pCommandBuf = UsbDevice::Commands()) != 0)
		{
			TaskCommands(pCommandBuf);
		}
		UsbDevice::SendData(); // Отправляем подготовленные данные
	} // end of while (true)

	return;
}
