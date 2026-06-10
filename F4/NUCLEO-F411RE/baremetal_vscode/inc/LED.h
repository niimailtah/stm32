#ifndef LED_H
#define LED_H

#include <stdint.h>
#include "GPIO.h"

// Offset for output data register
#define OD_R_OFFSET (0x14UL)
// Address of GPIOA output data register
#define GPIOA_OD_R (*(volatile uint32_t*)(GPIOA_BASE + OD_R_OFFSET))
// Bit mask for GPIOA pin 5
#define PIN5 (1U<<5)
// Alias for PIN5 representing LED pin
#define LED_PIN PIN5

void turnOnLED(void);
void turnOffLED(void);
void delay(void);

#endif
