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
#include "ssd1306.h"
#include "ssd1306_tests.h"

void App::Init()
{
	return;
}

void App::Loop()
{
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
		ssd1306_TestAll();
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
