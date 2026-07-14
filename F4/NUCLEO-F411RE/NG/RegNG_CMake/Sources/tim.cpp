/**
 ******************************************************************************
 * @file           : tim.cpp
 * @author         : Alexey Polurotov
 * @brief          : Timer driver
 ******************************************************************************
 */
#include "STM32F411/rccregisters.hpp"
#include "STM32F411/tim2Registers.hpp"


/**
 *
 */
void tim2_1hz_init(void)
{
	RCC::APB1ENR::TIM2EN::Enable::Set(); /* Enable clock access to tim2 */

	TIM2::PSC::Write(1600 - 1);  /* Set prescaler value */
	TIM2::ARR::Write(10000 - 1); /* Set auto-reload value */
	TIM2::CNT::Write(0);         /* Clear counter */

	TIM2::CR1::CEN::Enable::Set(); /* Enable timer */
}
