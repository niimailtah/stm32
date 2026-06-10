#include "LED.h"

void turnOnLED(void)
{
    // Set PA5(LED_PIN) low
    GPIOA_OD_R &= ~(LED_PIN);
    // *(volatile uint32_t*)0x40000000UL &= ~(1U << 5);
}

void turnOffLED(void)
{
    // Set PA5(LED_PIN) high
    GPIOA_OD_R |= LED_PIN;
    // *(volatile uint32_t*)0x40000000UL |= (1U << 5);
}
