/**
  ******************************************************************************
  * @file    test.c
  * @brief   This file provides tests of drawing on LCD display.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "test.h"
#include "main.h"
#include "gui.h"

void test_OLED_Ranges()
{
	uint8_t x1 = 20;
	uint8_t x2 = 50;
	uint8_t y1 = 20;
	uint8_t y2 = 50;
	uint8_t line[5] =
	{
			0b00000001,
			0b00000010,
			0b00000100,
			0b00001000,
			0b00010000,
	};

	OLED_SetWindow(x1, x2, y1, y2);
	for (int i = 0; i < 5; ++i)
	{
		SendDataByte(line[i]);
	}
}

void test_OLED_DrawPoint()
{
	uint8_t x_point = 10;
	uint8_t y_point = 10;

	OLED_DrawPoint(x_point, y_point, OLED_Color_White);
	OLED_RefreshScreen();

	return;
}

void test_OLED_DrawLine()
{
	uint8_t x_start = 10;
	uint8_t y_start = 10;
	uint8_t x_end = 64;
	uint8_t y_end = 32;

	OLED_DrawLine(x_start, y_start, x_end, y_end, OLED_Color_White);
	OLED_RefreshScreen();

    return;
}

void test_OLED_DrawPattern()
{
	uint8_t page, column;
	uint8_t pattern = 0b10101010;

    for (page = 0; page < 8; ++page)
    {
        for (column = 0; column < 128; ++column)
        {
        	Image[page * 128 + column] = pattern;
        }
    }
	OLED_RefreshScreen();

	return;
}

void test_OLED_DrawRect()
{
	uint8_t x_offset = 0;
	uint8_t y_offset = 0;
	uint8_t width = 127;
	uint8_t height = 63;

	OLED_DrawRect(x_offset, y_offset, width, height, OLED_Color_White);
	OLED_RefreshScreen();

	return;
}

void test_OLED_DrawRoundRect()
{
	uint8_t x_offset = 10;
	uint8_t y_offset = 10;
	uint8_t width = 50;
	uint8_t height = 20;
	uint8_t radius = 5;

	OLED_DrawRoundRect(x_offset, y_offset, width, height, radius, OLED_Color_White);
	OLED_DrawRoundRect(x_offset + 1, y_offset + 1, width - 2, height - 2, radius - 1, OLED_Color_Black);
	OLED_RefreshScreen();

	return;
}

void test_OLED_DrawArc()
{
	return;
}

void test_OLED_DrawCircle()
{
	uint8_t x_center = 64;
	uint8_t y_center = 32;
	uint8_t radius = 16;

	OLED_DrawCircle(x_center, y_center, radius, OLED_Color_White);
	OLED_RefreshScreen();

	return;
}

void test_OLED_DrawText()
{
	uint8_t x_offset = 10;
	uint8_t y_offset = 10;
//	const char ch = 'A';

	OLED_DrawChar(x_offset, y_offset, 'A', &Font8, OLED_Color_White);
	OLED_DrawChar(x_offset + 10, y_offset, 'B', &Font8, OLED_Color_White);
	OLED_DrawChar(x_offset + 20, y_offset, 'C', &Font8, OLED_Color_White);
	OLED_DrawChar(x_offset + 30, y_offset, 'D', &Font8, OLED_Color_White);
	OLED_RefreshScreen();

	return;
}

void test_OLED_DrawTerminusText()
{
	uint8_t x_offset = 10;
	uint8_t y_offset = 10;
	uint8_t sym = 48; // '0'
	uint8_t font = 0; // 0 - regular, 1 - bold

	OLED_DrawTerminusChar(x_offset, y_offset, sym, font, OLED_Color_White);
	OLED_RefreshScreen();

	return;
}

void test_OLED_DrawMainScreen()
{
//	uint8_t x_offset = 10;
	uint8_t y_offset = 12;
	uint8_t x_pos = 50;
	uint8_t y_pos = 15;

	OLED_DrawChar(78, y_offset, 'm', &Font24, OLED_Color_White);
	for (int i = 0; i < 10; ++i)
	{
		OLED_DrawXColba(x_pos + i);
		OLED_DrawYColba(y_pos + i);
		OLED_DrawRect(61, y_offset, 17, 24, OLED_Color_Black);
		OLED_DrawChar(10, y_offset, '0', &Font24, OLED_Color_White);
		OLED_DrawChar(27, y_offset, ',', &Font24, OLED_Color_White);
		OLED_DrawChar(44, y_offset, '0', &Font24, OLED_Color_White);
		OLED_DrawChar(61, y_offset, '0' + i, &Font24, OLED_Color_White);
		OLED_RefreshScreen();
		HAL_Delay(75);
	}
	for (int i = 8; i > 0; --i)
	{
		OLED_DrawXColba(x_pos + i);
		OLED_DrawYColba(y_pos + i);
		OLED_DrawRect(61, y_offset, 17, 24, OLED_Color_Black);
		OLED_DrawChar(61, y_offset, '0' + i, &Font24, OLED_Color_White);
		OLED_RefreshScreen();
		HAL_Delay(75);
	}

	return;
}

/*****END OF FILE****/
