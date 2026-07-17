/**
 ******************************************************************************
 * @file           : i2c.cpp
 * @author         : Alexey Polurotov
 * @brief          : I2C driver
 ******************************************************************************
 */
#include <stdint.h>
#include "STM32F411/rccregisters.hpp"
#include "STM32F411/gpiobregisters.hpp"
#include "STM32F411/i2c1registers.hpp"

//#define 	GPIOBEN			(1U<<1)
//#define 	I2C1EN			(1U<<21)
//
//#define 	I2C_100KHZ	  			80		// 0B 0101 0000 = Decimal = 80
//#define 	SD_MODE_MAX_RISE_TIME   17
//#define		CR1_PE			(1U<<0)
//
//#define		SR2_BUSY		(1U<<1)
//#define     CR1_START		(1U<<8)
//#define		SR1_SB			(1U<<0)
//#define		SR1_ADDR		(1U<<1)
//#define		SR1_TXE			(1U<<7)
//#define		CR1_ACK			(1U<<10)
//#define     CR1_STOP		(1U<<9)
//#define		SR1_RXNE		(1U<<6)
//#define	    SR1_BTF			(1U<<2)

/*
 * PB8 ----- SCL
 * PB9 ----- SDA
 * */


void i2c1_init(void)
{
	constexpr uint16_t SD_MODE_MAX_RISE_TIME = 17;
	RCC::AHB1ENR::GPIOBEN::Enable::Set();  /* Enable clock access to GPIOB */


	GPIOB::MODER::MODER8::Alternate::Set(); /* Set PB8 mode to alternate function */
	GPIOB::MODER::MODER9::Alternate::Set(); /* Set PB9 mode to alternate function */

	/* Set PB8 and PB9 output type to open drain */
	GPIOB::OTYPER::OT8::OutputOpenDrain::Set();
	GPIOB::OTYPER::OT9::OutputOpenDrain::Set();

	GPIOB::PUPDR::PUPDR8::PullUp::Set(); /* Enable Pull-up for PB8 */
	GPIOB::PUPDR::PUPDR9::PullUp::Set(); /* Enable Pull-up for PB9 */

	/* Set PB8 and PB9 alternate function type to I2C (AF4) */
	GPIOB::AFRH::AFRH8::Af4::Set();
	GPIOB::AFRH::AFRH9::Af4::Set();

	RCC::APB1ENR::I2C1EN::Enable::Set();  /* Enable clock access to I2C1 */

	I2C1::CR1::SWRST::UnderReset::Set();  /* Enter reset mode */
	I2C1::CR1::SWRST::NotUnderReset::Set();  /* Come out of reset mode */

	I2C1::CR2::FREQ::Set(1U<<4); /* Set Peripheral clock frequency 16 Mhz */

	I2C1::CCR::F_S::StandartMode::Set();  /* Set I2C to standard mode, 100kHz clock */

	I2C1::TRISE::Write(SD_MODE_MAX_RISE_TIME); /* Set rise time */

	I2C1::CR1::PE::Enable::Set();  /* Enable I2C1 module */
}


void i2c1_byte_read(char saddr, char maddr, char* data)
{
	[[maybe_unused]] volatile int tmp;

	while (I2C1::SR2::BUSY::CommunicationInProgress::IsSet()) {} /* Wait until bus not busy */
	I2C1::CR1::START::Enable::Set();  /* Generate start */

	while (!(I2C1::SR1::SB::StartConditionGenerated::IsSet())) {} /* Wait until start flag is set */

	I2C1::DR::Set(saddr << 1);  /* Transmit slave address + Write */

	/* Wait until addr flag is set */
	while (!(I2C1::SR1::ADDR::ReceivedAddressMatched::IsSet())) {}

    tmp = I2C1::SR2::Get(); /* Clear addr flag */
	I2C1::DR::Set(maddr); /* Send memory address */

	/*Wait until transmitter empty */
    while (!(I2C1::SR1::TxE::TransmittersDataRegisterEmpty::IsSet())) {}

	I2C1::CR1::START::Enable::Set();  /* Generate start */

    /* Wait until start flag is set */
    while (!(I2C1::SR1::SB::StartConditionGenerated::IsSet())) {}

    I2C1::DR::Set(saddr << 1 | 1); /* Transmit slave address + Read */

    /* Wait until addr flag is set */
	while (!(I2C1::SR1::ADDR::ReceivedAddressMatched::IsSet())) {}

    I2C1::CR1::ACK::NoAcknowledge::Set(); /* Disable Acknowledge */

    tmp = I2C1::SR2::Get(); /* Clear addr flag */

    I2C1::CR1::STOP::Enable::Set();  /* Generate stop after data received */

    /* Wait until RXNE flag is set */
    while (!(I2C1::SR1::RxNE::ReceiversDataRegisterEmpty::IsSet())) {}

    /* Read data from DR */
    *data++ = I2C1::DR::Get();
}


void i2c1_burst_read(char saddr, char maddr, int n, char* data)
{
	[[maybe_unused]] volatile int tmp;

	while (I2C1::SR2::BUSY::CommunicationInProgress::IsSet()) {} /* Wait until bus not busy */

    I2C1::CR1::START::Enable::Set();  /* Generate start */

    while (!(I2C1::SR1::SB::StartConditionGenerated::IsSet())) {} /* Wait until start flag is set */

	I2C1::DR::Set(saddr << 1);  /* Transmit slave address + Write */

    /* Wait until addr flag is set */
	while (!(I2C1::SR1::ADDR::ReceivedAddressMatched::IsSet())) {}

    tmp = I2C1::SR2::Get(); /* Clear addr flag */

    /* Wait until transmitter empty */
    while (!(I2C1::SR1::TxE::TransmittersDataRegisterEmpty::IsSet())) {}

	I2C1::DR::Set(maddr); /* Send memory address */

    /* Wait until transmitter empty */
	while (!(I2C1::SR1::TxE::TransmittersDataRegisterEmpty::IsSet())) {}

    I2C1::CR1::START::Enable::Set();  /* Generate restart */

    while (!(I2C1::SR1::SB::StartConditionGenerated::IsSet())) {} /* Wait until start flag is set */

    I2C1::DR::Set(saddr << 1 | 1); /* Transmit slave address + Read */

    /* Wait until addr flag is set */
    while (!(I2C1::SR1::ADDR::ReceivedAddressMatched::IsSet())) {}

    tmp = I2C1::SR2::Get(); /* Clear addr flag */

    I2C1::CR1::ACK::Acknowledge::Set();  /* Enable Acknowledge */

    while (static_cast<uint32_t>(n) > 0U)
    {
    	/* if one byte */
    	if (n == 1U)
    	{
    		I2C1::CR1::STOP::Enable::Set();  /* Generate stop */

 			/* Wait for RXNE flag set */
    		while (!(I2C1::SR1::RxNE::ReceiversDataRegisterEmpty::IsSet())) {}

            /* Read data from DR */
            *data++ = I2C1::DR::Get();
            break;
    	}
    	else
    	{
            /* Wait until RXNE flag is set */
    		while (!(I2C1::SR1::RxNE::ReceiversDataRegisterEmpty::IsSet())) {}

            /* Read data from DR */
            *data++ = I2C1::DR::Get();

            n--;
    	}
    }
}

/**
 *
 */
void i2c1_burst_write(char saddr, char maddr, int n, char* data)
{
	[[maybe_unused]] volatile int tmp;

	while (I2C1::SR2::BUSY::CommunicationInProgress::IsSet()) {} /* Wait until bus not busy */
    I2C1::CR1::START::Enable::Set();  /* Generate start */

    while (!(I2C1::SR1::SB::StartConditionGenerated::IsSet())) {} /* Wait until start flag is set */
    I2C1::DR::Set(saddr << 1);  /* Transmit slave address + Write */

    /* Wait until addr flag is set */
    while (!(I2C1::SR1::ADDR::ReceivedAddressMatched::IsSet())) {}

    tmp = I2C1::SR2::Get(); /* Clear addr flag */

    /* Wait until data register empty */
    while (!(I2C1::SR1::TxE::TransmittersDataRegisterEmpty::IsSet())) {}

	I2C1::DR::Set(maddr); /* Send memory address */

    for (int i = 0; i < n; i++)
    {
        /* Wait until data register empty */
    	while (!(I2C1::SR1::TxE::TransmittersDataRegisterEmpty::IsSet())) {}

        /* Transmit memory address */
        I2C1::DR::Write(*data++);
    }

    /* Wait until transfer finished */
    while (!(I2C1::SR1::BTF::DataByteTransferSucceeded::IsSet())) {}

    I2C1::CR1::STOP::Enable::Set();  /* Generate stop */
}
