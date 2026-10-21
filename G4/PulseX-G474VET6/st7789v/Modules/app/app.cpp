/**
 * @file:      app.cpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#include <cstdio>
#include "app.hpp"
#include "tim.h"
#include "spi.h"
#include "usart.h"
#include "st7789.h"

volatile uint32_t brightness{0xEF00};

////__attribute__((section(".ccmram"))) ST7789V3 display(&(ST7789_BUS),
#define ST7789_BUS hspi2
ST7789V3 display(&(ST7789_BUS),
                 ST7789_GPIO(LCD_CS_GPIO_Port, LCD_CS_Pin),      // CS
                 ST7789_GPIO(LCD_DC_GPIO_Port, LCD_DC_Pin),    // DC
                 ST7789_GPIO(LCD_RES_GPIO_Port, LCD_RES_Pin)); // RST

void App::Init()
{
	// Начальная установка подсветки дисплея
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
//	// Запускаем таймер для энкодера
//	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
//	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_2);
//
    HAL_TIM_PWM_Start(&(ST7789_BLK_TIM_HANDLE), ST7789_BLK_PWM_CHANNAL);
    display.setBrightness(0xFF00);  // первоначальная яркость подсветки
    HAL_Delay(20);
////    Delays::delay_us(20000);
    display.init();
    display.setRotation(ST7789_Rotation::Rotation90);
//    display.clear();

	return;
}

void App::Loop()
{
	int32_t prevCounter{0};
	uint8_t color{1};
	while (true)
	{
//		int currCounter = __HAL_TIM_GET_COUNTER(&htim2);
//		if (HAL_GPIO_ReadPin(BTN_GPIO_Port, BTN_Pin) == GPIO_PIN_SET)
//		{
//            HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);
//            printf("\r");
//            display.fillRect(10, 10, 100, 100, 1);
//		}
//		else
//		{
//            HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);
//            if (currCounter != prevCounter)
//            {
//                if (currCounter > prevCounter)
//                {
//                    brightness -= 0xFF;
//                    if (brightness < 0x1FF)
//                    {
//                        brightness = 0x1FF;
//                    }
//                }
//                else
//                {
//                    brightness += 0xFF;
//                    if (brightness > 0xEF00)
//                    {
//                        brightness = 0xEF00;
//                    }
//                }
//                prevCounter = currCounter;
//                printf("%d\r", currCounter);
//                display.setBrightness(brightness);
//            }
//		}
		display.fillRect(10, 10, 100, 100, color);
		color = color == 1 ? 0 : 1;
		HAL_GPIO_TogglePin(LED_R_GPIO_Port, LED_R_Pin);
		HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin);
		HAL_GPIO_TogglePin(LED_B_GPIO_Port, LED_B_Pin);
		HAL_Delay(500);
	}

	return;
}

void App::Run()
{
	Init();
	Loop();

	return;
}
