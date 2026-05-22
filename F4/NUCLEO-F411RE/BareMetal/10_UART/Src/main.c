#include <stdio.h>
#include <stdbool.h>
#include "uart.h"

int main(void)
{
	/*Initialize debug UART*/
	uart_init();

	while (true)
	{
		printf("Hello from STM32...\r\n");
	}
}
