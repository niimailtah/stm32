/*
 * Delays.h
 *
 *  Created on: Aug 9, 2023
 *      Author: dedov
 */

#ifndef MY_SRC_DELAYS_H_
#define MY_SRC_DELAYS_H_

#include "main.h"
#include "stm32f411_Timers.h"


class Delays
{
public:
	//Delays(int timerNumber);
	Delays();
	~Delays()
	{
	}

	static void delay_us(uint32_t time_in_us);

	static void config(int timerNumber);
	static void ResetCounter();

	static inline uint32_t GetCounterValue()
	{
		return *pCounter;
	}
	static inline uint32_t GetFrqInMHz()
	{
		return _frqInMHz;
	}
	static inline uint32_t GetWorkTime(uint32_t startTime)
	{
		return *pCounter - startTime;
	}
	static inline uint32_t GetWorkTimeIn_us(uint32_t startTime)
	{
		return (*pCounter - startTime)/_frqInMHz;
	}

private:
	static sTimer_t *_timerAdress;
	static uint32_t _frqInMHz;
	static uint32_t	*pCounter;
	//static bool	_is32bit;
};

#endif /* MY_SRC_DELAYS_H_ */
