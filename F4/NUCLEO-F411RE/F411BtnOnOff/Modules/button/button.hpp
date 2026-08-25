/**
 * @file:      button.hpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#pragma once
#include "gpio.h"

class Button
{
private:
	GPIO_TypeDef* m_port{nullptr};
	uint16_t m_pin;
	uint32_t m_tick;
	bool m_isDown{false};

	static constexpr uint32_t debounce{20};

public:
	Button() = default;
	Button(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
	virtual ~Button() = default;

	void Update();
	bool isDown();
};

