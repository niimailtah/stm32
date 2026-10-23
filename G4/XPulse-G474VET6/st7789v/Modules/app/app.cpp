/**
 * @file:      app.cpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#include <cwchar>
#include "app.hpp"
#include "tim.h"
#include "spi.h"
#include "usart.h"
#include "global.hpp"
#include "st7789.h"

volatile uint32_t brightness{0xEF00};

void drawWString(wchar_t *wString, uint16_t offsetX, uint16_t offsetY, uint8_t fgColor, uint8_t bgColor)
{
    for (size_t i{0}; i < wcslen(wString); ++i)
    {
        display.drawCharFB(utf8_to_koi8r(wString[i]), offsetX + i * 12, offsetY, fgColor, bgColor);
    }
}

void App::Init()
{
	// Начальная установка подсветки дисплея
    HAL_TIM_PWM_Start(&(ST7789_BLK_TIM_HANDLE), ST7789_BLK_PWM_CHANNAL);
    display.setBrightness(0xFF00);
    HAL_Delay(20);
    display.init();
    display.setRotation(ST7789_Rotation::Rotation180);
    display.clear();

    display.fillRectFB( 0, 40, display.m_widthFB -  1, display.m_heightFB - 1, 6);
    display.fillRectFB( 5, 45, display.m_widthFB -  6, display.m_heightFB - 6, 0);
    display.fillRectFB(10, 79, display.m_widthFB - 11, 81, 5);

//    uint8_t fgColor{1};
//    uint8_t bgColor{0};
//    wchar_t mcu[] = L"MCU: STM32G474VET";
//    uint16_t offsetX{15};
//    uint16_t offsetY{10};
//    drawWString(mcu, offsetX, offsetY, fgColor, bgColor);
//    wchar_t graphics[] = L"Graphics: ST7789";
//    offsetX = 10;
//    offsetY = 50;
//    drawWString(graphics, offsetX, offsetY, fgColor, bgColor);
//    // 1.LCD_SCK SPI2_SCK PB13
//    wchar_t lcdClock[] = L"1.LCD_SCK SPI2_SCK";
//    offsetX = 10;
//    offsetY = 85;
//    drawWString(lcdClock, offsetX, offsetY, fgColor, bgColor);
//    // 2.LCD_DC  GPIO_Out PB14
//    wchar_t lcdDataCommand[] = L"2.LCD_DC  GPIO_Out";
//    offsetX = 10;
//    offsetY = 110;
//    drawWString(lcdDataCommand, offsetX, offsetY, fgColor, bgColor);
//    // 3.LCD_SDA SPI_MOSI PB15
//    wchar_t lcdData[] = L"3.LCD_SDA SPI_MOSI";
//    offsetX = 10;
//    offsetY = 134;
//    drawWString(lcdData, offsetX, offsetY, fgColor, bgColor);
//    // 4.LCD_RST GPIO_Out PA5
//    wchar_t lcdReset[] = L"4.LCD_RST GPIO_Out";
//    offsetX = 10;
//    offsetY = 158;
//    drawWString(lcdReset, offsetX, offsetY, fgColor, bgColor);
//    // 5.LCD_BLK TIM3_CH1 PA6
//    wchar_t lcdBacklight[] = L"5.LCD_BLK TIM3_CH1";
//    offsetX = 10;
//    offsetY = 182;
//    drawWString(lcdBacklight, offsetX, offsetY, fgColor, bgColor);
//    // 6.LCD_CS  GPIO_Out PA7
//    wchar_t lcdChipSelect[] = L"6.LCD_CS  GPIO_Out";
//    offsetX = 10;
//    offsetY = 206;
//    drawWString(lcdChipSelect, offsetX, offsetY, fgColor, bgColor);
//    // 7.LCD_TE           PC8
//    wchar_t lcdTearEffect[] = L"7.LCD_TE  PC8";
//    offsetX = 10;
//    offsetY = 230;
//    drawWString(lcdTearEffect, offsetX, offsetY, fgColor, bgColor);
//    // 11.GND
//    wchar_t lcdGND[] = L"11.GND    GND";
//    offsetX = 10;
//    offsetY = 254;
//    drawWString(lcdGND, offsetX, offsetY, fgColor, bgColor);
//    // 12.VDD 3V3
//    wchar_t lcdVDD[] = L"12.VDD    3V3";
//    offsetX = 10;
//    offsetY = 278;
//    drawWString(lcdVDD, offsetX, offsetY, fgColor, bgColor);
//    display.fillRectFB(124, 85, 126, display.m_heightFB - 10, 5);
//
    display.flushBuffer(0, 0, display.m_widthFB - 1, display.m_heightFB - 1);

    return;
}

void App::Loop()
{
    while (true)
	{
        uint8_t fgColor{1};
        uint8_t bgColor{0};
        wchar_t mcu[] = L"MCU: STM32G474VET";
        uint16_t offsetX{15};
        uint16_t offsetY{10};
        drawWString(mcu, offsetX, offsetY, fgColor, bgColor);
        wchar_t graphics[] = L"Graphics: ST7789";
        offsetX = 10;
        offsetY = 50;
        drawWString(graphics, offsetX, offsetY, fgColor, bgColor);
        // 1.LCD_SCK SPI2_SCK PB13
        wchar_t lcdClock[] = L"1.LCD_SCK SPI2_SCK";
        offsetX = 10;
        offsetY = 85;
        drawWString(lcdClock, offsetX, offsetY, fgColor, bgColor);
        // 2.LCD_DC  GPIO_Out PB14
        wchar_t lcdDataCommand[] = L"2.LCD_DC  GPIO_Out";
        offsetX = 10;
        offsetY = 110;
        drawWString(lcdDataCommand, offsetX, offsetY, fgColor, bgColor);
        // 3.LCD_SDA SPI_MOSI PB15
        wchar_t lcdData[] = L"3.LCD_SDA SPI_MOSI";
        offsetX = 10;
        offsetY = 134;
        drawWString(lcdData, offsetX, offsetY, fgColor, bgColor);
        // 4.LCD_RST GPIO_Out PA5
        wchar_t lcdReset[] = L"4.LCD_RST GPIO_Out";
        offsetX = 10;
        offsetY = 158;
        drawWString(lcdReset, offsetX, offsetY, fgColor, bgColor);
        // 5.LCD_BLK TIM3_CH1 PA6
        wchar_t lcdBacklight[] = L"5.LCD_BLK TIM3_CH1";
        offsetX = 10;
        offsetY = 182;
        drawWString(lcdBacklight, offsetX, offsetY, fgColor, bgColor);
        // 6.LCD_CS  GPIO_Out PA7
        wchar_t lcdChipSelect[] = L"6.LCD_CS  GPIO_Out";
        offsetX = 10;
        offsetY = 206;
        drawWString(lcdChipSelect, offsetX, offsetY, fgColor, bgColor);
        // 7.LCD_TE           PC8
        wchar_t lcdTearEffect[] = L"7.LCD_TE  PC8";
        offsetX = 10;
        offsetY = 230;
        drawWString(lcdTearEffect, offsetX, offsetY, fgColor, bgColor);
        // 11.GND
        wchar_t lcdGND[] = L"11.GND    GND";
        offsetX = 10;
        offsetY = 254;
        drawWString(lcdGND, offsetX, offsetY, fgColor, bgColor);
        // 12.VDD 3V3
        wchar_t lcdVDD[] = L"12.VDD    3V3";
        offsetX = 10;
        offsetY = 278;
        drawWString(lcdVDD, offsetX, offsetY, fgColor, bgColor);
        display.fillRectFB(124, 85, 126, display.m_heightFB - 10, 5);

        display.flushBuffer(0, 0, display.m_widthFB - 1, display.m_heightFB - 1);

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
