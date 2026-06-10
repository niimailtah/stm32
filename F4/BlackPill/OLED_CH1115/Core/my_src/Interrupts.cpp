/*
 * Interrupts.cpp
 *
 * Обработчики (векторы) прерываний используемых непосредственно классом Cmm
 *  Передают управление обработчикам в класс Cmm
 *
 *
 *  Внимание!!! Векторы от USB обрабатываются в другом классе.
 *  	тут только таймеры и по входу (probe)
 *
 *  Created on: Aug 10, 2023
 *      Author: dedov
 */
#include "main.h"

//extern "C" void CDC_Receive_IRQ(uint8_t *Buf, uint32_t Len)
//{
//	// Переносим принятые данные в свой буфер
//	if (Len == 0)
//		return;
//
//	UsbFsCdcClass::receive_IRQ(Buf, Len);
//}

typedef void (*Irq_type)();
typedef enum TimerIrq_type
{
	Up  = 0,
	All = 0,
	brk = 1,
	trg = 2,
	cc  = 3,
} TimerIrq_type;

Irq_type pIrq_Tim1brk { nullptr };
Irq_type pIrq_Tim1up  { nullptr };
Irq_type pIrq_Tim1trg { nullptr };
Irq_type pIrq_Tim1cc  { nullptr };
Irq_type pIrq_Tim2    { nullptr };
Irq_type pIrq_Tim3    { nullptr };
Irq_type pIrq_Tim4    { nullptr };
Irq_type pIrq_Tim5    { nullptr };
Irq_type pIrq_Tim6    { nullptr };
Irq_type pIrq_Tim7    { nullptr };
Irq_type pIrq_Tim8brk { nullptr };
Irq_type pIrq_Tim8up  { nullptr };
Irq_type pIrq_Tim8trg { nullptr };
Irq_type pIrq_Tim8cc  { nullptr };
Irq_type pIrq_Tim9    { nullptr };
Irq_type pIrq_Tim10   { nullptr };
Irq_type pIrq_Tim11   { nullptr };
Irq_type pIrq_Tim12   { nullptr };
Irq_type pIrq_Tim13   { nullptr };
Irq_type pIrq_Tim14   { nullptr };

Irq_type pIrq_Exti4  { nullptr };

Irq_type pIrq_i2c_ev { nullptr };
Irq_type pIrq_i2c_er { nullptr };

Irq_type pIrq_usart1 { nullptr };
Irq_type pIrq_usart2 { nullptr };


extern "C" __weak void TIM1_BRK_TIM9_IRQHandler(void)
{
	if (pIrq_Tim1brk != nullptr)
	{
		pIrq_Tim1brk();
	}
	if (pIrq_Tim9 != nullptr)
	{
		pIrq_Tim9();
	}
}

extern "C" __weak void TIM1_UP_TIM10_IRQHandler(void)
{
	if (pIrq_Tim1up != nullptr)
	{
		pIrq_Tim1up();
	}
	if (pIrq_Tim10 != nullptr)
	{
		pIrq_Tim10();
	}
}

extern "C" __weak void TIM1_TRG_COM_TIM11_IRQHandler(void)
{
	if (pIrq_Tim1trg != nullptr)
	{
		pIrq_Tim1trg();
	}
	if (pIrq_Tim11 != nullptr)
	{
		pIrq_Tim11();
	}
}

extern "C" __weak void TIM1_CC_IRQHandler(void)
{
	if (pIrq_Tim1cc != nullptr)
	{
		pIrq_Tim1cc();
	}
}

extern "C" __weak void TIM2_IRQHandler(void)
{
	if (pIrq_Tim2 != nullptr)
	{
		pIrq_Tim2();
	}
}

extern "C" __weak void TIM3_IRQHandler(void)
{
	if (pIrq_Tim3 != nullptr)
	{
		pIrq_Tim3();
	}
}

extern "C" __weak void TIM4_IRQHandler(void)
{
	if (pIrq_Tim4 != nullptr)
	{
		pIrq_Tim4();
	}
}

extern "C" __weak void TIM8_BRK_TIM12_IRQHandler(void)
{
	if (pIrq_Tim8brk != nullptr)
	{
		pIrq_Tim8brk();
	}
	if (pIrq_Tim12 != nullptr)
	{
		pIrq_Tim12();
	}
}

extern "C" __weak void TIM8_UP_TIM13_IRQHandler(void)
{
	if (pIrq_Tim8up != nullptr)
	{
		pIrq_Tim8up();
	}
	if (pIrq_Tim13 != nullptr)
	{
		pIrq_Tim13();
	}
}

extern "C" __weak void TIM8_TRG_COM_TIM14_IRQHandler(void)
{
	if (pIrq_Tim8trg != nullptr)
	{
		pIrq_Tim8trg();
	}
	if (pIrq_Tim14 != nullptr)
	{
		pIrq_Tim14();
	}
}

extern "C" __weak void TIM8_CC_IRQHandler(void)
{
	if (pIrq_Tim8cc != nullptr)
	{
		pIrq_Tim8cc();
	}
}

extern "C" __weak void TIM5_IRQHandler(void)
{
	if (pIrq_Tim5 != 0)
	{
		pIrq_Tim5();
	}
}

extern "C" __weak void TIM6_DAC_IRQHandler(void)
{
	// DAC не используем
//	if (pIrq_Dac != nullptr)
//	{
//		pIrq_Dac();
//	}
	if (pIrq_Tim6 != nullptr)
	{
		pIrq_Tim6();
	}
}

extern "C" __weak void TIM7_IRQHandler(void)
{
	if (pIrq_Tim7 != nullptr)
	{
		pIrq_Tim7();
	}
}


// -----------------------------------------------------------------------------
extern "C" __weak void EXTI4_IRQHandler(void)
{
	if (pIrq_Exti4 != nullptr)
	{
		pIrq_Exti4();
	}
}

extern "C" __weak void I2C1_EV_IRQHandler(void)
{
	if (pIrq_i2c_ev != nullptr)
	{
		pIrq_i2c_ev();
	}
}

extern "C" __weak void I2C1_ER_IRQHandler(void)
{
	if (pIrq_i2c_er != nullptr)
	{
		pIrq_i2c_er();
	}
}

extern "C" __weak void USART1_IRQHandler(void)
{
//	AbsEncoderX.Interrupt();
//	if (pIrq_usart1 != nullptr)
//	{
//		pIrq_usart1();
//	}
}

extern "C" __weak void USART2_IRQHandler(void)
{
//	AbsEncoderY.Interrupt();
//	if (pIrq_usart2 != nullptr)
//	{
//		pIrq_usart2();
//	}
}

IRQn_Type SelectTimerUpdIRQn(int timerNumber) // 1...20
{
	switch (timerNumber)
	{
		case 1:
#ifdef STM32G4
			return TIM1_UP_TIM16_IRQn;
#endif
#ifdef STM32F4
			return TIM1_UP_TIM10_IRQn;
#endif
			break;
		case 2:
			return TIM2_IRQn;
			break;
		case 3:
			return TIM3_IRQn;
			break;
		case 4:
			return TIM4_IRQn;
			break;
		case 5:
			return TIM5_IRQn;
			break;
//		case 6:
//			return TIM6_DAC_IRQn;
//			break;
//		case 7:
//			return TIM7_IRQn;
//			break;
//		case 8:
//			return TIM8_UP_TIM13_IRQn;
//			break;
		case 9:
#ifdef STM32F4
			return TIM1_BRK_TIM9_IRQn;
#endif
			break;
		case 10:
#ifdef STM32F4
			return TIM1_UP_TIM10_IRQn;
#endif
			break;
		case 11:
#ifdef STM32F4
			return TIM1_TRG_COM_TIM11_IRQn;
#endif
			break;
//		case 12:
//			return TIM8_BRK_TIM12_IRQn;
//			break;
//		case 13:
//			return TIM8_UP_TIM13_IRQn;
//			break;
//		case 14:
//			return TIM8_TRG_COM_TIM14_IRQn;
//			break;

	}
	StopOnError((char*)"Sync1ms: SelectTimerUdpIRQn - неправильное значение номера таймера");

	return UsageFault_IRQn;
}

IRQn_Type SelectTimerCcIRQn(int timerNumber) // 1...20
{
	switch (timerNumber)
	{
		case 1:
			return TIM1_CC_IRQn;
			break;
		case 2:
			return TIM2_IRQn;
			break;
		case 3:
			return TIM3_IRQn;
			break;
		case 4:
			return TIM4_IRQn;
			break;
		case 5:
			return TIM5_IRQn;
			break;
//		case 6:
//			return TIM6_DAC_IRQn;
//			break;
//		case 7:
//			return TIM7_IRQn;
//			break;
//		case 8:
//			return TIM8_CC_IRQn;
//			break;
		case 9:
#ifdef STM32F4
			return TIM1_BRK_TIM9_IRQn;
#endif
			break;
		case 10:
#ifdef STM32F4
			return TIM1_UP_TIM10_IRQn;
#endif
			break;
		case 11:
#ifdef STM32F4
			return TIM1_TRG_COM_TIM11_IRQn;
#endif
			break;
//		case 12:
//			return TIM8_BRK_TIM12_IRQn;
//			break;
//		case 13:
//			return TIM8_UP_TIM13_IRQn;
//			break;
//		case 14:
//			return TIM8_TRG_COM_TIM14_IRQn;
//			break;

	}
	StopOnError((char*)"Sync1ms: SelectTimerUdpIRQn - неправильное значение номера таймера");
	return UsageFault_IRQn;
}

void SetTimerCallback(int timerNumber, Irq_type callback, TimerIrq_type type=All)
{
	switch (timerNumber)
	{
		case 1:
			switch (type)
			{
				//case Up:
				case All:
					pIrq_Tim1up = callback;
					break;
				case brk:
					pIrq_Tim1brk = callback;
					break;
				case trg:
					pIrq_Tim1trg = callback;
					break;
				case cc:
					pIrq_Tim1cc = callback;
					break;
			}
			break;
		case 2:
			pIrq_Tim2 = callback;
			break;
		case 3:
			pIrq_Tim3 = callback;
			break;
		case 4:
			pIrq_Tim4 = callback;
			break;
		case 5:
			pIrq_Tim5 = callback;
			break;
//		case 6:
//			pIrq_Tim6 = callback;
//			break;
//		case 7:
//			pIrq_Tim7 = callback;
//			break;
//		case 8:
//				switch(type)
//				{
//					//case Up:
//					case All:
//						pIrq_Tim8up = callback;
//						break;
//					case brk:
//						pIrq_Tim8brk = callback;
//						break;
//					case trg:
//						pIrq_Tim8trg = callback;
//						break;
//					case cc:
//						pIrq_Tim8cc = callback;
//						break;
//				}
//			break;
		case 9:
			pIrq_Tim9 = callback;
			break;
		case 10:
			pIrq_Tim10 = callback;
			break;
		case 11:
			pIrq_Tim11 = callback;
			break;
//		case 12:
//			pIrq_Tim12 = callback;
//			break;
//		case 13:
//			pIrq_Tim13 = callback;
//			break;
//		case 14:
//			pIrq_Tim14 = callback;
//			break;
		default:
			break;
	}
}
