/**
 * @file:      shell.hpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#include "shell.hpp"
#include "usart.h"
#include <string.h>
#include <stdio.h>


Shell::Shell() : m_huart{&huart2}
{}

void Shell::Init()
{
	HAL_UART_Receive_IT(m_huart, (uint8_t*)&m_uartBuffer[m_uartIndex], 1);
	uint8_t pData[] = {"Hello from \x1b[32;1mSTM32\x1b[0m!\r\n"};
	sendResponse((char*)pData);
}

void Shell::Process()
{
	if (m_commandReceived)
	{
		m_uartBuffer[m_uartIndex] = '\0';  // Null-terminate the received command
		handleCommand(static_cast<char *>(m_uartBuffer));
		m_uartIndex = 0;  // Reset index for the next command
		m_commandReceived = false;
		HAL_UART_Receive_IT(m_huart, (uint8_t*)&m_uartBuffer[m_uartIndex], 1);  // Restart UART reception
	}
}

void Shell::doKey()
{
    if (m_uartBuffer[m_uartIndex] == '\r')  // Command termination character
    {
    	HAL_UART_Transmit(m_huart, (uint8_t*)&m_uartBuffer[m_uartIndex], 1, 1);
        m_commandReceived = true;
    }
    else
    {
    	HAL_UART_Transmit(m_huart, (uint8_t*)&m_uartBuffer[m_uartIndex], 1, 1);
        m_uartIndex++;
        if (m_uartIndex < UART_BUFFER_SIZE)  // Prevent buffer overflow
        {
            HAL_UART_Receive_IT(m_huart, (uint8_t*)&m_uartBuffer[m_uartIndex], 1);
        }
        else
        {
            m_uartIndex = 0;  // Reset if overflow
        }
    }
}

void Shell::sendResponse(char *response)
{
	HAL_UART_Transmit(m_huart, (uint8_t*)response, strlen(response), HAL_MAX_DELAY);
}

void Shell::handleCommand(char *cmd)
{
    char command[20];
    sscanf(cmd, "%s", command);  // Extract command from the input string

    if (strcmp(command, "led1") == 0)
    {
        HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
        sendResponse((char*)"LD2 Off\r\n");
    }
    else if (strcmp(command, "led2") == 0)
    {
    	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET);
    	sendResponse((char*)"LD2 On\r\n");
    }
    else if (strcmp(command, "clear") == 0)
    {
    	sendResponse((char*)"\033[H\033[J");
    }
    else
    {
    	sendResponse((char*)"Unknown command\r\n");
    }
}
