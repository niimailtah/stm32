/*
 * Errors.cpp
 *
 *  Created on: Jul 23, 2023
 *      Author: dedov
 */

#include "main.h"

// остановка по "аварии" для удобства в параметрах симольная строка с описанием ошибки
extern "C" void StopOnError(char *errorString)
{
	__disable_irq();

	// Бесконечный цикл "аварии"
	while (true) { }
}
