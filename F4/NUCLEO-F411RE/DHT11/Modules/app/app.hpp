/**
 * @file:      app.hpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#pragma once

class App
{
private:
	void Init();
	void Loop();
public:
	App() = default;
	virtual ~App() = default;

	void Run();
};
