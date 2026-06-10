/*
 * Timers.cpp
 *
 *  Created on: Aug 9, 2023
 *      Author: dedov
 */

#include "main.h"
#include "Timer.h"

//#ifdef STM32G4 // Настройка таймеров для STM32G474
//#ifdef STM32F4 // Настройка таймеров для STM32F411, STM32F401
//#define MAX_TIMER_NUMBER	20

//int MaxTimerNumber = MAX_TIMER_NUMBER;
//#define  MaxTimerNumber  MAX_TIMER_NUMBER;
//uint32_t MCU_CurrentFreqMHz = 84U;
uint32_t MCU_CurrentFreqMHz{100U};// = 84U;

Timer Timers[MAX_TIMER_NUMBER] =
{
//		Timer(0x40010000, 84, false, true),	// 1 + enc0
//		Timer(0x40000000, 84, true,  true),	// 2 + time
//		Timer(0x40000400, 84, false, true),	// 3 + steps
//		Timer(0x40000800, 84, false, true),	// 4 + sync1ms
//		Timer(0x40000c00, 84, true,  true),	// 5 + sync Collection
//		Timer(0x40001000, 84, false, false),	// 6 - нет в этом чипе
//		Timer(0x40001400, 84, false, false),	// 7 - нет в этом чипе
//		Timer(0x40010400, 84, false, false),	// 8 - нет в этом чипе
//		Timer(0x40014000, 84, false, true),	// 9 + e_steps
//		Timer(0x40014400, 84, false, true),	// 10 + PWM DEBUG
//		Timer(0x40014800, 84, false, true),	// 11 + PWM location
		Timer(TIM1_BASE, MCU_CurrentFreqMHz, false, true),  // 1
		Timer(TIM2_BASE, MCU_CurrentFreqMHz, true,  true),  // 2
		Timer(TIM3_BASE, MCU_CurrentFreqMHz, false, true),  // 3
		Timer(TIM4_BASE, MCU_CurrentFreqMHz, false, true),  // 4
		Timer(TIM5_BASE, MCU_CurrentFreqMHz, true,  true),  // 5
		Timer(0, MCU_CurrentFreqMHz, false, false),   // 6 - нет в этом чипе
		Timer(0, MCU_CurrentFreqMHz, false, false),   // 7 - нет в этом чипе
		Timer(0, MCU_CurrentFreqMHz, false, false),   // 8 - нет в этом чипе
		Timer(TIM9_BASE, MCU_CurrentFreqMHz, false, true),  // 9
		Timer(TIM10_BASE, MCU_CurrentFreqMHz, false, true), // 10
		Timer(TIM11_BASE, MCU_CurrentFreqMHz, false, true), // 11
		Timer(0, MCU_CurrentFreqMHz, false, false),   // 12 - нет в этом чипе
		Timer(0, MCU_CurrentFreqMHz, false, false),   // 13 - нет в этом чипе
		Timer(0, MCU_CurrentFreqMHz, false, false),   // 14 - нет в этом чипе
		Timer(0, MCU_CurrentFreqMHz, false, false),   // 15 - нет в этом чипе
		Timer(0, MCU_CurrentFreqMHz, false, false),   // 16 - нет в этом чипе
		Timer(0, MCU_CurrentFreqMHz, false, false),   // 17 - нет в этом чипе
		Timer(0, MCU_CurrentFreqMHz, false, false),   // 18 - нет в этом чипе
		Timer(0, MCU_CurrentFreqMHz, false, false),   // 19 - нет в этом чипе
		Timer(0, MCU_CurrentFreqMHz, false, false),   // 20 - нет в этом чипе
};
//#endif
#undef MAX_TIMER_NUMBER

std::map<uint8_t, Timer> TimerMap
{
	{1U,  {TIM1_BASE,  MCU_CurrentFreqMHz, false, true}},
	{2U,  {TIM2_BASE,  MCU_CurrentFreqMHz, true,  true}},
	{3U,  {TIM3_BASE,  MCU_CurrentFreqMHz, false, true}},
	{4U,  {TIM4_BASE,  MCU_CurrentFreqMHz, false, true}},
	{5U,  {TIM5_BASE,  MCU_CurrentFreqMHz, true,  true}},
	{9U,  {TIM9_BASE,  MCU_CurrentFreqMHz, false, true}},
	{10U, {TIM10_BASE, MCU_CurrentFreqMHz, false, true}},
	{11U, {TIM11_BASE, MCU_CurrentFreqMHz, false, true}},
};
