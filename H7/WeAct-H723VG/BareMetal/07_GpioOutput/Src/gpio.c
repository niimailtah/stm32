#include "gpio.h"

#define GPIOEEN	    (1U<<5)
#define LED_BS3	    (1U<<3)  /* Bit Set Pin 3 */
#define LED_BR3	    (1U<<19) /* Bit Reset Pin 3 */

//
void led_init(void)
{
	/* Enable clock access to GPIO E */
	RCC->AHB4ENR |= GPIOEEN;

	/* Set PE3 mode to output mode */
	GPIOE->MODER |= (1U<<6);
	GPIOE->MODER &= ~(1U<<7);
}

//
void led_on(void)
{
	/* Set PE3 high */
	GPIOE->BSRR |= LED_BS3;
}

//
void led_off(void)
{
	/* Set PE3 low */
	GPIOE->BSRR |= LED_BR3;
}
