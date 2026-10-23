/**
  ******************************************************************************
  * @file    st7789.cpp
  * @brief
  *  Created on: 15 июн. 2026 г.
  *      Author: Alexey Polurotov
  ******************************************************************************
  */

#include <cmath>
#include <bitset>

#include "tim.h"
#include "usart.h"
#include "st7789.h"
#include "ter-k24b.h"
#include "ter-k24n.h"


ST7789V3::ST7789V3(SPI_HandleTypeDef* spi_handle,
                   const ST7789_GPIO& cs,
                   const ST7789_GPIO& dc,
                   const ST7789_GPIO& rst)
    : m_hspi{spi_handle}, m_csPin{cs}, m_dcPin{dc}, m_rstPin{rst} {
}

void ST7789V3::init() {
    reset();
    HAL_Delay(ST7789_Config::INIT_DELAY);

    // Выход из режима сна
    ST7789_Select();
    ST7789_SendCmd(ST7789_Commands::SLPOUT);
    HAL_Delay(ST7789_Config::INIT_DELAY);

    // Настройка цветового режима (RGB565)
    ST7789_SendCmd(ST7789_Commands::COLMOD);
    ST7789_SendData(0x55);

    // Настройка поворота изображения
//    ST7789_SendCmd(ST7789_Commands::MADCTL);
//    ST7789_SendData(0x00);

    ST7789_SendCmd(ST7789_Commands::TEON);

	// Включение дисплея
    on();

    // Автоматическое включение инверсии для правильных цветов
    ST7789_SendCmd(ST7789_Commands::INVON);

    // подсветка
    HAL_TIM_PWM_Start(&(ST7789_BLK_TIM_HANDLE), ST7789_BLK_PWM_CHANNAL);

    return;
}

void ST7789V3::reset() {
    HAL_GPIO_WritePin(m_rstPin.port, m_rstPin.pin, GPIO_PIN_RESET);
    HAL_Delay(ST7789_Config::RESET_DELAY);
    HAL_GPIO_WritePin(m_rstPin.port, m_rstPin.pin, GPIO_PIN_SET);
    HAL_Delay(ST7789_Config::RESET_DELAY);

    return;
}

void ST7789V3::on()
{
    // Включение дисплея
    ST7789_Select();
    ST7789_SendCmd(ST7789_Commands::DISPON);
    HAL_Delay(100);
}

void ST7789V3::off()
{
    // Выключение дисплея
    ST7789_Select();
    ST7789_SendCmd(ST7789_Commands::DISPOFF);
    HAL_Delay(100);
}

void ST7789V3::oldWriteCommand(const uint8_t cmd) {
    HAL_GPIO_WritePin(m_dcPin.port, m_dcPin.pin, GPIO_PIN_RESET); // DC = 0 для команды
    HAL_GPIO_WritePin(m_csPin.port, m_csPin.pin, GPIO_PIN_RESET); // CS = 0
#ifdef USE_DMA
    HAL_SPI_Transmit_DMA(m_hspi, &cmd, 1);
	while(m_hspi->hdmatx->State == HAL_DMA_STATE_BUSY)
	{}
#else  // USE_DMA
	HAL_SPI_Transmit(m_hspi, &cmd, 1, ST7789_Config::SPI_TIMEOUT);
#endif // USE_DMA
    HAL_GPIO_WritePin(m_csPin.port, m_csPin.pin, GPIO_PIN_SET);   // CS = 1

    return;
}

void ST7789V3::oldWriteData8(const uint8_t data) {
    HAL_GPIO_WritePin(m_dcPin.port, m_dcPin.pin, GPIO_PIN_SET);   // DC = 1 для данных
    HAL_GPIO_WritePin(m_csPin.port, m_csPin.pin, GPIO_PIN_RESET); // CS = 0
#ifdef USE_DMA
    HAL_SPI_Transmit_DMA(m_hspi, &data, 1);
	while(m_hspi->hdmatx->State == HAL_DMA_STATE_BUSY)
	{}
#else  // USE_DMA
	HAL_SPI_Transmit(m_hspi, &data, 1, ST7789_Config::SPI_TIMEOUT);
#endif // USE_DMA
	HAL_GPIO_WritePin(m_csPin.port, m_csPin.pin, GPIO_PIN_SET);   // CS = 1

	return;
}

void ST7789V3::oldWriteData16(const uint16_t data) {
    uint8_t buffer[2] = {static_cast<uint8_t>((data >> 8) & 0xFF),
                         static_cast<uint8_t>(data & 0xFF)};
    HAL_GPIO_WritePin(m_dcPin.port, m_dcPin.pin, GPIO_PIN_SET);   // DC = 1 для данных
    HAL_GPIO_WritePin(m_csPin.port, m_csPin.pin, GPIO_PIN_RESET); // CS = 0
#ifdef USE_DMA
    HAL_SPI_Transmit_DMA(m_hspi, buffer, 2);
	while(m_hspi->hdmatx->State == HAL_DMA_STATE_BUSY)
	{}
#else  // USE_DMA
	HAL_SPI_Transmit(m_hspi, buffer, 2, ST7789_Config::SPI_TIMEOUT);
#endif // USE_DMA
    HAL_GPIO_WritePin(m_csPin.port, m_csPin.pin, GPIO_PIN_SET);   // CS = 1

    return;
}

// ===================================================================================
void ST7789V3::drawPixel(uint16_t x, uint16_t y, uint8_t color) {
    if (x >= ST7789_WIDTH || y >= ST7789_HEIGHT) {
        return;
    }

    uint8_t buffer[2] = {static_cast<uint8_t>((color >> 8) & 0xFF),
                         static_cast<uint8_t>(color & 0xFF)};
    setWindow(x, y, x + 1, y + 1);
    ST7789_SendData(buffer[0]);
    ST7789_SendData(buffer[1]);

    return;
}

void ST7789V3::drawLine(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t color) {
    int16_t dx = abs(static_cast<int16_t>(x1) - static_cast<int16_t>(x0));
    int16_t dy = abs(static_cast<int16_t>(y1) - static_cast<int16_t>(y0));
    int16_t sx = (x0 < x1) ? 1 : -1;
    int16_t sy = (y0 < y1) ? 1 : -1;
    int16_t err = dx - dy;

    while (true) {
        drawPixel(x0, y0, color);

        if (x0 == x1 && y0 == y1) break;

        int16_t e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x0 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y0 += sy;
        }
    }

    return;
}

void ST7789V3::setBrightness(uint32_t Brightness) {
    __HAL_TIM_SetCompare(&(ST7789_BLK_TIM_HANDLE), ST7789_BLK_PWM_CHANNAL, Brightness);
}

uint32_t ST7789V3::getBrightness(void) {
    return __HAL_TIM_GetCompare(&(ST7789_BLK_TIM_HANDLE), ST7789_BLK_PWM_CHANNAL);
}

void ST7789V3::appear(uint32_t speed)
{
    for (uint32_t Brightness{0}; Brightness < 0xFF00; Brightness += 0xFF)
    {
        setBrightness(Brightness);
        HAL_Delay(speed);
    }
    setBrightness(0xFFFF - 1);
}

void ST7789V3::disappear(uint32_t speed)
{
    for (uint32_t Brightness{0xFFFF}; Brightness > 0xFF; Brightness -= 0xFF)
    {
        setBrightness(Brightness);
        HAL_Delay(speed);
//        Delays::delay_us(speed);
    }
}


/**
 * @brief Set the rotation direction of the display
 * @param m -> rotation parameter(please refer it in st7789.h)
 * @return none
 */
void ST7789V3::setRotation(uint8_t m)
{
    ST7789_Select();

    ST7789_SendCmd(ST7789_Commands::MADCTL);
    switch (m) {
    case ST7789_Rotation::Rotation0:
        ST7789_SendData(ST7789_MADCTL::MX | ST7789_MADCTL::MY | ST7789_MADCTL::RGB);
        m_xShift = 0;
//        m_yShift = 80;
        m_yShift = 0;
        break;
    case ST7789_Rotation::Rotation90:
        ST7789_SendData(ST7789_MADCTL::MY | ST7789_MADCTL::MV | ST7789_MADCTL::RGB);
//        m_xShift = 80;
        m_xShift = 0;
        m_yShift = 0;
        break;
    case ST7789_Rotation::Rotation180:
        ST7789_SendData(ST7789_MADCTL::RGB);
        m_xShift = 0;
        m_yShift = 0;
        break;
    case ST7789_Rotation::Rotation270:
        ST7789_SendData(ST7789_MADCTL::MX | ST7789_MADCTL::MV | ST7789_MADCTL::RGB);
        m_xShift = 0;
        m_yShift = 0;
        break;
    default:
        break;
    }

    ST7789_Unselect();

    return;
}

void ST7789V3::setWindow(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1)
{
	ST7789_Select();

	columnSet(x0 + m_xShift, x1 + m_xShift);
	rowSet(y0 + m_yShift, y1 + m_yShift);
	ST7789_SendCmd(ST7789_Commands::RAMWR);

	ST7789_Unselect();

	return;
}

void ST7789V3::columnSet(uint16_t columnStart, uint16_t columnEnd)
{
    // TODO: добавить проверки
//	if (columnStart > columnEnd) {
//		return;
//	}
//	if (columnEnd > ST7789_WIDTH) {
//		return;
//	}

	ST7789_SendCmd(ST7789_Commands::CASET);
	ST7789_SendData(columnStart >> 8);
	ST7789_SendData(columnStart & 0xFF);
	ST7789_SendData(columnEnd >> 8);
	ST7789_SendData(columnEnd & 0xFF);

	return;
}

void ST7789V3::rowSet(uint16_t rowStart, uint16_t rowEnd)
{
    // TODO: добавить проверки
//	if (rowStart > rowEnd) {
//		return;
//	}
//	if (rowEnd > ST7789_HEIGHT) {
//		return;
//	}

	ST7789_SendCmd(ST7789_Commands::RASET);
	ST7789_SendData(rowStart >> 8);
	ST7789_SendData(rowStart & 0xFF);
	ST7789_SendData(rowEnd >> 8);
	ST7789_SendData(rowEnd & 0xFF);

	return;
}

void ST7789V3::ramWrite(const uint16_t *color, uint32_t Len)
{
    ST7789_Select();

    uint8_t buff[2];
	while (Len > 0) {
		buff[0] = static_cast<uint8_t>((*color >> 8) & 0xFF);
		buff[1] = static_cast<uint8_t>(*color & 0xFF);
		ST7789_SendDataMASS(buff, 2);
		Len--;
	}

	ST7789_Unselect();

	return;
}


void ST7789V3::ramWriteDMA(const uint16_t *color, const uint16_t width, const uint16_t height)
{
    ST7789_Select();

    constexpr uint16_t bufLength{2048};
    uint8_t buff[bufLength];
    for (uint16_t i{0}; i < bufLength/2; i++)
    {
        buff[i * 2] = static_cast<uint8_t>((*color >> 8) & 0xFF);
        buff[i * 2 + 1] = static_cast<uint8_t>(*color & 0xFF);
    }

    constexpr uint32_t chunkSize{512};
    uint32_t totalBytes = static_cast<uint32_t>(width) * height * 2;
    for (uint32_t i{0}; i < totalBytes; i += chunkSize)
    {
        uint32_t currentChunk = std::min(chunkSize, totalBytes - i);
//        DMA_TypeDef *dma_x = DMA2;
//        uint32_t stream = m_hspi->hdmatx->StreamIndex;
//        uint8_t shift[8] = {0, 6, 16, 22, 0, 6, 16, 22}; //битовое смещение во флаговых регистрах IFCR (L и H)
//        volatile uint32_t *ifcr_tx = (stream > 3) ? &(dma_x->HIFCR) : &(dma_x->LIFCR);
//        //сбрасываем флаги прерываний tx
//        *ifcr_tx = 0x3F << shift[stream];
//        DMA_Stream_TypeDef *dma_TX = m_hspi->hdmatx->Instance;
//        m_hspi->Instance->CR2 |= SPI_CR2_TXDMAEN;
//        dma_TX->PAR = (uint32_t)(&m_hspi->Instance->DR); //приемник периферия - адрес регистра DR spi
//        DMA2_Stream3->NDTR = (uint32_t)currentChunk;   //размер передаваемых данных
//        DMA2_Stream3->M0AR = (uint32_t)buff;      //источник память - адрес буфера исходящих данных
//        DMA2_Stream3->CR &= ~DMA_SxCR_PINC;       //инкремент адреса периферии отключен
//        DMA2_Stream3->CR |= DMA_SxCR_MINC;        //инкремент адреса памяти включен
//        DMA2_Stream3->CR |= (DMA_SxCR_EN);        //включение потока передачи (старт DMA передачи)

        HAL_SPI_Transmit_DMA(m_hspi, buff, currentChunk);
        while (m_hspi->hdmatx->State != HAL_DMA_STATE_READY)
        {}
    }

    ST7789_Unselect();

    return;
}

void ST7789V3::flushBuffer()
{
    ST7789_Select();

    constexpr uint32_t chunk_size{2048};
    static uint8_t byte_buffer[chunk_size * 2];

    uint32_t total_pixels = static_cast<uint32_t>(m_widthFB) * m_heightFB;
    for (uint32_t i{0}; i < total_pixels; i += chunk_size)
    {
        uint32_t current_chunk = std::min(chunk_size, total_pixels - i);

        for (uint32_t j{0}; j < current_chunk; j++)
        {
            uint16_t pixel = ST7789_ColorsRGB565::table[m_frameBuffer[i][j]];
            byte_buffer[j * 2] = (pixel >> 8) & 0xFF;
            byte_buffer[j * 2 + 1] = pixel & 0xFF;
        }

#ifdef USE_DMA
        HAL_SPI_Transmit_DMA(m_hspi, byte_buffer, current_chunk * 2);
        while (m_hspi->hdmatx->State != HAL_DMA_STATE_READY)
        {}
#else
        ST7789_SendDataMASS(byte_buffer, current_chunk * 2);
#endif
    }

    ST7789_Unselect();

    return;
}

// TODO: Возможно, потребуется разделение отправки с ее продолжением через прерываение DMA (окончание отправки блока).
void ST7789V3::flushBuffer(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1)
{
    ST7789_Select();

    constexpr uint16_t bufLength{4096};
    constexpr uint32_t chunkSize{bufLength/2};
    uint8_t buff[bufLength];
    uint16_t currX{x0};
    uint16_t currY{y0};
    uint32_t totalBytes = static_cast<uint32_t>(x1 - x0 + 1) * (y1 - y0 +  1) * 2;

    // set window
    columnSet(x0 + m_xShift, x1 + m_xShift);
    rowSet(y0 + m_yShift, y1 + m_yShift);
    ST7789_SendCmd(ST7789_Commands::RAMWR);
    for (uint32_t i{0}; i < totalBytes; i += bufLength)
    {
        uint32_t j{0};
        for (; j < chunkSize; j++)
        {
            uint16_t pixel = ST7789_ColorsRGB565::table[m_frameBuffer[currX][currY]];
            buff[j * 2] = static_cast<uint8_t>((pixel >> 8) & 0xFF);
            buff[j * 2 + 1] = static_cast<uint8_t>(pixel & 0xFF);
            currX++;
            if (currX > x1)
            {
                currX = x0;
                currY++;
            }
            if (currY > y1)
            {
                break;
            }
        }
        uint32_t currentChunkSize = std::min(chunkSize, j + 1);
//        printf("%d %d %ld %ld \r\n", currX, currY, i, currentChunkSize * 2);
        HAL_SPI_Transmit_DMA(m_hspi, buff, currentChunkSize * 2);
        while (m_hspi->hdmatx->State != HAL_DMA_STATE_READY)
        {}
    }

    ST7789_Unselect();

    return;
}

void ST7789V3::fillScreen(uint8_t color)
{
	fillRect(0, 0, ST7789_WIDTH, ST7789_HEIGHT, color);

	return;
}

void ST7789V3::clear(void)
{
	fillRect(0, 0, ST7789_WIDTH, ST7789_HEIGHT, 0);

	return;
}

void ST7789V3::fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint8_t color)
{
	if ((x >= ST7789_WIDTH) || (y >= ST7789_HEIGHT)) {
		return;
	}
	if ((w <= 0) || (h <= 0)) {
	    return;
	}
	if ((x + w - 1) >= ST7789_WIDTH)	{
		w = ST7789_WIDTH - x;
	}
	if ((y + h - 1) >= ST7789_HEIGHT) {
		h = ST7789_HEIGHT - y;
	}

	setWindow(x, y, x + w - 1, y + h - 1);
//	ramWrite(&ST7789_ColorsRGB565::table[color], (w * h));
	ramWriteDMA(&ST7789_ColorsRGB565::table[color], w, h);

	return;
}

void ST7789V3::fillRectFB(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint8_t color)
{
    for (uint16_t x{x0}; x <= x1; ++x)
    {
        for (uint16_t y{y0}; y <= y1; ++y)
        {
            m_frameBuffer[x][y] = color;
        }
    }

    return;
}

void ST7789V3::drawImage(uint16_t x, uint16_t y, uint16_t w, uint16_t h, const uint8_t *data)
{
    if ((x >= ST7789_WIDTH) || (y >= ST7789_HEIGHT)) {
        return;
    }
    if ((x + w - 1) >= ST7789_WIDTH) {
        return;
    }
    if ((y + h - 1) >= ST7789_HEIGHT) {
        return;
    }

    setWindow(x, y, x + w - 1, y + h - 1);
    ST7789_Select();

    uint8_t buff[2];
    uint16_t color;
    uint8_t *cursor{(uint8_t *)data};
    uint16_t Len = w * h;
    while (Len > 0) {
        color = ST7789_ColorsRGB565::table[*cursor];
        buff[0] = static_cast<uint8_t>((color >> 8) & 0xFF);
        buff[1] = static_cast<uint8_t>(color & 0xFF);
        ST7789_SendDataMASS(buff, 2);
        Len--;
        cursor++;
    }

    ST7789_Unselect();
//    ramWrite(data, (w * h));

    return;
}

void ST7789V3::drawCharFB(uint8_t sym, uint16_t x, uint16_t y, uint8_t color, uint8_t background)
{
    KOI8Rx24_decompress_sym(sym, ST7789_Font_Style_e::ST7789_Font_Bold);
    for (uint8_t i{0}; i < 24; ++i)
    {
        for (uint8_t j{0}; j < TERMINUS_K12x24N_CHAR_WIDTH; ++j)
        {
            std::bitset<16> row(sym16bit_buf[i]);
            m_frameBuffer[x + j][y + i] = row.test(TERMINUS_K12x24N_CHAR_WIDTH - j) ? color : background;
        }
    }

    return;
}

void ST7789V3::KOI8Rx24_decompress_sym(uint8_t sym, ST7789_Font_Style_e style)
{
    uint16_t idx;

    idx = (style == ST7789_Font_Style_e::ST7789_Font_Regular) ? TERMINUS_K12x24N_ID[sym] : TERMINUS_K12x24B_ID[sym];
    uint8_t i = 0;
    while (i < (TERMINUS_K12x24N_CHAR_WIDTH * TERMINUS_K12x24N_CHAR_HEIGHT))
    {
        uint16_t s, j;
        s = (style == ST7789_Font_Style_e::ST7789_Font_Regular) ? TERMINUS_K12x24N[idx] : TERMINUS_K12x24B[idx];
        j = (s >> 12);
        s &= (uint16_t)0x0fff;

        if (j == 0)
        {
        	j = 16;
        }

        for (uint8_t k{0}; k < j; ++k)
        {
        	sym16bit_buf[i++] = s;
        }

        ++idx;
    }

    return;
}
