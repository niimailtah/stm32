/**
 * @file:      ili9341.cpp
 * @author:    Alexey Polurotov
 * @version:   0.0.1
 * @date:      2026-08-31
 * @brief:
 */

#include "ili9341.hpp"
#include "fsmc.h"

TILI9341::TILI9341(SRAM_HandleTypeDef* hsramHandle, const TILI9341_GPIO& bl) : m_hsram{hsramHandle}, m_bl(bl)
{
}

void TILI9341::Init()
{

}

void TILI9341::Demo()
{

}
