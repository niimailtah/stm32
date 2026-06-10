/**
  ******************************************************************************
  * @file    oled.c
  * @brief   This file provides LCD driver.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "oled.h"
#include "main.h"

// Hardware reset
void OLED_Reset()
{
	HAL_GPIO_WritePin(OLED_RST_GPIO_Port, OLED_RST_Pin, GPIO_PIN_RESET);
	HAL_Delay(100);
	HAL_GPIO_WritePin(OLED_RST_GPIO_Port, OLED_RST_Pin, GPIO_PIN_SET);
	HAL_Delay(100);

	return;
}

// Common register initialization
void OLED_InitReg()
{
//	    SendCommandByte(0xAE);//--turn off oled panel
//
//	    SendCommandByte(0x02);//---set low column address
//	    SendCommandByte(0x10);//---set high column address
//
//	    SendCommandByte(0x40);//--set start line address  Set Mapping RAM Display Start Line (0x00~0x3F)
//	    SendCommandByte(0x81);//--set contrast control register
//	    SendCommandByte(0xA0);//--Set SEG/Column Mapping a0/a1
//	    SendCommandByte(0xC0);//Set COM/Row Scan Direction
//	    SendCommandByte(0xA6);//--set normal display a6/a7
//	    SendCommandByte(0xA8);//--set multiplex ratio(1 to 64)
//	    SendCommandByte(0x3F);//--1/64 duty
//	    SendCommandByte(0xD3);//-set display offset    Shift Mapping RAM Counter (0x00~0x3F)
//	    SendCommandByte(0x00);//-not offset
//	    SendCommandByte(0xD5);//--set display clock divide ratio/oscillator frequency
//	    SendCommandByte(0x80);//--set divide ratio, Set Clock as 100 Frames/Sec
//	    SendCommandByte(0xD9);//--set pre-charge period
//	    SendCommandByte(0xF1);//Set Pre-Charge as 15 Clocks & Discharge as 1 Clock
//	    SendCommandByte(0xDA);//--set com pins hardware configuration
//	    SendCommandByte(0x12);
//	    SendCommandByte(0xDB);//--set vcomh
//	    SendCommandByte(0x40);//Set VCOM Deselect Level
//	    SendCommandByte(0x20);//-Set Page Addressing Mode (0x00/0x01/0x02)
//	    SendCommandByte(0x02);//
//	    SendCommandByte(0xA4);// Disable Entire Display On (0xa4/0xa5)
//	    SendCommandByte(0xA6);// Disable Reverse Display On (0xa6/a7)

		SendCommandByte(0xAE);    // set display off

		SendCommandByte(0x02);	// set lower column address
		SendCommandByte(0x10);	// set higher column address

		SendCommandByte(0x40);	// set display start line

		SendCommandByte(0xB0);	// set page address

		SendCommandByte(0xad);	//  Set Charge Pump
		SendDataByte(0x8B);

		SendCommandByte(0xc8);	// Com scan direction

		SendCommandByte(0xDA);	// Set COM pins
		SendDataByte(0x12);

		SendCommandByte(0x81);	// contract control
		SendDataByte(0xBF);     // 128

		SendCommandByte(0x32);	// 0X30---0X33 set VPP 8V

		SendCommandByte(0xA6);	// normal (0xA6) / reverse (0xA7)

	return;
}

void OLED_Init()
{
	OLED_Reset();

	OLED_InitReg();
	HAL_Delay(100); // (??? ms Delay Recommended)

	SendCommandByte(0xAF);     // set display on
	HAL_Delay(100); // (100ms Delay Recommended)

	return;
}


/*****END OF FILE****/
