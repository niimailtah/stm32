/**
 * @file:      shell.hpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#pragma once
#include "usart.h"

constexpr uint8_t UART_BUFFER_SIZE{100};

class Shell
{
private:
	UART_HandleTypeDef *m_huart;
	char m_uartBuffer[UART_BUFFER_SIZE]{0};
	volatile uint8_t m_uartIndex{0};
	volatile bool m_commandReceived{false};

public:
	Shell();
	virtual ~Shell() = default;

	void Init();
	void Process();
	void doKey();
	void sendResponse(char *response);
	void handleCommand(char *cmd);
};
