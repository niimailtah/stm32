/**
 ******************************************************************************
 * @file           : uart.cpp
 * @author         : Alexey Polurotov
 * @brief          : UART driver
 ******************************************************************************
 */
#include <stdint.h>
#include "STM32F411/rccregisters.hpp"
#include "STM32F411/gpioaregisters.hpp"
#include "STM32F411/usart2registers.hpp"


static void uart_write(int ch);


namespace std {
#ifdef __cplusplus
extern "C" {
#endif

int _write(int fd, char *ptr, int len)
{
	(void)fd;
	int i;

	for (i = 0; i < len; ++i) {
		uart_write(*ptr++);
	}

	return len;
}

//size_t _read(int fd, char *ptr, size_t len)
//{
//	(void)fd;
//	size_t i;
//	for(i=0;i<len;i++) {
//		*ptr++ = uart_read();
//		uart_write(*ptr++); //For Terminal Echo
//	}
//	return i;
//}

#ifdef __cplusplus
}
#endif
}


// Как ни крути, а в HAL кое чего есть полезного
#define UART_DIV_SAMPLING8(_PCLK_, _BAUD_)             ((uint32_t)((((uint64_t)(_PCLK_))*25U)/(2U*((uint64_t)(_BAUD_)))))
#define UART_DIVMANT_SAMPLING8(_PCLK_, _BAUD_)         (UART_DIV_SAMPLING8((_PCLK_), (_BAUD_))/100U)
#define UART_DIVFRAQ_SAMPLING8(_PCLK_, _BAUD_)         ((((UART_DIV_SAMPLING8((_PCLK_), (_BAUD_)) - (UART_DIVMANT_SAMPLING8((_PCLK_), (_BAUD_)) * 100U)) * 8U)\
                                                         + 50U) / 100U)
/* UART BRR = mantissa + overflow + fraction
            = (UART DIVMANT << 4) + ((UART DIVFRAQ & 0xF8) << 1) + (UART DIVFRAQ & 0x07U) */
#define UART_BRR_SAMPLING8(_PCLK_, _BAUD_)             ((UART_DIVMANT_SAMPLING8((_PCLK_), (_BAUD_)) << 4U) + \
                                                        ((UART_DIVFRAQ_SAMPLING8((_PCLK_), (_BAUD_)) & 0xF8U) << 1U) + \
                                                        (UART_DIVFRAQ_SAMPLING8((_PCLK_), (_BAUD_)) & 0x07U))

/**
 *
 */
void uart_init(void)
{
	constexpr uint32_t DBG_UART_BAUDRATE{115200U};
	constexpr uint32_t SYS_FREQ{16000000U};
	constexpr uint32_t APB1_CLK{SYS_FREQ/2};
	[[maybe_unused]] constexpr std::uint32_t UartSpeed = static_cast<std::uint32_t>((APB1_CLK + (DBG_UART_BAUDRATE)/2U) / DBG_UART_BAUDRATE);

	RCC::AHB1ENR::GPIOAEN::Enable::Set();           // Enable clock access to GPIOA
	GPIOA::MODER::MODER2::Alternate::Set();         // Set the mode of PA2 to alternate function mode
	GPIOA::AFRL::AFRL2::Af7::Set();                 // Set alternate function type of PA2 to AF7(UART2_TX)
	RCC::APB1ENR::USART2EN::Enable::Set();          // Enable clock access to UART2
//	USART2::BRR::Write(UartSpeed);
	USART2::BRR::Write(UART_BRR_SAMPLING8(APB1_CLK, DBG_UART_BAUDRATE));
	USART2::CR1::TE::Enable::Set();                 // Configure transfer direction. Transmitter is enabled
	USART2::CR1::UE::Enable::Set();                 // Enable UART Module
}

/**
 *
 */
static void uart_write(int ch)
{
	while (!USART2::SR::TXE::DataRegisterEmpty::IsSet()) {}
	USART2::DR::Write(ch & 0xFF);
}
