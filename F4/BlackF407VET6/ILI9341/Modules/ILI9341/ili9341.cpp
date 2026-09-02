/**
 * @file:      ili9341.cpp
 * @author:    Alexey Polurotov
 * @version:   0.0.1
 * @date:      2026-08-31
 * @brief:
 */

#include <cmath>
#include "ili9341.h"
#include "ili9341.hpp"
#include "fsmc.h"

TILI9341::TILI9341(SRAM_HandleTypeDef* hsramHandle, const TILI9341_GPIO& bl) : m_hsram{hsramHandle}, m_bl(bl)
{
}

void TILI9341::Init()
{
	static const uint8_t init_tab[] = {
	        ILI_PCB, 3, 0x00, 0xC1, 0X30,  \
	        ILI_POSC, 4, 0x64, 0x03, 0X12, 0X81,  \
	        ILI_DTCA_ic, 3, 0x85, 0x10, 0x7A,  \
	        ILI_PCA, 5, 0x39, 0x2C, 0x00, 0x34, 0x02,  \
	        ILI_PRC,1, 0x20,  \
	        ILI_DTCB, 2, 0x00, 0x00,  \
	        ILI_PWCTRL1, 1, 0x1B,  \
	        ILI_PWCTRL2,1, 0x01,  \
	        ILI_VMCTRL1, 2, 0x30, 0x30,  \
	        ILI_VMCTRL2, 1, 0XB7,  \
	        ILI_MADCTL, 1, 0x48,  \
	        ILI_PIXSET, 1, 0x55,  \
	        ILI_FRMCTR1, 2, 0x00, 0x1A,  \
	        ILI_DISCTRL, 2, 0x0A, 0xA2,  \
	        ILI_E3G, 1, 0x00,  \
	        ILI_GAMSET, 1, 0x01,  \
	        ILI_PGAMCTRL, 15, 0x0F, 0x2A, 0x28, 0x08, 0x0E, 0x08, 0x54, 0XA9, 0x43, 0x0A, 0x0F, 0x00, 0x00, 0x00, 0x00,  \
	        ILI_NGAMCTRL, 15, 0x00, 0x15, 0x17, 0x07, 0x11, 0x06, 0x2B, 0x56, 0x3C, 0x05, 0x10, 0x0F, 0x3F, 0x3F, 0x0F,  \
	        ILI_PASET, 4, 0x00, 0x00, 0x01, 0x3f,  \
	        ILI_CASET, 4, 0x00, 0x00, 0x00, 0xef,  \
	        ILI_SLPOUT, 120,  \
	        ILI_DISPON, 0,  \
	        ILI_MADCTL, 1, 0xC9,  \
	        0x00
	};

    u32 i{0};
    u32 i2;
    u8 counter;

    //--------------
    HAL_GPIO_WritePin(m_bl.port, m_bl.pin, GPIO_PIN_SET) ;  // enable LCD back light
    //--------------

    while (init_tab[i] != 0)
    {
        LCD->LCD_REG = (u16) init_tab[i];
        counter = init_tab[i + 1];
        i += 2;
        if (counter > 15)
        {
            HAL_Delay(counter);
        }
        else if(counter > 0)
        {
            for (i2 = 0; i2 < counter; i2++)
            {
                LCD->LCD_RAM = init_tab[i + i2];
            }
            i += counter;
        }
    }


    /*****************/
    LCD_ClrScr(BLACK);  // init screen as black

}

void TILI9341::Demo()
{

}

void TILI9341::LCD_OpenWin(u16 x0, u16 y0, u16 x1, u16 y1)
{
    LCD->LCD_REG = (ILI_CASET);
    LCD->LCD_RAM = (y0>>8);
    LCD->LCD_RAM = (y0);
    LCD->LCD_RAM = (y1>>8);
    LCD->LCD_RAM = (y1);
    LCD->LCD_REG = (ILI_PASET);
    LCD->LCD_RAM = (x0>>8);
    LCD->LCD_RAM = (x0);
    LCD->LCD_RAM = (x1>>8);
    LCD->LCD_RAM = (x1);
    LCD->LCD_REG = (ILI_RAMWR);
}

void TILI9341::LCD_ClrScr(u16 BackColor)
{
    LCD_OpenWin(0, 0, LCD_ROW_NUM - 1, LCD_COL_NUM - 1);
    for (uint32_t i{(SCREEN_PIXELS)}; i != 0 ; i--)
    {
        LCD->LCD_RAM = BackColor;
    }
}

void TILI9341::LCD_DisAPoint(u16 x0, u16 y0, u16 Color)
{
    LCD->LCD_REG = (ILI_CASET);
    LCD->LCD_RAM = (y0>>8);
    LCD->LCD_RAM = (y0);
    LCD->LCD_RAM = (y0>>8);
    LCD->LCD_RAM = (y0);
    LCD->LCD_REG = (ILI_PASET);
    LCD->LCD_RAM = (x0>>8);
    LCD->LCD_RAM = (x0);
    LCD->LCD_RAM = (x0>>8);
    LCD->LCD_RAM = (x0);
    LCD->LCD_REG = (ILI_RAMWR);
    LCD->LCD_RAM = (Color);
}

void TILI9341::LCD_DisALoop(u16 x0, u16 y0, u8 r, u16 Color)
{
    s16 a, b, next;
    a = 0;
    b = r;
    next = 3 - (r<<1);
    while (a <= b)
    {
        LCD_DisAPoint(x0+a, y0-b, Color);
        LCD_DisAPoint(x0+b, y0-a, Color);
        LCD_DisAPoint(x0+b, y0+a, Color);
        LCD_DisAPoint(x0+a, y0+b, Color);
        LCD_DisAPoint(x0-a, y0+b, Color);
        LCD_DisAPoint(x0-b, y0+a, Color);
        LCD_DisAPoint(x0-a, y0-b, Color);
        LCD_DisAPoint(x0-b, y0-a, Color);
        a++;
        //use the bresenham
        if (next<0)
        {
        	next += 4*a+6;
        }
        else
        {
            next += 10+4*(a-b);
            b--;
        }
    }
}

void TILI9341::LCD_DisARectangular(u16 x0, u16 y0, u16 x1, u16 y1, u16 Color)
{
	u16 x00, x01, y00, y01;

	if (x0 < x1)
	{
		x00 = x0; x01 = x1;
	}
	else
	{
		x00 = x1; x01 = x0;
	}

	if (y0 < y1)
	{
		y00 = y0; y01 = y1;
	}
	else
	{
		y00 = y1; y01 = y0;
	}

	LCD_OpenWin(x00, y00, x01, y01);

	for (uint32_t i{0}; i <= ((1 + x01 - x00) * (1 + y01 - y00)); i++)
	{
		LCD->LCD_RAM = Color;
	}
}

void TILI9341::LCD_DisNoFillRectangular(u16 color, u16 x0, u16 y0, u16 x1, u16 y1)
{
    LCD_DrawLine(color, x0, y0, x1, y0);
    LCD_DrawLine(color, x0, y1, x1, y1);
    LCD_DrawLine(color, x0, y0, x0, y1);
    LCD_DrawLine(color, x1, y0, x1, y1);
}

void TILI9341::LCD_DrawLine(u16 color, u16 x1, u16 y1, u16 x2, u16 y2)
{
    if (y1 == y2)
    {
        LCD_DisARectangular(x1, y1, x2, y2, color);
        return;
    }

    if (x1 == x2)
    {
        LCD_DisARectangular(x1, y1, x2, y2, color);
        return;
    }

    int steep = abs(y2 - y1) > abs(x2 - x1);
    if (steep)
    {
        swap(x1, y1);
        swap(x2, y2);
    }
    if (x1 > x2)
    {
        swap(x1, x2);
        swap(y1, y2);
    }
    int dx, dy;
    dx = x2 - x1;
    dy = abs(y2 - y1);
    int err = dx/2;
    int ystep;
    if (y1 < y2)
    {
    	ystep = 1;
    }
    else
    {
    	ystep = -1;
    }

    for (; x1 <= x2; x1++)
    {
        if (steep)
        {
        	LCD_DisAPoint(y1,x1,color);
        }
        else
        {
        	LCD_DisAPoint(x1,y1,color);
        }
        err -= dy;
        if (err < 0)
        {
            y1 += ystep;
            err += dx;
        }
    }
}
