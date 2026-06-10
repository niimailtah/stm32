/**
  ******************************************************************************
  * @file    gui.c
  * @brief   This file provides GUI function to LCD driver.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "gui.h"
#include "ter-k24n.h"
#include <stdbool.h>
#include <string.h>

static volatile uint16_t sym16_buf[(TERMINUS_K12x24N_CHAR_WIDTH*TERMINUS_K12x24N_CHAR_HEIGHT)];

void OLED_SetPixel(uint8_t x, uint8_t y, OLED_Color_t color)
{
	uint8_t page;
	uint8_t column;
	uint8_t temp = 0;

	page = y / 8;
	column = x;
	temp = 1 << y % 8;
	if (color == OLED_Color_White)
	{
		Image[page * 128 + column] |= temp;
	}
	else
	{
		Image[page * 128 + column] &= ~temp;
	}

	return;
}

void OLED_Clear()
{
	memset(Image, 0, 8 * 128);

	return;
}

void OLED_DrawPoint(uint8_t x_point, uint8_t y_point, OLED_Color_t color)
{
	const uint8_t width = 128;
	const uint8_t height = 64;

	if (x_point > width || y_point > height)
	{
		Debug("Exceeding display boundaries\r\n");
		return;
	}
	OLED_SetPixel(x_point, y_point, color);

	return;
}

void OLED_DrawLine(uint8_t x_start, uint8_t y_start, uint8_t x_end, uint8_t y_end, OLED_Color_t color)
{
    uint8_t x_point = x_start;
    uint8_t y_point = y_start;
    int dx = (int)x_end - (int)x_start >= 0 ? x_end - x_start : x_start - x_end;
    int dy = (int)y_end - (int)y_start <= 0 ? y_end - y_start : y_start - y_end;

    // Increment direction, 1 is positive, -1 is counter;
    int x_addway = x_start < x_end ? 1 : -1;
    int y_addway = y_start < y_end ? 1 : -1;

    //Cumulative error
    int esp = dx + dy;
    for (;;) {
    	OLED_SetPixel(x_point, y_point, color);
        if (2 * esp >= dy) {
            if (x_point == x_end)
                break;
            esp += dy;
            x_point += x_addway;
        }
        if (2 * esp <= dx) {
            if (y_point == y_end)
                break;
            esp += dx;
            y_point += y_addway;
        }
    }

    return;
}

void OLED_DrawRect(uint8_t x_offset, uint8_t y_offset, uint8_t width, uint8_t height, OLED_Color_t color)
{
	if (true)
	{
		for (int y_point = y_offset; y_point < height + y_offset; ++y_point)
		{
			OLED_DrawLine(x_offset, y_point, x_offset + width, y_point, color);
		}
	}
	else
	{
		OLED_DrawLine(x_offset, y_offset, x_offset + width, y_offset, color);
		OLED_DrawLine(x_offset + width, y_offset, x_offset + width, y_offset + height, color);
		OLED_DrawLine(x_offset + width, y_offset + height, x_offset, y_offset + height, color);
		OLED_DrawLine(x_offset, y_offset + height, x_offset, y_offset, color);
	}

	return;
}

void OLED_DrawRoundRect(uint8_t x_offset, uint8_t y_offset, uint8_t width, uint8_t height, uint8_t radius, OLED_Color_t color)
{
	int8_t x_left_center, x_right_center, y_top_center, y_bottom_center;
	x_left_center = x_offset + radius;
	x_right_center = x_offset + width - radius;
	y_top_center = y_offset + radius;
	y_bottom_center = y_offset + height - radius;
    int8_t x_current, y_current;
    x_current = 0;
    y_current = radius;

    int8_t esp = 3 - (radius << 1 );

    int8_t sCountY;
    while (x_current <= y_current )
    {
    	for (sCountY = x_current; sCountY <= y_current; sCountY ++ )
    	{
    		OLED_DrawPoint(x_right_center + x_current, y_bottom_center + sCountY, color);// BR2
    		OLED_DrawPoint(x_left_center - x_current, y_bottom_center + sCountY, color); // BL1
    		OLED_DrawPoint(x_left_center - sCountY, y_bottom_center + x_current, color); // BL2
    		OLED_DrawPoint(x_left_center - sCountY, y_top_center - x_current, color);    // TL1
    		OLED_DrawPoint(x_left_center - x_current, y_top_center - sCountY, color);    // TL2
    		OLED_DrawPoint(x_right_center + x_current, y_top_center - sCountY, color);   // TR1
    		OLED_DrawPoint(x_right_center + sCountY, y_top_center - x_current, color);   // TR2
    		OLED_DrawPoint(x_right_center + sCountY, y_bottom_center + x_current, color);// BR1
    	}
    	if (esp < 0 )
    	{
    		esp += 4 * x_current + 6;
    	}
    	else
    	{
    		esp += 10 + 4 * (x_current - y_current );
    		y_current--;
    	}
    	x_current++;
    }
    OLED_DrawRect(x_offset + radius, y_offset, width - 2 * radius, radius + 1, color);
    OLED_DrawRect(x_offset, y_offset + radius, width, height - 2 * radius, color);
    OLED_DrawRect(x_offset + radius, y_offset + height - radius, width - 2 * radius, radius + 1, color);

    return;
}

void OLED_DrawCircle(uint8_t x_center, uint8_t y_center, uint8_t radius, OLED_Color_t color)
{
    if (x_center > 128 || y_center >= 64) {
        Debug("OLED_DrawCircle Input exceeds the normal display range\r\n");
        return;
    }

    //Draw a circle from(0, R) as a starting point
    int8_t x_current, y_current;
    x_current = 0;
    y_current = radius;

    //Cumulative error,judge the next point of the logo
    int8_t esp = 3 - (radius << 1 );

    int8_t sCountY;
    while (x_current <= y_current ) { //Realistic circles
    	for (sCountY = x_current; sCountY <= y_current; sCountY ++ ) {
    		OLED_DrawPoint(x_center + x_current, y_center + sCountY, color);//1 BR2
    		OLED_DrawPoint(x_center - x_current, y_center + sCountY, color);//2 BL1
    		OLED_DrawPoint(x_center - sCountY, y_center + x_current, color);//3 BL2
    		OLED_DrawPoint(x_center - sCountY, y_center - x_current, color);//4 TL1
    		OLED_DrawPoint(x_center - x_current, y_center - sCountY, color);//5 TL2
    		OLED_DrawPoint(x_center + x_current, y_center - sCountY, color);//6 TR1
    		OLED_DrawPoint(x_center + sCountY, y_center - x_current, color);//7 TR2
    		OLED_DrawPoint(x_center + sCountY, y_center + x_current, color);//  BR1
    	}
    	if (esp < 0 )
    		esp += 4 * x_current + 6;
    	else {
    		esp += 10 + 4 * (x_current - y_current );
    		y_current--;
    	}
    	x_current++;
    }
//    else { //Draw a hollow circle
//        while (XCurrent <= YCurrent ) {
//            Paint_DrawPoint(X_Center + XCurrent, Y_Center + YCurrent, Color, Line_width, DOT_STYLE_DFT);//1
//            Paint_DrawPoint(X_Center - XCurrent, Y_Center + YCurrent, Color, Line_width, DOT_STYLE_DFT);//2
//            Paint_DrawPoint(X_Center - YCurrent, Y_Center + XCurrent, Color, Line_width, DOT_STYLE_DFT);//3
//            Paint_DrawPoint(X_Center - YCurrent, Y_Center - XCurrent, Color, Line_width, DOT_STYLE_DFT);//4
//            Paint_DrawPoint(X_Center - XCurrent, Y_Center - YCurrent, Color, Line_width, DOT_STYLE_DFT);//5
//            Paint_DrawPoint(X_Center + XCurrent, Y_Center - YCurrent, Color, Line_width, DOT_STYLE_DFT);//6
//            Paint_DrawPoint(X_Center + YCurrent, Y_Center - XCurrent, Color, Line_width, DOT_STYLE_DFT);//7
//            Paint_DrawPoint(X_Center + YCurrent, Y_Center + XCurrent, Color, Line_width, DOT_STYLE_DFT);//0
//
//            if (Esp < 0 )
//                Esp += 4 * XCurrent + 6;
//            else {
//                Esp += 10 + 4 * (XCurrent - YCurrent );
//                YCurrent--;
//            }
//            XCurrent++;
//        }
//    }

    return;
}


void OLED_DrawChar(uint8_t x_offset, uint8_t y_offset, const char ch, Font_t* font, OLED_Color_t color)
{
	uint8_t column;
	uint8_t row;
	uint16_t char_offset = (ch - ' ') * font->height * (font->width / 8 + (font->width % 8 ? 1 : 0));
	const unsigned char *ptr = &font->table[char_offset];

	for (row = 0; row < font->height; ++row)
	{
		for (column = 0; column < font->width; ++column)
		{
			if (*ptr & (0x80 >> (column % 8)))
			{
				OLED_SetPixel(x_offset + column, y_offset + row, color);
			}
			if (column % 8 == 7)
			{
				++ptr;
			}
		}
		++ptr;
	}

	return;
}

// TODO: добавить декомпрессию, использовать шрифт Terminus
void OLED_DrawTerminusChar(uint8_t x_offset, uint8_t y_offset, uint8_t sym, uint8_t font, OLED_Color_t color)
{
	return;
}

void KOI8Rx24_decompress_sym(uint8_t sym, uint8_t font)
{
    uint16_t idx;

//    idx=(!font) ? TERMINUS_K12x24N_ID[sym] : TERMINUS_K12x24B_ID[sym];
    idx = TERMINUS_K12x24N_ID[sym];
    uint8_t i = 0;
    while (i < (TERMINUS_K12x24N_CHAR_WIDTH * TERMINUS_K12x24N_CHAR_HEIGHT))
    {
        uint16_t s, j;
//        s=(!font) ? TERMINUS_K12x24N[idx] : TERMINUS_K12x24B[idx];
        s = TERMINUS_K12x24N[idx];
        j = (s >> 12);
        s &= (uint16_t)0x0fff;

        if (j == 0)
        {
        	j=16;
        }

        for (uint8_t k=0;k<j;k++)
        {
        	sym16_buf[i++]=s;
        }

        ++idx;
    }
}

void OLED_DrawXColba(uint8_t bubble_pos)
{
	int offset_x = 10;
	int offset_y = 38;
	int width = 90;
	int height = 24;
	int radius = 9;

	if (bubble_pos > width - radius)
	{
		bubble_pos = width - radius;
	}
	if (bubble_pos < radius)
	{
		bubble_pos = radius;
	}
	OLED_DrawRoundRect(offset_x, offset_y, width, height, 5,  OLED_Color_White);
	OLED_DrawRoundRect(offset_x + 2, offset_y + 2, width - 4, height - 4, 4, OLED_Color_Black);
	OLED_DrawCircle(offset_x + bubble_pos, offset_y + height / 2, radius, OLED_Color_White);
	OLED_DrawCircle(offset_x + bubble_pos, offset_y + height / 2, radius - 1, OLED_Color_Black);

	return;
}

void OLED_DrawYColba(uint8_t bubble_pos)
{
	int offset_x = 110;
	int offset_y = 10;
	int width = 16;
	int height = 40;
	int radius = 6;

	OLED_DrawRoundRect(offset_x, offset_y, width, height, 5, OLED_Color_White);
	OLED_DrawRoundRect(offset_x + 1, offset_y + 1, width - 2, height - 2, 4, OLED_Color_Black);
	OLED_DrawCircle(offset_x + width / 2, offset_y + bubble_pos, radius, OLED_Color_White);
	OLED_DrawCircle(offset_x + width / 2, offset_y + bubble_pos, radius - 1, OLED_Color_Black);

	return;
}

void OLED_RefreshScreen()
{
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

	return;
}

void OLED_SetWindow(uint8_t x1, uint8_t x2, uint8_t y1, uint8_t y2)
{
	// выбор позиции
	x2 = (x1>>4) & 0x0F;
	x1 = x1 & 0x0F;
	y1 >>=3;
	SendCommandByte(0x00 | x1);
	SendCommandByte(0x10 | x2);
	SendCommandByte(0xB0 | y1);

	return;
}

/*****END OF FILE****/
