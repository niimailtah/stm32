/**
 * @file:      app.cpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#include <cstdio>
#include "app.hpp"
#include "DHT.h"

// Создание объекта дачика DHT11, подключенного к PA8, подтяжка линии данных выключена
static DHT_sensor dht = {GPIOA, GPIO_PIN_8, DHT11, GPIO_NOPULL};

void App::Init()
{
	return;
}

void App::Loop()
{
	while (true)
	{
	    // Получение данных с датчика
	    DHT_data d = DHT_getData(&dht);
	    // Печать данных
	    printf("\r\nTemp %d°C, Hum %d%%", (uint8_t)d.temp, (uint8_t)d.hum);
	    HAL_Delay(100);
	}

	return;
}

void App::Run()
{
	Init();
	Loop();

	return;
}
