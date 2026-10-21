/**
  ******************************************************************************
  * @file    st7789.h
  * @brief
  *  Created on: 15 июн. 2026 г.
  *      Author: Alexey Polurotov
  ******************************************************************************
  */
#ifndef ST7789_H_
#define ST7789_H_

#include <cstdint>
#include <span>
#include <array>

#include "main.h"
#include "palette.hpp"
#include "ter-k24b.h"
#include "ter-k24n.h"

//--------------------------------------------------------------------
// Таймауты
namespace ST7789_Config {
    constexpr uint32_t SPI_TIMEOUT{5000};  // Увеличен таймаут для передачи фреймбуфера
    constexpr uint32_t RESET_DELAY{100};
    constexpr uint32_t INIT_DELAY{120};
}

// Настройки шрифта
namespace ST7789_Font {
    constexpr uint8_t CHAR_WIDTH{8};
    constexpr uint8_t CHAR_HEIGHT{16};
}

// Настройки поворота
namespace ST7789_Rotation {
    constexpr uint8_t Rotation0{0};
    constexpr uint8_t Rotation90{1};
    constexpr uint8_t Rotation180{2};
    constexpr uint8_t Rotation270{3};
}

//--------------------------------------------------------------------
// Использование DMA
#define USE_DMA
//--------------------------------------------------------------------
// Пины подключения (согласно CubeMX настройкам)
#define ST7789_SPI_HANDLE hspi1
#define ST7789_BLK_TIM_HANDLE  htim3
#define ST7789_BLK_PWM_CHANNAL TIM_CHANNEL_1

// GPIO пины
#define ST7789_CS_PORT   GPIOA
#define ST7789_CS_PIN    GPIO_PIN_4
#define ST7789_DC_PORT   GPIOA
#define ST7789_DC_PIN    GPIO_PIN_3
#define ST7789_RST_PORT  GPIOA
#define ST7789_RST_PIN   GPIO_PIN_2

// Размеры дисплея
constexpr uint16_t ST7789_WIDTH{240};
constexpr uint16_t ST7789_HEIGHT{240};

// Команды ST7789
namespace ST7789_Commands {
    constexpr uint8_t SWRESET {0x01};
    constexpr uint8_t SLPOUT  {0x11};
    constexpr uint8_t COLMOD  {0x3A};
    constexpr uint8_t MADCTL  {0x36};
    constexpr uint8_t CASET   {0x2A};
    constexpr uint8_t RASET   {0x2B};
    constexpr uint8_t RAMWR   {0x2C};
    constexpr uint8_t DISPOFF {0x28};
    constexpr uint8_t DISPON  {0x29};
    constexpr uint8_t INVOFF  {0x20};  // Отключить инверсию цветов
    constexpr uint8_t INVON   {0x21};  // Включить инверсию цветов
    constexpr uint8_t FRCTRL1 {0xB3};  // Frame Rate Control 1 (In partial mode/ idle colors)
    constexpr uint8_t FRCTRL2 {0xC6};  // Frame Rate Control in Normal Mode
    constexpr uint8_t TEON    {0x35};  // Tearing Effect Line On
}

/**
 * Memory Data Access Control Register (0x36H)
 * MAP:     D7  D6  D5  D4  D3  D2  D1  D0
 * param:   MY  MX  MV  ML  RGB MH  -   -
 *
 */
namespace ST7789_MADCTL {
    /* Page Address Order ('0': Top to Bottom, '1': the opposite) */
    constexpr uint8_t MY{0x80};
    /* Column Address Order ('0': Left to Right, '1': the opposite) */
    constexpr uint8_t MX{0x40};
    /* Page/Column Order ('0' = Normal Mode, '1' = Reverse Mode) */
    constexpr uint8_t MV{0x20};
    /* Line Address Order ('0' = LCD Refresh Top to Bottom, '1' = the opposite) */
    constexpr uint8_t ML{0x10};
    /* RGB/BGR Order ('0' = RGB, '1' = BGR) */
    constexpr uint8_t RGB{0x00};
}

//--------------------------------------------------------------------
// Структура конфигурации GPIO
struct ST7789_GPIO {
    GPIO_TypeDef* port;
    uint16_t pin;

    ST7789_GPIO(GPIO_TypeDef* p, uint16_t pinNum) : port(p), pin(pinNum) {}
};


enum class ST7789_Font_Style_e
{
	ST7789_Font_Regular,
	ST7789_Font_Bold,
};


// Класс дисплея ST7789V3
class ST7789V3 {
private:
    SPI_HandleTypeDef* m_hspi;
    ST7789_GPIO m_csPin;
    ST7789_GPIO m_dcPin;
    ST7789_GPIO m_rstPin;
    uint8_t m_xShift;
    uint8_t m_yShift;

    std::array<volatile uint16_t, TERMINUS_K12x24N_CHAR_WIDTH*TERMINUS_K12x24N_CHAR_HEIGHT> sym16bit_buf;

    void oldWriteCommand(const uint8_t cmd);
    void oldWriteData8(const uint8_t data);
    void oldWriteData16(const uint16_t data);

    void ST7789_Select(void) {
    	m_csPin.port->BSRR = ( m_csPin.pin << 16 );
    }

    void ST7789_Unselect(void) {
    	m_csPin.port->BSRR = m_csPin.pin;
    }

    __inline void ST7789_SendCmd(uint8_t Cmd) {
    	m_dcPin.port->BSRR = ( m_dcPin.pin << 16 );
    	if ((m_hspi->Instance->CR1 & SPI_CR1_SPE) != SPI_CR1_SPE) {
    		SET_BIT(m_hspi->Instance->CR1, SPI_CR1_SPE);
    	}
    	while ( (m_hspi->Instance->SR & SPI_SR_TXE) == RESET ) {};

    	*((__IO uint8_t *)&m_hspi->Instance->DR) = Cmd;

    	while ( (m_hspi->Instance->SR & (SPI_SR_TXE | SPI_SR_BSY)) != SPI_SR_TXE ) {};
    	m_dcPin.port->BSRR = m_dcPin.pin;
    }

    __inline void ST7789_SendData(uint8_t Data) {
    	if ((m_hspi->Instance->CR1 & SPI_CR1_SPE) != SPI_CR1_SPE) {
    		SET_BIT(m_hspi->Instance->CR1, SPI_CR1_SPE);
    	}

    	while ( (m_hspi->Instance->SR & SPI_SR_TXE) == RESET ) {};

    	*((__IO uint8_t *)&m_hspi->Instance->DR) = Data;

    	while ( (m_hspi->Instance->SR & (SPI_SR_TXE | SPI_SR_BSY)) != SPI_SR_TXE ) {};
    }

    __inline void ST7789_SendDataMASS(uint8_t* buff, size_t buff_size) {
    	if ((m_hspi->Instance->CR1 & SPI_CR1_SPE) != SPI_CR1_SPE) {
    		SET_BIT(m_hspi->Instance->CR1, SPI_CR1_SPE);
    	}

    	while (buff_size) {
    		while ( (m_hspi->Instance->SR & SPI_SR_TXE) == RESET ) {};

    		*((__IO uint8_t *)&m_hspi->Instance->DR) = *buff++;
    		buff_size--;
    	}

    	while ( (m_hspi->Instance->SR & (SPI_SR_TXE | SPI_SR_BSY)) != SPI_SR_TXE ) {};
    }

public:
    uint16_t FrameBuffer[32 * 32] = { 0, };
    uint8_t m_frameBuffer[240 * 240] = { 0, };
    uint8_t m_widthFB{240};
    uint8_t m_heightFB{240};

    // Конструктор
    ST7789V3(SPI_HandleTypeDef* spi_handle,
             const ST7789_GPIO& cs,
             const ST7789_GPIO& dc,
             const ST7789_GPIO& rst);

    // Основные функции
    void init();
    void reset();
    void on();
    void off();

    // Utility функции
    void setBrightness(uint32_t Brightness);
    uint32_t getBrightness();
    void appear(uint32_t speed = 500);
    void disappear(uint32_t speed = 500);
    void setRotation(uint8_t m);
    void setWindow(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1);
    void columnSet(uint16_t columnStart, uint16_t columnEnd);
    void rowSet(uint16_t rowStart, uint16_t rowEnd);
    void ramWrite(const uint16_t *color, uint32_t Len);
    void ramWriteDMA(const uint16_t *color, const uint16_t width, const uint16_t height);
    void flushBuffer(uint32_t Len);
    void flushBuffer();

    // Функции рисования
    void fillScreen(uint8_t color);
    void clear(void);
    void drawPixel(uint16_t x, uint16_t y, uint8_t color);
    void drawLine(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t color);
    void fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint8_t color);
    void drawImage(uint16_t x, uint16_t y, uint16_t w, uint16_t h, const uint8_t *data);
    void drawChar(uint8_t sym, uint8_t color, uint8_t background);

    void KOI8Rx24_decompress_sym(uint8_t sym, ST7789_Font_Style_e style);
};

#endif /* ST7789_H_ */
