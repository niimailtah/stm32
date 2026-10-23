/**
  ******************************************************************************
  * @file    global.cpp
  * @brief
  *  Created on: 18 сент. 2026 г.
  *      Author: Alexey Polurotov
  ******************************************************************************
  */

#include "global.hpp"
#include "st7789.h"

/* Variables ---------------------------------------------------------------- */
//__attribute__((section(".ccmram"))) ST7789V3 display(&(ST7789_BUS),
ST7789V3 display(&(ST7789_BUS),
                 ST7789_GPIO(LCD_CS_GPIO_Port, LCD_CS_Pin),    // CS
                 ST7789_GPIO(LCD_DC_GPIO_Port, LCD_DC_Pin),    // DC
                 ST7789_GPIO(LCD_RES_GPIO_Port, LCD_RES_Pin)); // RST

/* Constants ---------------------------------------------------------------- */
static const UTF8_Charmaps_s charmap_table[] = {
        {.utf8_sym = L'А', .koi8r_sym = 0xE1, .cpp866_sym = 0x80},
        {.utf8_sym = L'Б', .koi8r_sym = 0xE2, .cpp866_sym = 0x81},
        {.utf8_sym = L'В', .koi8r_sym = 0xF7, .cpp866_sym = 0x82},
        {.utf8_sym = L'Г', .koi8r_sym = 0xE7, .cpp866_sym = 0x83},
        {.utf8_sym = L'Д', .koi8r_sym = 0xE4, .cpp866_sym = 0x84},
        {.utf8_sym = L'Е', .koi8r_sym = 0xE5, .cpp866_sym = 0x85},
        {.utf8_sym = L'Ж', .koi8r_sym = 0xF6, .cpp866_sym = 0x86},
        {.utf8_sym = L'З', .koi8r_sym = 0xFA, .cpp866_sym = 0x87},
        {.utf8_sym = L'И', .koi8r_sym = 0xE9, .cpp866_sym = 0x88},
        {.utf8_sym = L'Й', .koi8r_sym = 0xEA, .cpp866_sym = 0x89},
        {.utf8_sym = L'К', .koi8r_sym = 0xEB, .cpp866_sym = 0x8A},
        {.utf8_sym = L'Л', .koi8r_sym = 0xEC, .cpp866_sym = 0x8B},
        {.utf8_sym = L'М', .koi8r_sym = 0xED, .cpp866_sym = 0x8C},
        {.utf8_sym = L'Н', .koi8r_sym = 0xEE, .cpp866_sym = 0x8D},
        {.utf8_sym = L'О', .koi8r_sym = 0xEF, .cpp866_sym = 0x8E},
        {.utf8_sym = L'П', .koi8r_sym = 0xF0, .cpp866_sym = 0x8F},
        {.utf8_sym = L'Р', .koi8r_sym = 0xF2, .cpp866_sym = 0x90},
        {.utf8_sym = L'С', .koi8r_sym = 0xF3, .cpp866_sym = 0x91},
        {.utf8_sym = L'Т', .koi8r_sym = 0xF4, .cpp866_sym = 0x92},
        {.utf8_sym = L'У', .koi8r_sym = 0xF5, .cpp866_sym = 0x93},
        {.utf8_sym = L'Ф', .koi8r_sym = 0xE6, .cpp866_sym = 0x94},
        {.utf8_sym = L'Х', .koi8r_sym = 0xE8, .cpp866_sym = 0x95},
        {.utf8_sym = L'Ц', .koi8r_sym = 0xE3, .cpp866_sym = 0x96},
        {.utf8_sym = L'Ч', .koi8r_sym = 0xFE, .cpp866_sym = 0x97},
        {.utf8_sym = L'Ш', .koi8r_sym = 0xFB, .cpp866_sym = 0x98},
        {.utf8_sym = L'Щ', .koi8r_sym = 0xFD, .cpp866_sym = 0x99},
        {.utf8_sym = L'Ъ', .koi8r_sym = 0xFF, .cpp866_sym = 0x9A},
        {.utf8_sym = L'Ы', .koi8r_sym = 0xF9, .cpp866_sym = 0x9B},
        {.utf8_sym = L'Ь', .koi8r_sym = 0xF8, .cpp866_sym = 0x9C},
        {.utf8_sym = L'Э', .koi8r_sym = 0xFC, .cpp866_sym = 0x9D},
        {.utf8_sym = L'Ю', .koi8r_sym = 0xE0, .cpp866_sym = 0x9E},
        {.utf8_sym = L'Я', .koi8r_sym = 0xF1, .cpp866_sym = 0x9F},
        {.utf8_sym = L'а', .koi8r_sym = 0xC1, .cpp866_sym = 0xA0},
        {.utf8_sym = L'б', .koi8r_sym = 0xC2, .cpp866_sym = 0xA1},
        {.utf8_sym = L'в', .koi8r_sym = 0xD7, .cpp866_sym = 0xA2},
        {.utf8_sym = L'г', .koi8r_sym = 0xC7, .cpp866_sym = 0xA3},
        {.utf8_sym = L'д', .koi8r_sym = 0xC4, .cpp866_sym = 0xA4},
        {.utf8_sym = L'е', .koi8r_sym = 0xC5, .cpp866_sym = 0xA5},
        {.utf8_sym = L'ж', .koi8r_sym = 0xD6, .cpp866_sym = 0xA6},
        {.utf8_sym = L'з', .koi8r_sym = 0xDA, .cpp866_sym = 0xA7},
        {.utf8_sym = L'и', .koi8r_sym = 0xC9, .cpp866_sym = 0xA8},
        {.utf8_sym = L'й', .koi8r_sym = 0xCA, .cpp866_sym = 0xA9},
        {.utf8_sym = L'к', .koi8r_sym = 0xCB, .cpp866_sym = 0xAA},
        {.utf8_sym = L'л', .koi8r_sym = 0xCC, .cpp866_sym = 0xAB},
        {.utf8_sym = L'м', .koi8r_sym = 0xCD, .cpp866_sym = 0xAC},
        {.utf8_sym = L'н', .koi8r_sym = 0xCE, .cpp866_sym = 0xAD},
        {.utf8_sym = L'о', .koi8r_sym = 0xCF, .cpp866_sym = 0xAE},
        {.utf8_sym = L'п', .koi8r_sym = 0xD0, .cpp866_sym = 0xAF},
        {.utf8_sym = L'р', .koi8r_sym = 0xD2, .cpp866_sym = 0xE0},
        {.utf8_sym = L'с', .koi8r_sym = 0xD3, .cpp866_sym = 0xE1},
        {.utf8_sym = L'т', .koi8r_sym = 0xD4, .cpp866_sym = 0xE2},
        {.utf8_sym = L'у', .koi8r_sym = 0xD5, .cpp866_sym = 0xE3},
        {.utf8_sym = L'ф', .koi8r_sym = 0xC6, .cpp866_sym = 0xE4},
        {.utf8_sym = L'х', .koi8r_sym = 0xC8, .cpp866_sym = 0xE5},
        {.utf8_sym = L'ц', .koi8r_sym = 0xC3, .cpp866_sym = 0xE6},
        {.utf8_sym = L'ч', .koi8r_sym = 0xDE, .cpp866_sym = 0xE7},
        {.utf8_sym = L'ш', .koi8r_sym = 0xDB, .cpp866_sym = 0xE8},
        {.utf8_sym = L'щ', .koi8r_sym = 0xDD, .cpp866_sym = 0xE9},
        {.utf8_sym = L'ъ', .koi8r_sym = 0xDF, .cpp866_sym = 0xEA},
        {.utf8_sym = L'ы', .koi8r_sym = 0xD9, .cpp866_sym = 0xEB},
        {.utf8_sym = L'ь', .koi8r_sym = 0xD8, .cpp866_sym = 0xEC},
        {.utf8_sym = L'э', .koi8r_sym = 0xDC, .cpp866_sym = 0xED},
        {.utf8_sym = L'ю', .koi8r_sym = 0xC0, .cpp866_sym = 0xEE},
        {.utf8_sym = L'я', .koi8r_sym = 0xD1, .cpp866_sym = 0xEF},
        {.utf8_sym = L'Ё', .koi8r_sym = 0xB3, .cpp866_sym = 0xF0},
        {.utf8_sym = L'ё', .koi8r_sym = 0xA3, .cpp866_sym = 0xF1},
        {.utf8_sym = L'°', .koi8r_sym = 0x9C, .cpp866_sym = 0xF8},
};

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
    uint8_t sym{0};

    if (utf8_sym > 0xFFFF)
    {
//      Debug("Symbol must be less than 0xFFFF");
        return sym;
    }
    if (utf8_sym < 0x80)
    {
        return (uint8_t)utf8_sym;
    }
    for (uint8_t i{0}; i < sizeof(charmap_table); ++i)
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
    uint8_t sym{0};

    if (utf8_sym > 0xFFFF)
    {
//      Debug("Symbol must be less than 0xFFFF");
        return sym;
    }
    if (utf8_sym < 0x80)
    {
        return (uint8_t)utf8_sym;
    }
    for (uint8_t i{0}; i < sizeof(charmap_table); ++i)
    {
        if (utf8_sym == charmap_table[i].utf8_sym)
        {
            sym = charmap_table[i].cpp866_sym;
            break;
        }
    }

    return sym;
}
