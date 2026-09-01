/**
 * @file:      app.cpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#include "app.hpp"
#include "ili9341.h"
#include "demos.h"


void App::Init()
{
	LCD_ILI9341_init();

	return;
}

void App::Loop()
{
	while (true)
	{
		start_demos();
	}

	return;
}

void App::Run()
{
	Init();
	Loop();

	return;
}
