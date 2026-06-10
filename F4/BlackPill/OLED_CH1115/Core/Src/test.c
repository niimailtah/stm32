/**
  ******************************************************************************
  * @file    test.c
  * @brief   This file provides tests of drawing on LCD display.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include <wchar.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"
#include "main.h"
#include "gui.h"


/**
  * @brief
  */
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

/**
  * @brief Тест отрисовки точки
  */
void test_OLED_DrawPoint()
{
	uint8_t x_point = 10;
	uint8_t y_point = 10;

	OLED_DrawPoint(.x=x_point, .y=y_point);
	OLED_RefreshScreen();

	return;
}

/**
  * @brief Тест отрисовки линии
  */
void test_OLED_DrawLine()
{
	uint8_t x_start = 10;
	uint8_t y_start = 10;
	uint8_t x_end = 64;
	uint8_t y_end = 32;

	OLED_DrawLine(.x1=x_start,       .y1=y_start,      .x2=x_end, .y2=y_end);
	OLED_DrawLine(.x1=127 - x_start, .y1=y_start,      .x2=x_end, .y2=y_end);
	OLED_DrawLine(.x1=127 - x_start, .y1=63 - y_start, .x2=x_end, .y2=y_end);
	OLED_DrawLine(.x1=x_start,       .y1=63 - y_start, .x2=x_end, .y2=y_end);
	OLED_RefreshScreen();

    return;
}

/**
  * @brief
  */
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

/**
  * @brief Тест отрисовки прямоугольника
  */
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

/**
  * @brief Тест отрисовки прямоугольника со скругленными краями
  */
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

/**
  * @brief Тест отрисовки дуги
  */
void test_OLED_DrawArc()
{
	return;
}

/**
  * @brief Тест отрисовки круга
  */
void test_OLED_DrawCircle()
{
	uint8_t x_center = 64;
	uint8_t y_center = 32;
	uint8_t radius = 16;

	OLED_DrawCircle(.x=x_center, .y=y_center, .radius=radius);
	OLED_RefreshScreen();

	return;
}

/**
  * @brief Тест вывода текста
  */
void test_OLED_DrawText()
{
	uint8_t x_offset = 10;
	uint8_t y_offset = 10;
	uint8_t sym = 0x30 + 8; // '8'

	OLED_DrawConsole8Char(.x=x_offset, .y=y_offset, .sym=sym);
	OLED_RefreshScreen();

	return;
}

/**
  * @brief Тест вывода текста шрифтом Terminus
  */
void test_OLED_DrawTerminusText()
{
	uint8_t x_offset = 10;
	uint8_t y_offset = 10;
	uint8_t sym = 0x30 + 8; // '8'
	OLED_Font_Style_e font_style = OLED_Font_Bold;

	OLED_DrawTerminus16Char(.x=x_offset, .y=y_offset, .sym=sym, .style=font_style);
	OLED_DrawTerminus24Char(.x=x_offset + 8, .y=y_offset, .sym=sym, .style=font_style);
	OLED_RefreshScreen();

	return;
}

/**
  * @brief Тест отрисовки изображения
  */
void test_OLED_DrawBitmap()
{
	uint8_t x_offset = 10;
	uint8_t y_offset = 10;
	uint8_t BTBitmapTL[8] = {
			0b00000000,
			0b00000001,
			0b00000001,
			0b00000001,
			0b00000001,
			0b00011001,
			0b00001101,
			0b00000011,
	};
	uint8_t BTBitmapTR[8] = {
			0b00000000,
			0b00000000,
			0b11000000,
			0b00100000,
			0b00010000,
			0b00011000,
			0b01100000,
			0b10000000,
	};
	uint8_t BTBitmapBL[8] = {
			0b00000011,
			0b00001101,
			0b00011001,
			0b00000001,
			0b00000001,
			0b00000001,
			0b00000001,
			0b00000000,
	};
	uint8_t BTBitmapBR[8] = {
			0b10000000,
			0b01100000,
			0b00011000,
			0b00010000,
			0b00100000,
			0b11000000,
			0b00000000,
			0b00000000,
	};

	OLED_DrawBitmap(.x=x_offset,     .y=y_offset,     .width=8, .height=8, .bitmap=BTBitmapTL);
	OLED_DrawBitmap(.x=x_offset + 8, .y=y_offset,     .width=8, .height=8, .bitmap=BTBitmapTR);
	OLED_DrawBitmap(.x=x_offset,     .y=y_offset + 8, .width=8, .height=8, .bitmap=BTBitmapBL);
	OLED_DrawBitmap(.x=x_offset + 8, .y=y_offset + 8, .width=8, .height=8, .bitmap=BTBitmapBR);
	x_offset += 16;
	OLED_DrawBitmap(.x=x_offset,     .y=y_offset,     .width=8, .height=8, .bitmap=BTBitmapTL, .color=OLED_Color_Black);
	OLED_DrawBitmap(.x=x_offset + 8, .y=y_offset,     .width=8, .height=8, .bitmap=BTBitmapTR, .color=OLED_Color_Black);
	OLED_DrawBitmap(.x=x_offset,     .y=y_offset + 8, .width=8, .height=8, .bitmap=BTBitmapBL, .color=OLED_Color_Black);
	OLED_DrawBitmap(.x=x_offset + 8, .y=y_offset + 8, .width=8, .height=8, .bitmap=BTBitmapBR, .color=OLED_Color_Black);
	OLED_RefreshScreen();

	return;
}

/*****END OF FILE****/
