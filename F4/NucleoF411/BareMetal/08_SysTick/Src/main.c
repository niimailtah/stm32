#include "gpio.h"
#include "systick.h"

int main(void)
{
	/* Initialize LED */
	led_init();

	while (true)
	{
		/* Delay for 500m s*/
		systick_msec_delay(500);
		led_toggle();
	}
}
