// main.c
#include <stdio.h>
#include <stdbool.h>
#include "adc.h"
#include "uart.h"

//
int sensor_value;

//
int main(void)
{
	/* Initialize debug UART */
	uart_init();

	/* Initialize ADC */
	pa1_adc_init();

	/* Start conversion */
	start_conversion();

	while (true)
	{
		sensor_value = adc_read();
		printf("Sensor Value: %d\r\n", sensor_value);
	}
}
