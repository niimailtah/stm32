/**
  * @file    main_ButtonOnOff.cpp
  *
  *  Created on: 21 мая 2026 г.
  *      Author: Alexey Polurotov
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Function prototypes -------------------------------------------------------*/
void init();
void loop();

/* ===========================================================================*/
extern "C" void main_ButtonOnOff(void)
{
	init();
	loop();

	return;
}

void init()
{
	return;
}

void loop()
{
	while (true)
	{
		__NOP();
	}

	return;
}
