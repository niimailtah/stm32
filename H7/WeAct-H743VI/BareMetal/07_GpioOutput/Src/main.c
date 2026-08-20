/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Alexey Polurotov
 * @brief          : Flash LED
 ******************************************************************************
 */

#include <stdbool.h>
#include "gpio.h"

int main(void)
{
	/* Initialize LED */
	led_init();

	while (true)
	{
		led_on();
		for (int i = 0; i < 1000000; ++i)
		{
		}

		led_off();
		for (int i = 0; i < 1000000; ++i)
		{
		}
	}
}
