#include "stm32f4xx.h"
#include "gpio.h"


#define GPIOAEN	    (1U<<0)
#define LED_BS6	    (1U<<6)  /* Bit Set Pin 6 */
#define LED_BR6	    (1U<<22) /* Bit Reset Pin 6 */

//
void led_init(void)
{
	/* Enable clock access to GPIO A*/
	RCC->AHB1ENR |= GPIOAEN;

	/* Set PA6 mode to output mode */
	GPIOA->MODER |= (1U<<12);
	GPIOA->MODER &= ~(1U<<13);
}

//
void led_on(void)
{
	/* Set PA6 high */
	GPIOA->BSRR |= LED_BS6;
}

//
void led_off(void)
{
	/* Set PA6 high */
	GPIOA->BSRR |= LED_BR6;
}
