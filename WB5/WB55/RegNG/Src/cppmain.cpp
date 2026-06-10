/** @file cppmain.cpp
 *
 * @author niimailtah
 * @date 2026-02-18
 */

#include "cppmain.h"
#include "stm32wb55xx.h"


#define GPIOBEN       (1U<<1)
#define PIN5          (1U<<5)
#define LED_PIN       PIN5


// ---------------------------------------------------------------------------
namespace case1 {
void reg()
{
	RCC->AHB2ENR |=  GPIOBEN;
	GPIOB->MODER |= (1U<<10);
	GPIOB->MODER &= ~(1U<<11);

	while (true)
	{
		GPIOB->ODR ^= LED_PIN;
		for (int i = 0; i < 200000; ++i)
		{
			__NOP();
		}
	}
}
} // namespace case1

// ---------------------------------------------------------------------------
namespace case3 {
template<uint32_t addr, uint32_t pinNum>
struct Pin {
	using Registers = GPIO_TypeDef;
	static void Toggle()
	{
		// располагаем структуру по адресу addr
        Registers *GpioPort { reinterpret_cast<Registers*>(addr) };
        GpioPort->ODR ^= (1 << pinNum);
	}
};

void reg()
{
	RCC->AHB2ENR |=  GPIOBEN;
	GPIOB->MODER |= (1U<<10);
	GPIOB->MODER &= ~(1U<<11);

	using Led1 = Pin<GPIOB_BASE, 5>;
	while (true)
	{
		Led1::Toggle();
		for (int i = 0; i < 200000; ++i)
		{
			__NOP();
		}
	}
}
} // namespace case3


// ===========================================================================
using namespace case3;

void cppMain()
{
	reg();
}
