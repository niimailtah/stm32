/**
  * @file    main_BMI270.cpp
  *
  *  Created on: 1 июня 2026 г.
  *      Author: Alexey Polurotov
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "rtc.h"
#include "i2c.h"
#include "u8g2.h"
#include "bmi270.h"

#include "Delays.h"

/* Defines ------------------------------------------------------------------ */
#define BMI270_BUS   hi2c1

/* Variables ---------------------------------------------------------------- */
u8g2_t myDisplay;

volatile uint8_t  _Tick_1ms{ 0 };
volatile uint8_t  _Tick_counter_5ms{ 0 };
volatile uint16_t _Tick_counter_25ms{ 0 };
volatile uint16_t _Tick_counter_500ms{ 0 };
volatile uint16_t _Tick_counter_3000ms{ 0 };
volatile uint16_t _Tick_offset_3000ms{ 0 };

bool is_in_stop_mode{false};
volatile uint8_t _wakeup_counter{ 0 };
struct bmi2_dev bmi;
extern const uint8_t *bmi270_config_file;

/* Function prototypes -------------------------------------------------------*/
void init();
void loop();
void StopMode(void);

BMI2_INTF_RETURN_TYPE bmi2_i2c_read(uint8_t reg_addr, uint8_t *reg_data, uint32_t len, void *intf_ptr);
BMI2_INTF_RETURN_TYPE bmi2_i2c_write(uint8_t reg_addr, const uint8_t *reg_data, uint32_t len, void *intf_ptr);
void bmi2_delay_us(uint32_t period, void *intf_ptr);
void BMI270_burst_write_data(uint8_t reg,uint8_t* data, uint16_t size);

/* ===========================================================================*/
extern "C" void main_BMI270(void)
{



//	init();
//	loop();

	return;
}

void init()
{
	// Настройка таймера 5 для измерения времени и задержек
	// Настройка Измерения времени и "точных" задержек
	// "точных"  - погрешность могут вносить обработчики прерываний
	Delays::config(5);

	u8g2_Setup_ssd1306_128x64_noname_f(&myDisplay, U8G2_R0, u8x8_byte_stm32_hw_spi, u8x8_stm32_gpio_and_delay);  // Инициализация u8g2-структуры
	u8g2_InitDisplay(&myDisplay); // Отправка последовательности инициализации на дисплей, после чего дисплей переходит в спящий режим
	u8g2_SetPowerSave(&myDisplay, 0); // Пробуждение дисплея
//	u8g2_SetDisplayRotation(&myDisplay, U8G2_R2);
	u8g2_FirstPage(&myDisplay);
	do
	{
		u8g2_ClearDisplay(&myDisplay);
//		u8g2_DrawBox(&myDisplay, 1, 1, 127, 63);
		u8g2_DrawFrame(&myDisplay, 1, 1, 127, 63);
		u8g2_SetFont(&myDisplay, u8g2_font_ncenB14_tr);
		u8g2_DrawStr(&myDisplay, 3, 40, "Hello, world!");
	} while (u8g2_NextPage(&myDisplay));


    bmi.intf = BMI2_I2C_INTF;
    bmi.intf_ptr = &BMI270_BUS;
    bmi.read = bmi2_i2c_read;
    bmi.write = bmi2_i2c_write;
    bmi.delay_us = bmi2_delay_us;
    bmi.read_write_len = 46U;
    bmi.config_file_ptr = NULL;
//    bmi.dummy_byte = 0;

    uint8_t chip_id = 0;
    int8_t rslt;
	/* Read chip-id of the BMI2 sensor */
    rslt = bmi2_get_regs(BMI2_CHIP_ID_ADDR, &chip_id, 1, &bmi);

	if (rslt == BMI2_OK)
	{
		if (chip_id == BMI270_CHIP_ID)
		{
			__NOP();
		}
	}

//	uint8_t value = 0x00;
//	rslt = bmi2_set_regs(BMI2_PWR_CONF_ADDR, &value, 1, &bmi);
//
//	rslt = bmi2_set_regs(0x59, &value, 1, &bmi);
//	uint16_t n_bmi270_config_file = sizeof(bmi270_config_file);
//	BMI270_burst_write_data(0x5E, (uint8_t*)bmi270_config_file, n_bmi270_config_file);
//	value = 0x01;
//	rslt = bmi2_set_regs(0x59, &value, 1, &bmi);
//    uint8_t sensor_list = BMI2_ACCEL;
//    struct bmi2_sens_config config;
//
    rslt = bmi270_init(&bmi);
//    if (rslt != BMI2_OK)
//    {
//		uint8_t int_stat;
//		rslt = bmi2_get_internal_status(&int_stat, &bmi);
//    }
//    else
//    {
//    	rslt = bmi2_sensor_enable(&sensor_list, 1, &bmi);
//    	config.type = BMI2_ACCEL;
//    	rslt = bmi2_get_sensor_config(&config, 1, &bmi);
//    	config.cfg.acc.odr = BMI2_ACC_ODR_200HZ;
//    	config.cfg.acc.range = BMI2_ACC_RANGE_2G;
//    	config.cfg.acc.bwp = BMI2_ACC_NORMAL_AVG4;
//    	config.cfg.acc.filter_perf = BMI2_PERF_OPT_MODE;
//    	rslt = bmi2_set_sensor_config(&config, 1, &bmi);
//    	rslt = bmi2_map_data_int(BMI2_DRDY_INT, BMI2_INT1, &bmi);
//    }

	return;
}

void loop()
{
	uint32_t tempTime;
	uint32_t startTimeSync1ms = Delays::GetCounterValue();
	const uint32_t timeout_in_us = 1000; //

	while (true)
	{
		// Задачи выполняемые с заданными интервалами
		if ((tempTime = Delays::GetWorkTimeIn_us(startTimeSync1ms)) >= timeout_in_us)
		{
			_Tick_counter_25ms  += tempTime / 1000;
			_Tick_counter_3000ms += tempTime / 1000;
			// Операции каждые 1 мс
			startTimeSync1ms = Delays::GetCounterValue(); // Задаем новый отсчет

			// Обработка длительного нажатия
			if (HAL_GPIO_ReadPin(BTN_GPIO_Port, BTN_Pin)) // кнопка отжата
			{
				_Tick_offset_3000ms = 0;
			}
			else
			{
				_Tick_offset_3000ms += tempTime / 1000;
				if ((_Tick_offset_3000ms) >= 3000)
				{
					_Tick_offset_3000ms = 0;
					// переход в режим остановки
					u8g2_FirstPage(&myDisplay);
					do
					{
						u8g2_ClearDisplay(&myDisplay);
						u8g2_DrawRFrame(&myDisplay, 1, 1, 127, 63, 4);
						u8g2_SetFont(&myDisplay, u8g2_font_ncenB14_tr);
						u8g2_DrawStr(&myDisplay, 15, 40, "Good buy.");
					} while (u8g2_NextPage(&myDisplay));
					HAL_Delay(100);
					for (uint8_t contrast = 255; contrast > 32; contrast -= 8)
					{
						u8g2_SetContrast(&myDisplay, contrast);
						HAL_Delay(20);
					}
					u8g2_SetPowerSave(&myDisplay, 1); // Засыпание дисплея
					is_in_stop_mode = true;
					_wakeup_counter = 0;
					while (_wakeup_counter < 3)
					{
						StopMode();
					}
					is_in_stop_mode = false;
					// выход из режима остановки
					u8g2_SetPowerSave(&myDisplay, 0); // Пробуждение дисплея
					u8g2_FirstPage(&myDisplay);
					do
					{
						u8g2_ClearDisplay(&myDisplay);
						u8g2_DrawRFrame(&myDisplay, 1, 1, 127, 63, 4);
						u8g2_SetFont(&myDisplay, u8g2_font_ncenB14_tr);
						u8g2_DrawStr(&myDisplay, 20, 40, "Morning.");
					} while (u8g2_NextPage(&myDisplay));
					for (uint8_t contrast = 0; contrast < 220; contrast += 8)
					{
						u8g2_SetContrast(&myDisplay, contrast);
						HAL_Delay(20);
					}
				}
			}

			// Операции каждые 3000 мс
			if ((_Tick_counter_3000ms) >= 3000)
			{
				_Tick_counter_3000ms = 0;
			}

			// Операции каждые 25 мс (40 Гц)
			if ((_Tick_counter_25ms) >= 25)
			{
				_Tick_counter_25ms = 0;
			}
		}
		// Остальные задачи
		__NOP();
	}

	return;
}

void StopMode(void)
{
	/* TODO: Отключение всех GPIO для уменьшения энергопотребления */
//		MX_GPIO_Deinit();

	/* Приостановить отсчет тиков для предотвращения пробуждения по прерыванию от Systick.
	   В противном случае прерывание от Systick пробудит устройство через 1 мс. */
	HAL_SuspendTick();
	HAL_RTCEx_SetWakeUpTimer_IT(&hrtc, (2048 - 1), RTC_WAKEUPCLOCK_RTCCLK_DIV16);

	__HAL_RCC_PWR_CLK_ENABLE();
	/* Запрос на переход в режим STOP */
	HAL_PWR_EnterSTOPMode(PWR_LOWPOWERREGULATOR_ON, PWR_STOPENTRY_WFI);

	HAL_RTCEx_DeactivateWakeUpTimer(&hrtc);
	SystemClock_Config();
	/* Возобновление отсчета тиков, если он был приостановлен до перехода в режим остановки*/
	HAL_ResumeTick();
	/* TODO: Включение GPIO после остановки */
//		MX_GPIO_Init();
	if (!HAL_GPIO_ReadPin(BTN_GPIO_Port, BTN_Pin))
	{
		_wakeup_counter++;
	}
	else
	{
		_wakeup_counter = 0;
	}
}

// Возможно пригодится для каких-либо операций во время выхода из режима остановки
void HAL_RTCEx_WakeUpTimerEventCallback(RTC_HandleTypeDef *hrtc)
{
	__HAL_RTC_WAKEUPTIMER_CLEAR_FLAG(hrtc, RTC_FLAG_WUTF);
}

/*!
 * I2C read function
 */
BMI2_INTF_RETURN_TYPE bmi2_i2c_read(uint8_t reg_addr, uint8_t *reg_data, uint32_t len, void *intf_ptr)
{
//	&BMI270_BUS
//	HAL_StatusTypeDef ret =
//	HAL_I2C_Mem_Read((I2C_HandleTypeDef*)intf_ptr, 0x68 << 1, reg_addr, I2C_MEMADD_SIZE_8BIT, reg_data, len, 500);
	HAL_I2C_Mem_Read_DMA((I2C_HandleTypeDef*)intf_ptr, 0x68 << 1, reg_addr, I2C_MEMADD_SIZE_8BIT, reg_data, len);
	while(hi2c1.hdmatx->State == HAL_DMA_STATE_BUSY)
	;

	return 0;
}

/*!
 * I2C write function
 */
BMI2_INTF_RETURN_TYPE bmi2_i2c_write(uint8_t reg_addr, const uint8_t *reg_data, uint32_t len, void *intf_ptr)
{
//	&BMI270_BUS
//	HAL_StatusTypeDef ret =
	uint8_t data[100];
	memcpy(data, reg_data, len);
//	HAL_I2C_Mem_Write((I2C_HandleTypeDef*)intf_ptr, 0x68 << 1, reg_addr, I2C_MEMADD_SIZE_8BIT, data, len, 1000);
	HAL_I2C_Mem_Write_DMA((I2C_HandleTypeDef*)intf_ptr, 0x68 << 1, reg_addr, I2C_MEMADD_SIZE_8BIT, data, len);
	while(hi2c1.hdmarx->State == HAL_DMA_STATE_BUSY)
	;

	return 0;
}

/*!
 * Delay function
 */
void bmi2_delay_us(uint32_t period, void *intf_ptr)
{
    HAL_Delay(period);
}

void BMI270_burst_write_data(uint8_t reg, uint8_t* data, uint16_t size)
{
	HAL_StatusTypeDef status;
	status = HAL_I2C_Mem_Write(&hi2c1, 0x68 << 1, reg, 1, data, size, 100);
}

