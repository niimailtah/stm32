/**
 * @file:      app.cpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#include <cstdio>
#include "app.hpp"

#include "st7789.hpp"
#include "global.hpp"
#include "tim.h"
#include "spi.h"
#include "usart.h"

static volatile uint32_t brightness{0xEF00};


void App::Init()
{
	// Начальная установка подсветки дисплея
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
	// Запускаем таймер для энкодера
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_2);

    HAL_TIM_PWM_Start(&(ST7789_BLK_TIM_HANDLE), ST7789_BLK_PWM_CHANNAL);
    display.setBrightness(0xFF00);  // первоначальная яркость подсветки
    HAL_Delay(20);
//    Delays::delay_us(20000);
    display.init();
    display.setRotation(ST7789_Rotation::Rotation180);
    display.clear();

	return;
}

void App::Loop()
{
	int32_t prevCounter{0};
    for (int i = 0; i < 20; i++)
    {
        display.m_frameBuffer[50][10 + i] = 1;
        display.m_frameBuffer[60][10 + i] = 2;
        display.m_frameBuffer[70][10 + i] = 3;
        display.m_frameBuffer[80][10 + i] = 4;
    }

    display.fillRectFB(20, 40, 92, 64, 5);
    display.drawStringFB(L"012345", 20, 60, 1, 2);
	while (true)
	{
		int currCounter = __HAL_TIM_GET_COUNTER(&htim2);
		if (HAL_GPIO_ReadPin(BTN_GPIO_Port, BTN_Pin)   == GPIO_PIN_RESET &&
		    HAL_GPIO_ReadPin(KEY0_GPIO_Port, KEY0_Pin) == GPIO_PIN_SET)
		{
            HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);
            if (currCounter != prevCounter)
            {
                if (currCounter > prevCounter)
                {
                    brightness -= 0xFF;
                    if (brightness < 0x1FF)
                    {
                        brightness = 0x1FF;
                    }
                }
                else
                {
                    brightness += 0xFF;
                    if (brightness > 0xEF00)
                    {
                        brightness = 0xEF00;
                    }
                }
                prevCounter = currCounter;
                printf("%d\r", currCounter);
                display.setBrightness(brightness);
            }
            display.fillRect(10, 10, 100, 100, 1);
//            display.flushBuffer(10, 10, 109, 109);
		}
		else
		{
            HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);
//            display.fillRect(10, 10, 100, 100, 1);
            display.flushBuffer(10, 10, 109, 109);
		}
	}

	return;
}

void App::Run()
{
	Init();
	Loop();

	return;
}
