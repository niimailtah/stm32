/**
 * @file:      app.cpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#include "app.hpp"
#include "ili9341.h"
#include "demos.h"

#include "main.h"
#include "rng.h"
#include "fsmc.h"
#include "ili9341.hpp"

static TILI9341_GPIO backLightPin{LCD_BL_GPIO_Port, LCD_BL_Pin};
static TILI9341 ili9341{&hsram1, backLightPin};

void App::Init()
{
//	LCD_ILI9341_init();
	ili9341.Init();

	return;
}

void App::Loop()
{
	while (true)
	{
		// demo 01
		ili9341.LCD_ClrScr(COLOR_565_RED);
	    HAL_Delay(1000);

	    // demo_02
	    ili9341.LCD_ClrScr(COLOR_565_BLACK);
		for (uint32_t i{0}; i < 15000; i++)
		{
			ili9341.LCD_DisAPoint(HAL_RNG_GetRandomNumber(&hrng)%LCD_ROW_NUM,
					HAL_RNG_GetRandomNumber(&hrng)%LCD_COL_NUM,
					HAL_RNG_GetRandomNumber(&hrng)%0xffff);
			__NOP();
		}
		HAL_Delay(500);
		ili9341.LCD_ClrScr(COLOR_565_BLACK);

		// demo  03
		ili9341.LCD_ClrScr(COLOR_565_BLACK);
	    for (uint32_t i{0}; i < 1000; i++)
	    {
	    	ili9341.LCD_DrawLine(LCD_RandColor(),
	        		HAL_RNG_GetRandomNumber(&hrng)%LCD_ROW_NUM, HAL_RNG_GetRandomNumber(&hrng)%LCD_COL_NUM,
					HAL_RNG_GetRandomNumber(&hrng)%LCD_ROW_NUM, HAL_RNG_GetRandomNumber(&hrng)%LCD_COL_NUM);
	        HAL_Delay(1);
	    }
		HAL_Delay(500);
		ili9341.LCD_ClrScr(COLOR_565_BLACK);

		// demo 04
		ili9341.LCD_ClrScr(COLOR_565_BLACK);
	    for (uint32_t i{0}; i < 1500; i++)
	    {
	    	ili9341.LCD_DisALoop(HAL_RNG_GetRandomNumber(&hrng)%280+20,
	                HAL_RNG_GetRandomNumber(&hrng)%200+20,
	                HAL_RNG_GetRandomNumber(&hrng)%20,
	                LCD_RandColor());
	        HAL_Delay(1);
	    }
		HAL_Delay(500);
	    ili9341.LCD_ClrScr(COLOR_565_BLACK);

	    // demo 5
	    u16 color;
	    u16 x0, y0, x1, y1;

	    ili9341.LCD_ClrScr(COLOR_565_BLACK);
	    for (uint32_t i{0}; i < LCD_COL_NUM; i++)
	    {
	    	ili9341.LCD_DrawLine(LCD_RandColor(), 0, i,LCD_ROW_NUM - 1, i);
	    }
	    HAL_Delay(500);
	    for (uint32_t i{0}; i < LCD_ROW_NUM; i++)
	    {
	    	ili9341.LCD_DrawLine(LCD_RandColor(), i, 0, i, LCD_COL_NUM - 1);
	    }
	    HAL_Delay(500);

	    x0 = 0;
	    x1 = LCD_ROW_NUM - 1;
	    y0 = 0;
	    y1 = LCD_COL_NUM - 1;

	    for (uint32_t i{0}; i < LCD_COL_NUM/2; i++)
	    {
	        color = LCD_RandColor();
	        ili9341.LCD_DisNoFillRectangular(color, x0, y0, x1, y1);
	        x0++;
	        x1--;
	        y0++;
	        y1--;
	    }
	    HAL_Delay(500);
	    ili9341.LCD_ClrScr(COLOR_565_BLACK);

	    // demo 6
	    for (uint32_t i{0}; i < 2000; i++)
	    {
	        color = LCD_RandColor();
	        x0 = HAL_RNG_GetRandomNumber(&hrng)%LCD_ROW_NUM;
	        x1 = HAL_RNG_GetRandomNumber(&hrng)%LCD_ROW_NUM;
	        y0 = HAL_RNG_GetRandomNumber(&hrng)%LCD_COL_NUM;
	        y1 = HAL_RNG_GetRandomNumber(&hrng)%LCD_COL_NUM;

	        ili9341.LCD_DisARectangular(x0, y0, x1, y1, color);
	    }
	    HAL_Delay(500);

		start_demos();
	}

	return;
}

void App::Run()
{
	Init();
	Loop();

	return;
}
