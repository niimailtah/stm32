/**
 * @file:      button.cpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#include "button.hpp"
#include "gpio.h"


Button::Button(GPIO_TypeDef* Port, uint16_t Pin) : m_port{Port}, m_pin{Pin}
{
}

void Button::Update()
{
	if (HAL_GPIO_ReadPin(m_port, m_pin) == GPIO_PIN_RESET)
	{
		m_isDown = true;
	}
	else
	{
		m_isDown = false;
	}
}

bool Button::isDown()
{
	return m_isDown;
}
