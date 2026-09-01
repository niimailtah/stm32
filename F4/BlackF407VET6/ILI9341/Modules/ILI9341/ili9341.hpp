/**
 * @file:      ili9341.hpp
 * @author:    Alexey Polurotov
 * @version:   0.0.1
 * @date:      2026-08-31
 * @brief:
 */

#pragma once
#include "fsmc.h"

//--------------------------------------------------------------------
// Структура конфигурации GPIO
struct TILI9341_GPIO {
    GPIO_TypeDef* port;
    uint16_t pin;

    TILI9341_GPIO(GPIO_TypeDef* p, uint16_t pinNum) : port(p), pin(pinNum) {}
};

//--------------------------------------------------------------------
class TILI9341
{
private:
	SRAM_HandleTypeDef* m_hsram;
	TILI9341_GPIO m_bl;

public:
	TILI9341() = default;
	TILI9341(SRAM_HandleTypeDef* hsramHandle, const TILI9341_GPIO& bl);
	virtual ~TILI9341() = default;

	void Init();
	void Demo();
};
