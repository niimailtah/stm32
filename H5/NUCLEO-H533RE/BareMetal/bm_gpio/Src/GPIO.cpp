#include "GPIO.h"

void GPIO_init(void)
{
    // Enable clock access to GPIOA
    RCC_AHB1EN_R |= GPIOAEN;

    GPIOA_MODE_R |= (1U<<10);  // Set bit 10 to 1
    GPIOA_MODE_R &= ~(1U<<11); // Set bit 11 to 0

    // *(volatile uint32_t*)0x40023830UL |= (0x1UL << 0U); // turn on the clock on AHB1 bus

    // *(volatile uint32_t*)0x40000000UL |= (1U<<10);
    // *(volatile uint32_t*)0x40000000UL &= ~(1U<<11);
    // *(volatile uint32_t*)0x40011004 &= ~(0b1111 << 20); // clear the bits
    // *(volatile uint32_t*)0x40011004 |= (0b0010 << 20); // put 00 mode as general output push pull and 10 as output mode on 2MHz
}
