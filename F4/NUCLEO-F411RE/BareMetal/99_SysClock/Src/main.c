// main.c
#include <stdbool.h>
#include "stm32f4xx.h"
#include "gpio.h"
#include "tim.h"
#include "system_clock.h"

int main(void)
{
	// определяем где выполняется программа, и корректируем расположение
	// таблицы векторов
	uint32_t retPCasm(void); // небольшая функция для определения где
	// выполняется программа в FLASH или RAM
	if ((retPCasm() & 0x20000000) != 0)
	{
		*((uint32_t *)0xe000ed08) = 0x20000000; /* FlagDebugInRAM=1;*/
	}

    /* Initialize the system clock at 96 MHz */
    system_clock_init();
	// SysClockConfig100MHz();

	/* Initialize LED */
	led_init();

    /* Initialize timer */
	tim2_1hz_init();

	while (true)
	{
		led_toggle();

		/* Wait for UIF */
		while (!(TIM2->SR & SR_UIF)) {}

		/* Clear UIF */
		TIM2->SR &= ~(SR_UIF);
	}
}
