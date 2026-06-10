/*
 * Delays.cpp
 *
 *  Created on: Aug 9, 2023
 *      Author: dedov
 */

#include "Delays.h"
#include "stm32f411_Timers.h"
#include "timer.h"

sTimer_t *Delays::_timerAdress { 0 };
uint32_t Delays::_frqInMHz { 0 };
uint32_t *Delays::pCounter { 0 };


Delays::Delays()
{
}

void Delays::config(int timerNumber)
{
	Timer DelayTimer { TimerMap.at(timerNumber) };
	if (timerNumber < 1 || timerNumber > Timer::MaxTimerNumber )
	{
		StopOnError((char*)"Delays: Конструктор - неправильное значение номера таймера");
	}
	if (!DelayTimer.IsEnabled())
	{
		StopOnError((char*)"Delays: Конструктор - Таймер недоступен");
	}
	DelayTimer.Disable();	// Запрещаем использовать другим

	if (!DelayTimer.Is32bit())
	{
		StopOnError((char*)"Delays: Конструктор - Таймер должен быть 32 битным");
	}
	//_is32bit = Timers[tim].Is32bit();

	_timerAdress = (sTimer_t*)DelayTimer.GetAddress();
	_timerAdress->cr1 &= ~1;
	//	STM32_TIM2.CR1.CEN = 0; // Stop

	pCounter = (uint32_t*)&(_timerAdress->CNT);

	_frqInMHz = DelayTimer.GetFrqInMHz();

	_timerAdress->CNT = 0;		// сбрасываем счетчик

	_timerAdress->PSC = 0; // без деления
	//	//STM32_TIM2.PSC = TIM2_CLK/1000000;	// цикл таймера 1us
	//	STM32_TIM2.PSC = 0;//TIM2_CLK/1000000;	// цикл таймера 1/84us

	_timerAdress->cr1 |= 1;
	//	STM32_TIM2.CR1.CEN = 1;	// Start
}

void Delays::delay_us(uint32_t time_in_us)
{
	if (pCounter == 0)
	{
		StopOnError((char*)"Delays: Указатели не инициализированы");
	}

	// us уменьшаем на 1 (время вызова и дополнительных вычислений)
	// и переводим в тики таймера (умножаем на _frqInMHz)
	uint32_t timeInTicks { (--time_in_us)*_frqInMHz }; // Корректируем
	uint32_t startTime { *pCounter };

	if (time_in_us < 1)
	{
		return;
	}

	while (*pCounter - startTime < timeInTicks)
	{
	}
}

void Delays::ResetCounter()
{
	_timerAdress->CNT = 0;		// сбрасываем счетчик
}
