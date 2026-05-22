/** @file cppmain.cpp
 *
 * @author niimailtah
 * @date 2026-02-12
 */

#include "cppmain.h"


extern UART_HandleTypeDef huart2;

int some_variable { 0 };


void foo(int input)
{
}


void cppMain()
{
	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
	while (true)
	{
		HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
		HAL_Delay(500);
	}
}
