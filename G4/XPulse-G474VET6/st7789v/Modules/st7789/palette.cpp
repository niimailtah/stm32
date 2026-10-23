/**
  ******************************************************************************
  * @file    palette.cpp
  * @brief
  *  Created on: 4 сент. 2026 г.
  *      Author: Alexey Polurotov
  ******************************************************************************
  */

#include <cstdint>
#include "palette.hpp"

/**
  * @brief
  * @return
  */
uint16_t ST7789_ColorsRGB565::rgb565(uint8_t r, uint8_t g, uint8_t b)
{
    return ((r & 0xF8) << 8) | ((g & 0xFC) << 3) | (b >> 3);
}
