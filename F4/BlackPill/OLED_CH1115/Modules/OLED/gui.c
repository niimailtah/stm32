/**
  ******************************************************************************
  * @file    gui.c
  * @brief   This file provides GUI function to LCD driver.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "gui.h"
#include "cp866-8x8.h"
#include "ter-k16n.h"
#include "ter-k16b.h"
#include "ter-k24n.h"
#include "ter-k24b.h"
#include "u8g2.h"
#include <stdbool.h>
#include <string.h>

/* Private variables ---------------------------------------------------------*/
static volatile uint8_t sym8bit_buf[(TERMINUS_K8x16N_CHAR_WIDTH*TERMINUS_K8x16N_CHAR_HEIGHT)];
static volatile uint16_t sym16bit_buf[(TERMINUS_K12x24N_CHAR_WIDTH*TERMINUS_K12x24N_CHAR_HEIGHT)];

/**
  * @brief Очистка экрана
  * @return
  */
void OLED_Clear()
{
#ifndef U8G2
	memset(Image, 0, 8 * 128);
#else
	u8g2_ClearDisplay(&myDisplay);
#endif // U8G2

	return;
}

/**
  * @brief Установка точки в памяти модуля дисплея
  * @param[in] структура \с Point_s
  * 	 \c x, \c y, \c color Координаты и цвет точки
  * @return структура \с Point_s
  *      \error Сообщение об ошибке
  */
Point_s OLED_SetPixel_imp(Point_s in)
{
	Point_s out = in;
	// поворот на 180 градусов
	out.y = 63 - out.y;
	out.x = 127 - out.x;

#ifdef U8G2
	switch (out.color)
	{
	case OLED_Color_White:
		u8g2_SetDrawColor(&myDisplay, 1);
		break;
	case OLED_Color_Invert:
		u8g2_SetDrawColor(&myDisplay, 2);
		break;
	case OLED_Color_Black:
	default:
		u8g2_SetDrawColor(&myDisplay, 0);
		break;
	}
	u8g2_DrawPixel(&myDisplay, out.x, out.y);
#else
	uint8_t page;
	uint8_t column;
	uint8_t temp = 0;

	page = out.y / 8;
	column = out.x;
	temp = 1 << out.y % 8;
	if (out.color == OLED_Color_White)
	{
		Image[page * 128 + column] |= temp;
	}
	else
	{
		Image[page * 128 + column] &= ~temp;
	}
#endif // U8G2

	return out;
}

/**
  * @brief Отрисовка точки
  * @param[in] структура \с Point_s
  * 	 \c x, \c y, \c color Координаты и цвет точки
  * @return структура \с Point_s
  *      \error Сообщение об ошибке
  */
Point_s OLED_DrawPoint_imp(Point_s in)
{
	const uint8_t width = 128;
	const uint8_t height = 64;

	if (in.x > width || in.y > height)
	{
//		Debug("Exceeding display boundaries\r\n");
		return (Point_s){.error="Exceeding display boundaries\r\n"};
	}
	Point_s out = in;

	return OLED_SetPixel(.x=out.x, .y=out.y, .color=out.color);
}

/**
  * @brief Отрисовка линии
  * @param[in] структура \с Point_s
  *       \c x1, \c y1 Координаты начальной точки
  *       \с x2, \c y2 Координаты конечной точки
  *       \c color Цвет линии
  * @return структура \с Line_s
  *      \error Сообщение об ошибке
  */
Line_s OLED_DrawLine_imp(Line_s in)
{
	Line_s  out = in;
    uint8_t x_point = out.x1;
    uint8_t y_point = out.y1;
    int dx = (int)out.x2 - (int)out.x1 >= 0 ? out.x2 - out.x1 : out.x1 - out.x2;
    int dy = (int)out.y2 - (int)out.y1 <= 0 ? out.y2 - out.y1 : out.y1 - out.y2;

    // Increment direction, 1 is positive, -1 is counter;
    int x_addway = out.x1 < out.x2 ? 1 : -1;
    int y_addway = out.y1 < out.y2 ? 1 : -1;

    //Cumulative error
    int esp = dx + dy;
    for (;;)
    {
    	OLED_SetPixel(.x=x_point, .y=y_point, .color=out.color);
        if (2 * esp >= dy)
        {
            if (x_point == out.x2)
            {
                break;
            }
            esp += dy;
            x_point += x_addway;
        }
        if (2 * esp <= dx)
        {
            if (y_point == out.y2)
            {
                break;
            }
            esp += dx;
            y_point += y_addway;
        }
    }

    return out;
}

/**
  * @brief Отрисовка прямоугольника
  * @param[in] x_offset, y_offset Координаты правого верхнего угла
  * @param[in] width Ширина прямоугольника
  * @param[in] height Высота прямоугольника
  * @param[in] color Цвет прямоугольника
  * @return
  */
void OLED_DrawRect(uint8_t x_offset, uint8_t y_offset, uint8_t width, uint8_t height, OLED_Color_e color)
{
	if (true)
	{
		for (volatile int y_point = y_offset; y_point < height + y_offset; ++y_point)
		{
			OLED_DrawLine(.x1=x_offset, .y1=y_point, .x2=x_offset + width, .y2=y_point, .color=color);
		}
	}
	else
	{
		OLED_DrawLine(.x1=x_offset,         .y1=y_offset,          .x2=x_offset + width, .y2=y_offset,          .color=color);
		OLED_DrawLine(.x1=x_offset + width, .y1=y_offset,          .x2=x_offset + width, .y2=y_offset + height, .color=color);
		OLED_DrawLine(.x1=x_offset + width, .y1=y_offset + height, .x2=x_offset,         .y2=y_offset + height, .color=color);
		OLED_DrawLine(.x1=x_offset,         .y1=y_offset + height, .x2=x_offset,         .y2=y_offset,          .color=color);
	}

	return;
}

/**
  * @brief Отрисовка скругленного прямоугольника
  * @param[in] x_offset, y_offset Координаты правого верхнего угла
  * @param[in] width Ширина прямоугольника
  * @param[in] height Высота прямоугольника
  * @param[in] radius Радиус скругления углов
  * @param[in] color Цвет заливки прямоугольника
  * @return
  */
void OLED_DrawRoundRect(uint8_t x_offset, uint8_t y_offset, uint8_t width, uint8_t height, uint8_t radius, OLED_Color_e color)
{
	int8_t x_left_center, x_right_center, y_top_center, y_bottom_center;
	x_left_center = x_offset + radius;
	x_right_center = x_offset + width - radius;
	y_top_center = y_offset + radius;
	y_bottom_center = y_offset + height - radius;
    int8_t x_current, y_current;
    x_current = 0;
    y_current = radius;

    int8_t esp = 3 - (radius << 1);

    int8_t sCountY;
    while (x_current <= y_current)
    {
    	for (sCountY = x_current; sCountY <= y_current; sCountY ++)
    	{
    		OLED_DrawPoint(.x=x_right_center + x_current, .y=y_bottom_center + sCountY,   .color=color); // BR2
    		OLED_DrawPoint(.x=x_left_center - x_current,  .y=y_bottom_center + sCountY,   .color=color); // BL1
    		OLED_DrawPoint(.x=x_left_center - sCountY,    .y=y_bottom_center + x_current, .color=color); // BL2
    		OLED_DrawPoint(.x=x_left_center - sCountY,    .y=y_top_center - x_current,    .color=color); // TL1
    		OLED_DrawPoint(.x=x_left_center - x_current,  .y=y_top_center - sCountY,      .color=color); // TL2
    		OLED_DrawPoint(.x=x_right_center + x_current, .y=y_top_center - sCountY,      .color=color); // TR1
    		OLED_DrawPoint(.x=x_right_center + sCountY,   .y=y_top_center - x_current,    .color=color); // TR2
    		OLED_DrawPoint(.x=x_right_center + sCountY,   .y=y_bottom_center + x_current, .color=color); // BR1
    	}
    	if (esp < 0)
    	{
    		esp += 4 * x_current + 6;
    	}
    	else
    	{
    		esp += 10 + 4 * (x_current - y_current);
    		y_current--;
    	}
    	x_current++;
    }
    OLED_DrawRect(x_offset + radius, y_offset, width - 2 * radius, radius + 1, color);
    OLED_DrawRect(x_offset, y_offset + radius, width, height - 2 * radius, color);
    OLED_DrawRect(x_offset + radius, y_offset + height - radius, width - 2 * radius, radius + 1, color);

    return;
}

/**
  * @brief Отрисовка круга
  * @param[in] структура \с Circle_s
  *       \c x, \c y Координаты центра круга
  *       \c radius Радиус круга
  *       \c color Цвет заливки круга
  * @return структура \с Circle_s
  *      \error Сообщение об ошибке
  */
Circle_s OLED_DrawCircle_imp(Circle_s in)
{
    if (in.x > 128 || in.y >= 64)
    {
//        Debug("OLED_DrawCircle Input exceeds the normal display range\r\n");
        return (Circle_s){.error="OLED_DrawCircle Input exceeds the normal display range\r\n"};
    }

	Circle_s out = in;
    // Draw a circle from(0, R) as a starting point
    int8_t x_current, y_current;
    x_current = 0;
    y_current = out.radius;

    // Cumulative error,judge the next point of the logo
    int8_t esp = 3 - (out.radius << 1);

    int8_t sCountY;
    while (x_current <= y_current) // Realistic circles
    {
    	for (sCountY = x_current; sCountY <= y_current; sCountY++)
    	{
    		OLED_DrawPoint(.x=out.x + x_current, .y=out.y + sCountY,   .color=out.color);//1 BR2
    		OLED_DrawPoint(.x=out.x - x_current, .y=out.y + sCountY,   .color=out.color);//2 BL1
    		OLED_DrawPoint(.x=out.x - sCountY,   .y=out.y + x_current, .color=out.color);//3 BL2
    		OLED_DrawPoint(.x=out.x - sCountY,   .y=out.y - x_current, .color=out.color);//4 TL1
    		OLED_DrawPoint(.x=out.x - x_current, .y=out.y - sCountY,   .color=out.color);//5 TL2
    		OLED_DrawPoint(.x=out.x + x_current, .y=out.y - sCountY,   .color=out.color);//6 TR1
    		OLED_DrawPoint(.x=out.x + sCountY,   .y=out.y - x_current, .color=out.color);//7 TR2
    		OLED_DrawPoint(.x=out.x + sCountY,   .y=out.y + x_current, .color=out.color);//  BR1
    	}
    	if (esp < 0)
    	{
    		esp += 4 * x_current + 6;
    	}
    	else
    	{
    		esp += 10 + 4 * (x_current - y_current);
    		y_current--;
    	}
    	x_current++;
    }
//    else // Draw a hollow circle
//    {
//        while (x_current <= y_current)
//    		{
//            OLED_DrawPoint(.x=out.x + x_current, .y=out.y + y_current, .color=out.color);//1 BR2
//            OLED_DrawPoint(.x=out.x - x_current, .y=out.y + y_current, .color=out.color);//2 BL1
//            OLED_DrawPoint(.x=out.x - y_current, .y=out.y + x_current, .color=out.color);//3 BL2
//            OLED_DrawPoint(.x=out.x - y_current, .y=out.y - x_current, .color=out.color);//4 TL1
//            OLED_DrawPoint(.x=out.x - x_current, .y=out.y - y_current, .color=out.color);//5 TL2
//            OLED_DrawPoint(.x=out.x + x_current, .y=out.y - y_current, .color=out.color);//6 TR1
//            OLED_DrawPoint(.x=out.x + y_current, .y=out.y - x_current, .color=out.color);//7 TR2
//            OLED_DrawPoint(.x=out.x + y_current, .y=out.y + x_current, .color=out.color);//0 BR1
//
//            if (esp < 0)
//            {
//                esp += 4 * c_current + 6;
//            }
//            else
//            {
//                esp += 10 + 4 * (x_current - y_current);
//                y_current--;
//            }
//            x_current++;
//        }
//    }

    return out;
}

/**
  * @brief
  * @param
  * @return
  */
void OLED_DrawChar(uint8_t x_offset, uint8_t y_offset, const char ch, OLED_Color_e color)
{

	return;
}

/**
  * @brief
  * @param
  * @return
  */
void OLED_DrawText(uint8_t x_offset, uint8_t y_offset, const char *str, OLED_Color_e color)
{
	return;
}

/**
  * @brief Отрисовка символа 8x8
  * @param[in] структура \c Char_s
  *       \c x, \c y Координаты левого верхнего угла глифа
  *       \c sym   Код символа
  *       \c style Стиль
  *       \c color Цвет
  * @return структура \с Char_s
  *       \error Сообщение об ошибке
  */
Char_s OLED_DrawConsole8Char_imp(Char_s in)
{
	uint8_t column;
	uint8_t row;

	Char_s out = in;
	const uint8_t *char_buf = &CP866_8x8[out.sym * FONT_CP866_8_CHAR_HEIGHT * FONT_CP866_8_CHAR_WIDTH];

	for (row = 0; row < 8; ++row)
	{
		for (column = 0; column < 8; ++column)
		{
			if (char_buf[row] & (0x80 >> column))
			{
				OLED_SetPixel(.x=out.x + column, .y=out.y + row, .color=out.color);
			}
		}
	}

	return out;
}

/**
  * @brief Отрисовка символа 8x16
  * @param[in] структура \c Char_s
  *       \c x, \c y Координаты левого верхнего угла глифа
  *       \c sym   Код символа
  *       \c style Стиль
  *       \c color Цвет
  * @return структура \с Char_s
  *       \error Сообщение об ошибке
  */
Char_s OLED_DrawTerminus16Char_imp(Char_s in)
{
	uint8_t column;
	uint8_t row;

	Char_s out = in;
	// Заполняется глобальный статический массив sym8bit_buf
	KOI8Rx16_decompress_sym(out.sym, out.style);
	for (row = 0; row < 16; ++row)
	{
		for (column = 0; column < 8; ++column)
		{
			if (sym8bit_buf[row] & (0x80 >> column))
			{
				OLED_SetPixel(.x=out.x + column, .y=out.y + row, .color=out.color);
			}
		}
	}

	return out;
}

/**
  * @brief Отрисовка символа 12x24
  * @param[in] структура \c Char_s
  *       \c x, \c y Координаты левого верхнего угла глифа
  *       \c sym   Код символа
  *       \c style Стиль
  *       \c color Цвет
  * @return структура \с Char_s
  *       \error Сообщение об ошибке
  */
Char_s OLED_DrawTerminus24Char_imp(Char_s in)
{
	uint8_t column;
	uint8_t row;

	Char_s out = in;
	// Заполняется глобальный статический массив sym16bit_buf
	KOI8Rx24_decompress_sym(out.sym, out.style);
	for (row = 0; row < 24; ++row)
	{
		for (column = 0; column < 16; ++column)
		{
			if (sym16bit_buf[row] & (0x8000 >> column))
			{
				OLED_SetPixel(.x=out.x + column, .y=out.y + row, .color=out.color);
			}
		}
	}

	return out;
}

/**
  * @brief Разархивирование глифа символа
  *    Заполняет глобальный статический массив sym8bit_buf
  * @param[in] \c sym   Код символа
  * @param[in] \c style Стиль
  * @return
  */
void KOI8Rx16_decompress_sym(uint8_t sym, OLED_Font_Style_e style)
{
    uint16_t idx;

    idx = (!style) ? TERMINUS_K8x16N_ID[sym] : TERMINUS_K8x16B_ID[sym];
    uint8_t i = 0;
    while (i < (TERMINUS_K8x16N_CHAR_WIDTH * TERMINUS_K8x16N_CHAR_HEIGHT))
    {
        uint8_t s;

        s = (!style) ? TERMINUS_K8x16N[idx] : TERMINUS_K8x16B[idx];
        if (s >= 0xf0)
        {
            s &= 0x0f;
            if (s == 0)
            {
            	s = 16;
            }

            for (volatile uint8_t j = 0; j < s; ++j)
            {
                sym8bit_buf[i + j] = (!style) ? TERMINUS_K8x16N[idx + 1] : TERMINUS_K8x16B[idx + 1];
            }
            i += s;
            idx += 2;

        }
        else
        {
            sym8bit_buf[i] = s;
            ++idx; ++i;
        }
    }

    return;
}

/**
  * @brief Разархивирование глифа символа
  *     Заполняет глобальный статический массив sym16bit_buf
  * @param[in] \c sym   Код символа
  * @param[in] \c style Стиль
  * @return
  */
void KOI8Rx24_decompress_sym(uint8_t sym, OLED_Font_Style_e style)
{
    uint16_t idx;

    idx = (!style) ? TERMINUS_K12x24N_ID[sym] : TERMINUS_K12x24B_ID[sym];
    uint8_t i = 0;
    while (i < (TERMINUS_K12x24N_CHAR_WIDTH * TERMINUS_K12x24N_CHAR_HEIGHT))
    {
        uint16_t s, j;
        s = (!style) ? TERMINUS_K12x24N[idx] : TERMINUS_K12x24B[idx];
        j = (s >> 12);
        s &= (uint16_t)0x0fff;

        if (j == 0)
        {
        	j = 16;
        }

        for (volatile uint8_t k = 0; k < j; ++k)
        {
        	sym16bit_buf[i++] = s;
        }

        ++idx;
    }

    return;
}

/**
  * @brief Переводит код символа из кодировки UTF8 в KOI8-R
  * @param[in] \c utf8_sym Код символа в кодировке UTF8
  * Возвращает только кириллические символы и символ '°'
  *
  * @return
  * @todo реализовать обработку ошибок
  */
uint8_t utf8_to_koi8r(uint16_t utf8_sym)
{
	uint8_t sym = 0;

	if (utf8_sym > 0xFFFF)
	{
//		Debug("Symbol must be less than 0xFFFF");
		return sym;
	}
	if (utf8_sym < 0x80)
	{
		return (uint8_t)utf8_sym;
	}
	for (volatile int i = 0; i < sizeof(charmap_table); ++i)
	{
		if (utf8_sym == charmap_table[i].utf8_sym)
		{
			sym = charmap_table[i].koi8r_sym;
			break;
		}
	}

	return sym;
}

/**
  * @brief Переводит код символа из кодировки UTF8 в CP866
  * @param[in] \c utf8_sym Код символа в кодировке UTF8
  * Возвращает только кириллические символы и символ '°'
  *
  * @return
  * @todo реализовать обработку ошибок
  */
uint8_t utf8_to_cp866(uint16_t utf8_sym)
{
	uint8_t sym = 0;

	if (utf8_sym > 0xFFFF)
	{
//		Debug("Symbol must be less than 0xFFFF");
		return sym;
	}
	if (utf8_sym < 0x80)
	{
		return (uint8_t)utf8_sym;
	}
	for (volatile int i = 0; i < sizeof(charmap_table); ++i)
	{
		if (utf8_sym == charmap_table[i].utf8_sym)
		{
			sym = charmap_table[i].cpp866_sym;
			break;
		}
	}

	return sym;
}

/**
  * @brief Отрисовка битового изображения
  * @param[in] структура \c Bitmap_s
  *       \c x, \c y Координаты левого верхнего угла изображения
  *       \c width  Ширина
  *       \c height Высота
  *       \c bitmap Одномерный массив изображения по линиям
  *       \c color  Цвет
  * @return структура \с Bitmap_s
  *       \error Сообщение об ошибке
  * @todo доделать
  */
Bitmap_s OLED_DrawBitmap_imp(Bitmap_s in)
{
	uint8_t column;
	uint8_t row;

	Bitmap_s out = in;
	OLED_Color_e color_on = out.color;
	OLED_Color_e color_off;

	color_off = color_on == OLED_Color_White ? OLED_Color_Black : OLED_Color_White;
	for (row = 0; row < out.height; ++row)
	{
		for (column = 0; column < out.width; ++column)
		{
			if (out.bitmap[row] & (0x80 >> column))
			{
				OLED_SetPixel(.x=out.x + column, .y=out.y + row, .color=color_on);
			}
			else
			{
				OLED_SetPixel(.x=out.x + column, .y=out.y + row, .color=color_off);
			}
		}
	}

	return out;
}

/**
  * @brief Отрисовка символа Bluetooth
  * @param[in] \с is_bluetooth_connected флаг подключения к BT
  * @return
  */
void OLED_DrawBTSign(bool is_bluetooth_connected)
{
	uint8_t x_offset = 100;
	uint8_t y_offset = 0;
	uint8_t BTIcon[8] = {
			0b00001100,
			0b01001010,
			0b00101010,
			0b00011100,
			0b00011100,
			0b00101010,
			0b01001010,
			0b00001100,
	};
//	uint8_t BTBitmapTL[8] = {
//			0b00000000,
//			0b00000001,
//			0b00000001,
//			0b00000001,
//			0b00000001,
//			0b00011001,
//			0b00001101,
//			0b00000011,
//	};
//	uint8_t BTBitmapTR[8] = {
//			0b00000000,
//			0b00000000,
//			0b11000000,
//			0b00100000,
//			0b00010000,
//			0b00011000,
//			0b01100000,
//			0b10000000,
//	};
//	uint8_t BTBitmapBL[8] = {
//			0b00000011,
//			0b00001101,
//			0b00011001,
//			0b00000001,
//			0b00000001,
//			0b00000001,
//			0b00000001,
//			0b00000000,
//	};
//	uint8_t BTBitmapBR[8] = {
//			0b10000000,
//			0b01100000,
//			0b00011000,
//			0b00010000,
//			0b00100000,
//			0b11000000,
//			0b00000000,
//			0b00000000,
//	};

	OLED_DrawRect(x_offset, y_offset, 8, 8, OLED_Color_Black);
	if (is_bluetooth_connected)
	{
		OLED_DrawBitmap(.x=x_offset, .y=y_offset, .width=8, .height=8, .bitmap=BTIcon);
//		OLED_DrawBitmap(.x=x_offset,     .y=y_offset, .width=8, .height=8, .bitmap=BTBitmapTL);
//		OLED_DrawBitmap(.x=x_offset + 8, .y=y_offset, .width=8, .height=8, .bitmap=BTBitmapTR);
//		OLED_DrawBitmap(.x=x_offset,     .y=y_offset + 8, .width=8, .height=8, .bitmap=BTBitmapBL);
//		OLED_DrawBitmap(.x=x_offset + 8, .y=y_offset + 8, .width=8, .height=8, .bitmap=BTBitmapBR);
	}
//	x_offset += 16;
//	OLED_DrawBitmap(.x=x_offset,     .y=y_offset, .width=8, .height=8, .bitmap=Bitmap1, .color=OLED_Color_Black);
//	OLED_DrawBitmap(.x=x_offset + 8, .y=y_offset, .width=8, .height=8, .bitmap=Bitmap2, .color=OLED_Color_Black);
//	OLED_DrawBitmap(.x=x_offset,     .y=y_offset + 8, .width=8, .height=8, .bitmap=Bitmap3, .color=OLED_Color_Black);
//	OLED_DrawBitmap(.x=x_offset + 8, .y=y_offset + 8, .width=8, .height=8, .bitmap=Bitmap4, .color=OLED_Color_Black);

	return;
}

/**
  * @brief Отрисовка заряда батареи
  * @param[in] \с charge_percent Значение заряда батареии в процентах
  * @return
  */
void OLED_DrawBattary(uint8_t charge_percent)
{
	uint8_t x_offset = 64;
	uint8_t y_offset = 0;
	uint8_t width = 20;
	uint8_t height = 8;

	OLED_DrawRect(x_offset, y_offset, width + 2, height, OLED_Color_Black);
	OLED_DrawRect(x_offset, y_offset, width, height, OLED_Color_White);
	OLED_DrawRect(x_offset + 1, y_offset + 1, width - 2, height - 2, OLED_Color_Black);
	OLED_DrawRect(x_offset + width, y_offset + height / 2 - height / 4, 2, height / 2, OLED_Color_White);
	OLED_DrawRect(x_offset + 2, y_offset + 2, (width - 4) * charge_percent / 100, height - 4, OLED_Color_White);

	return;
}

/**
  * @brief Отрисовка продольной колбы
  * @param[in] \c bubble_pos Положение пузырька
  * @return
  */
void OLED_DrawXColba(int8_t bubble_pos)
{
	uint8_t offset_x = 30;
	uint8_t offset_y = 38;
	uint8_t width = 90;
	uint8_t height = 24;
	uint8_t radius = 5;
	uint8_t bubble_length = 26;
	uint8_t bubble_radius = 6;

//	if (bubble_pos > width - bubble_length / 2)
//	{
//		bubble_pos = width - bubble_length / 2;
//	}
//	if (bubble_pos < bubble_length / 2)
//	{
//		bubble_pos = bubble_length / 2;
//	}
	OLED_DrawRoundRect(offset_x, offset_y, width, height, radius,  OLED_Color_White);
	OLED_DrawRoundRect(offset_x + 2, offset_y + 2, width - 4, height - 4, radius - 1, OLED_Color_Black);
	OLED_DrawRoundRect(offset_x + width / 2 - bubble_length / 2 + bubble_pos, offset_y + 5,
			bubble_length, height - 10, bubble_radius, OLED_Color_White);
	OLED_DrawLine(.x1=offset_x + width / 2 - bubble_length / 2, .y1=offset_y + 2,
			.x2=offset_x + width / 2 - bubble_length / 2, .y2=offset_y + height - 2, .color=OLED_Color_Invert);
	OLED_DrawLine(.x1=offset_x + width / 2 + bubble_length / 2, .y1=offset_y + 2,
			.x2=offset_x + width / 2 + bubble_length / 2, .y2=offset_y + height - 2, .color=OLED_Color_Invert);
	if (bubble_pos == 0)
	{
		OLED_DrawCircle(.x=offset_x + width / 2 + bubble_pos, .y=offset_y + height / 2, .radius=height / 2 - 6, .color=OLED_Color_Black);
		OLED_DrawCircle(.x=offset_x + width / 2 + bubble_pos, .y=offset_y + height / 2, .radius=height / 2 - 8, .color=OLED_Color_White);
	}
	else
	{
//		OLED_DrawRoundRect(offset_x + width / 2 - bubble_length / 2 + bubble_pos + 1, offset_y + 4,
//				bubble_length - 2, height - 8, bubble_radius, OLED_Color_Black);
//		OLED_DrawCircle(.x=offset_x + width / 2 - bubble_length / 2 + bubble_pos + 10, .y=offset_y + 10, .radius=5, .color=OLED_Color_Black);
	}

	return;
}

/**
  * @brief Отрисовка поперечной колбы
  * @param[in] \c bubble_pos Положение пузырька
  * @return
  */
void OLED_DrawYColba(int8_t bubble_pos)
{
	int offset_x = 1;
	int offset_y = 10;
	int width = 16;
	int height = 40;
	int radius = 6;

	OLED_DrawRoundRect(offset_x, offset_y, width, height, 5, OLED_Color_White);
	OLED_DrawRoundRect(offset_x + 1, offset_y + 1, width - 2, height - 2, 4, OLED_Color_Black);
	OLED_DrawCircle(.x=offset_x + width / 2, .y=offset_y + height / 2 + bubble_pos, .radius=radius);
	OLED_DrawLine(.x1=offset_x + 1, .y1=offset_y + height / 2 - radius, .x2=offset_x + width - 1, .y2=offset_y + height / 2 - radius, .color=OLED_Color_Invert);
	OLED_DrawLine(.x1=offset_x + 1, .y1=offset_y + height / 2 + radius, .x2=offset_x + width - 1, .y2=offset_y + height / 2 + radius, .color=OLED_Color_Invert);
	if (bubble_pos == 0)
	{
		OLED_DrawCircle(.x=offset_x + width / 2, .y=offset_y + height / 2 + bubble_pos, .radius=radius - 2, .color=OLED_Color_Black);
		OLED_DrawCircle(.x=offset_x + width / 2, .y=offset_y + height / 2 + bubble_pos, .radius=radius - 3, .color=OLED_Color_White);
	}

	return;
}

/**
  * @brief Физическое отображение из памяти модуля дисплея
  */
void OLED_RefreshScreen()
{
#ifndef U8G2
	for (uint8_t page = 0; page < 8; ++page)
    {
    	SendCommandByte(0xB0 + page);
    	SendCommandByte(0x02);
    	SendCommandByte(0x10);
        for (uint8_t column = 0; column < 128; ++column)
        {
        	SendDataByte(Image[page * 128 + column]);
        }
    }
#else
	u8g2_SendBuffer(&myDisplay);
#endif // U8G2

	return;
}

/**
  * @brief
  * @param
  * @return
  */
void OLED_SetWindow(uint8_t x1, uint8_t x2, uint8_t y1, uint8_t y2)
{
#ifndef U8G2
	// выбор позиции
	x2 = (x1 >> 4) & 0x0F;
	x1 = x1 & 0x0F;
	y1 >>= 3;
	SendCommandByte(0x00 | x1);
	SendCommandByte(0x10 | x2);
	SendCommandByte(0xB0 | y1);
#endif // U8G2

	return;
}

/*****END OF FILE****/
