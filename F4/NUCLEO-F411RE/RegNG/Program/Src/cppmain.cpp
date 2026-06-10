/** @file cppmain.cpp
 *
 * @author niimailtah
 * @date 2026-02-12
 */

#include "cppmain.h"
#include "gpioaregisters.hpp"
#include "rccregisters.hpp"
#include "pin.hpp"
#include "port.hpp"
#include "pinspack.hpp"

extern UART_HandleTypeDef huart2;

int some_variable { 0 };


void foo(int input)
{
}

using LedPin = Pin<Port<GPIOA>, 5U, PinWriteable>;

void cppMain()
{
	// установка тактирования пока не работает
//	RCC::CR::HSION::On::Set();
//	while (RCC::CR::HSIRDY::Ready::IsSet()) {}
//	RCC::PLLCFGR::PLLSRC::HsiSource::Set();
//	RCC::PLLCFGR::PLLM0::Set(16U);
//	RCC::PLLCFGR::PLLN0::Set(366U);
//	RCC::PLLCFGR::PLLP0::Pllp4::Set();
//	RCC::PLLCFGR::PLLQ0::Set(4U);
//	RCC::CR::PLLON::On::Set();
//	RCC::CFGR::SW::Pll::Set();

	RCC::AHB1ENR::GPIOAEN::Enable::Set();
	GPIOA::MODER::MODER5::Output::Set();
	GPIOA::PUPDR::PUPDR5::NoPullUpNoPullDown::Set();
	GPIOA::OSPEEDR::OSPEEDR5::LowSpeed::Set();
	while (true)
	{
//		if (GPIOA::ODR::ODR5::Get())
//		{
//			GPIOA::ODR::ODR5::Low::Set();
//		}
//		else
//		{
//			GPIOA::ODR::ODR5::High::Set();
//		}

//		Pins<LedPin>::Toggle();

		PinsPack<LedPin>::Toggle();

//		HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
		HAL_Delay(500);
	}
}
