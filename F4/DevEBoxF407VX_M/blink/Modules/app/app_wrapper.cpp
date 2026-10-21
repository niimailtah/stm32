/**
 * @file:      app_wrapper.cpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#include "app.hpp"

App app;

extern "C" void app_wrapper()
{
	app.Run();
}
