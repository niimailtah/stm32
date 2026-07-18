/**
 ******************************************************************************
 * @file           : spi.cpp
 * @author         : Alexey Polurotov
 * @brief          : I2C driver
 ******************************************************************************
 */

#include <stdint.h>
#include "spi.h"

#define SPI1EN		(1U<<12)
#define GPIOAEN		(1U<<0)

#define SR_TXE		(1U<<1)
#define SR_RXNE		(1U<<0)

#define SR_BSY		(1U<<7)

// PA5 -> CLK
// PA6 -> MISO
// PA7 -> MOSI

// PA9 -> Slave Select

/**
 *
 */
void spi_gpio_init(void)
{
}

void spi1_config(void)
{
}

void spi1_transmit(uint8_t *data, uint32_t size)
{
}

void spi1_receive(uint8_t *data, uint32_t size)
{
}

/* Pull low to enable */
void cs_enable(void)
{
}

/* Pull high to disable */
void cs_disable(void)
{
}
