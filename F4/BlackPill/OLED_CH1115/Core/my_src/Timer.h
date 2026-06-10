/*
 * Timer.h
 *
 *  Created on: Aug 9, 2023
 *      Author: dedov
 */

#ifndef MY_SRC_TIMER_H_
#define MY_SRC_TIMER_H_

#include <map>
#include "main.h"

//#ifdef STM32G4 // Настройка таймеров для STM32G474
#define	MAX_TIMER_NUMBER	20
//#define	MaxTimerNumber		MAX_TIMER_NUMBER

class Timer
{
public:
	//const int MAX_TIMER_STM32G474		 = 20;
	static const int MaxTimerNumber	 = MAX_TIMER_NUMBER; //MAX_TIMER_STM32G474
	Timer() = default;
	Timer(uint32_t address,
			uint32_t frqInMHz,
			bool is32bit,
			bool enabled=false) :
					_Address{address},
					_Is32bit{is32bit},
					_FrqInMHz{frqInMHz},
					_Enabled{enabled}
	{ }

	~Timer() { }

	inline uint32_t GetAddress() { return _Address; }
	inline uint32_t GetFrqInMHz() { return _FrqInMHz; }
	inline uint32_t GetFrqInHz() { return _FrqInMHz*1000000; }
	inline bool Is32bit() { return _Is32bit; }
	inline bool IsEnabled() { return _Enabled; }

	inline void Disable() { _Enabled = false; }
	//inline void Enable() { _Enabled = true; }


//	uint32_t	Address=0;
//	bool		Is32bit=false;
//	uint32_t 	FrqInMHz=0;
//	bool		Enabled =false;

protected:

private:
	uint32_t	_Address { 0 };
	bool		_Is32bit { false };
	uint32_t 	_FrqInMHz{ 0 };
	bool		_Enabled { false }; // у некоторых МЦУ в наличии не все таймеры
								// отсутствующие - запрещаем.
								// Также можно запретить, для дальнейшего
								// использования (во измежание ошибок.

};

extern Timer Timers[]; // TODO: Разобраться с определением таймеров
extern std::map<uint8_t, Timer> TimerMap;

#endif /* MY_SRC_TIMER_H_ */
