/**
  ******************************************************************************
  * @file    oled.c
  * @brief   This file provides LCD driver.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "oled.h"
#include "main.h"

/**
  * @brief Hardware reset
  */
void OLED_Reset()
{
	HAL_GPIO_WritePin(OLED_RST_GPIO_Port, OLED_RST_Pin, GPIO_PIN_RESET);
	HAL_Delay(10);
	HAL_GPIO_WritePin(OLED_RST_GPIO_Port, OLED_RST_Pin, GPIO_PIN_SET);
	HAL_Delay(10);
	HAL_GPIO_WritePin(OLED_RST_GPIO_Port, OLED_RST_Pin, GPIO_PIN_RESET);
	HAL_Delay(100);

	return;
}

/**
  * @brief Common register initialization
  */
void OLED_InitReg()
{
	HAL_GPIO_WritePin(OLED_CS_GPIO_Port, OLED_CS_Pin, GPIO_PIN_SET);
	OLED_Reset();
#ifndef U8G2
	SendCommandByte(0xAE);    // set display off

	SendCommandByte(0x02);	// set lower column address
	SendCommandByte(0x10);	// set higher column address
	SendCommandByte(0xB0);	// set page address
	SendCommandByte(0x40);	// set display start line

	SendCommandByte(0x81);	// contract control
	SendDataByte(0xBF);     // 128

//	send_command(ERMCH1115_IREF_REG, 0);
//	send_command(ERMCH1115_IREF_SET, 0);
//
//	send_command(ERMCH1115_SEG_SET_REMAP, 0);
//	send_command(ERMCH1115_SEG_SET_PADS, 0);
//	send_command(ERMCH1115_ENTIRE_DISPLAY_ON, 0);
//	send_command(ERMCH1115_DISPLAY_NORMAL, 0);
//
//	send_command(ERMCH1115_MULTIPLEX_MODE_SET, 0);
//	send_command(ERMCH1115_MULTIPLEX_DATA_SET , 0);

	SendCommandByte(0xc0);	// Com scan direction

//	send_command(ERMCH1115_OFFSET_MODE_SET, 0);
//	send_command(ERMCH1115_OFFSET_DATA_SET, 0);
//
//	send_command(ERMCH1115_OSC_FREQ_MODE_SET, 0);
//	send_command(ERMCH1115_OSC_FREQ_DATA_SET, 0);
//
//	send_command(ERMCH1115_PRECHARGE_MODE_SET, 0);
//	send_command(ERMCH1115_PRECHARGE_DATA_SET, 0);
//
//	send_command(ERMCH1115_COM_LEVEL_MODE_SET, 0);
//	send_command(ERMCH1115_COM_LEVEL_DATA_SET, 0);
//
//	send_command(ERMCH1115_SET_PUMP_REG, ERMCH115_SET_PUMP_SET);

	SendCommandByte(0xad);	//  Set Charge Pump
	SendDataByte(0x8B);

	SendCommandByte(0xAF);     // set display on

	HAL_GPIO_WritePin(OLED_CS_GPIO_Port, OLED_CS_Pin, GPIO_PIN_RESET);
#endif  // U8G2

	return;
}

/**
  * @brief
  */
void OLED_Init()
{
	OLED_Reset();

	OLED_InitReg();
	HAL_Delay(100); // (??? ms Delay Recommended)

	return;
}

/*****END OF FILE****/
