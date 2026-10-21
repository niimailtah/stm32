/**
  ******************************************************************************
  * @file    global.hpp
  * @brief
  *  Created on: 18 сент. 2026 г.
  *      Author: Alexey Polurotov
  ******************************************************************************
  */

#pragma once
#include <st7789.hpp>
#include <stdint.h>
#include "spi.h"

/* Defines ------------------------------------------------------------------ */
#define ST7789_BUS   hspi1

/* Typedefs ----------------------------------------------------------------- */
typedef struct
{
    uint16_t utf8_sym;
    uint8_t koi8r_sym;
    uint8_t cpp866_sym;
} UTF8_Charmaps_s;

/* Variables ---------------------------------------------------------------- */

extern ST7789V3 display;

/* Functions ----------------------------------------------------------------- */
uint8_t utf8_to_koi8r(uint16_t utf8_sym);
uint8_t utf8_to_cp866(uint16_t utf8_sym);
