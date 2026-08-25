/**
 * @file:      app.cpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#include "app.hpp"
#include "shell.hpp"

Shell shell;

void App::Init()
{
	shell.Init();

	return;
}

void App::Loop()
{
	while (true)
	{
		shell.Process();
	}

	return;
}

void App::Run()
{
	Init();
	Loop();

	return;
}

extern "C" void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	shell.doKey();

	return;
}
