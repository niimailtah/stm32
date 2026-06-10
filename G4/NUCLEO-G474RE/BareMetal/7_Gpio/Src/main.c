/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Niimailtah
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2025 Alexey Polurotov
 * MIT License
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdbool.h>

#include "gpio.h"

int main(void)
{
	/*Initialize LED*/
	led_init();

	while(true)
	{
		led_on();
		for (int i = 0; i < 100000; ++i) {}

		led_off();
		for (int i = 0; i < 100000; ++i) {}
	}
}
