/**
 * @file:      app.cpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#include <cstdio>

#include "app.hpp"
#include "main.h"
#include "i2c.h"
#include "usart.h"

#include "lis3dh.h"

uint8_t Buffer[25] = {0};
uint8_t Space[] = " -- ";
uint8_t NewLine[] = "\r\n";
uint8_t StartMSG[] = "Starting I2C Scanning: \r\n";
uint8_t EndMSG[] = "\r\n ------ Done! ----- \r\n\r\n";
// Allocate a buffer for reading data from the sensor.
// Six bytes required to read XYZ data.
uint8_t xyz_buf[6] = { 0 };

// New instance of the lis3dh convenience object.
lis3dh_t lis3dh;

// lis3dh calls return this HAL status type.
HAL_StatusTypeDef status;

void scanTWI();

void App::Init()
{
	HAL_Delay(1000);
	HAL_GPIO_WritePin(SDO_GPIO_Port, SDO_Pin, GPIO_PIN_RESET);
	scanTWI();

	status = lis3dh_init(&lis3dh, &hi2c1, xyz_buf, 6);

	if (status != HAL_OK) {
	// Unable to communicate with device!
	}
	printf("lis3dh is Ok.\n\r");

	return;
}

void App::Loop()
{
	while (true)
	{
		if (lis3dh_xyz_available(&lis3dh))
		{
			status = lis3dh_get_xyz(&lis3dh);
			// You now have raw acceleration of gravity in lis3dh->x, y, and z.
			printf("x: %d, y: %d, z: %d\n\r", lis3dh.x, lis3dh.y, lis3dh.z);
		}
		HAL_Delay(500);
	}

	return;
}

void App::Run()
{
	Init();
	Loop();

	return;
}

void scanTWI()
{
  /*-[ I2C Bus Scanning ]-*/
  uint8_t i = 0, ret;
  uint16_t i2cAddress;
  uint16_t memAddress = 0x00;
  HAL_UART_Transmit(&huart2, StartMSG, sizeof(StartMSG), 10000);
  HAL_UART_Transmit(&huart2, Space, sizeof(Space), 10000);
  for (i = 1; i < 128; ++i)
  {
	if (i % 16 == 0)
	{
	  HAL_UART_Transmit(&huart2, NewLine, sizeof(NewLine), 10000);
	}
	ret = HAL_I2C_IsDeviceReady(&hi2c1, (uint16_t)(i<<1), 3, 5);
	if (ret != HAL_OK) /* No ACK Received At That Address */
	{
	  HAL_UART_Transmit(&huart2, Space, sizeof(Space), 10000);
	}
	else if(ret == HAL_OK)
	{
	  sprintf((char *)Buffer, "0x%X", i);
	  HAL_UART_Transmit(&huart2, Buffer, sizeof(Buffer), 10000);
	  if (i == 0x68 || i == 0x69) // MPU6050
	  {
		i2cAddress = i;
		memAddress = 0x00;
	  }
	  if (i == 0x53 || i == 0x1D) // ADXL345
	  {
		i2cAddress = i;
		memAddress = 0x00;
	  }
	  if (i == 0x18 || i == 0x19) // LIS3DH
	  {
		i2cAddress = i;
		memAddress = 0x0F;
	  }
	  if (i == 0x5C || i == 0x5D) // LPS22CH
	  {
		i2cAddress = i;
		memAddress = 0x0F;
	  }
	}
  }
  HAL_UART_Transmit(&huart2, EndMSG, sizeof(EndMSG), 10000);
  /*--[ Scanning Done ]--*/
  uint8_t chip_address;
  HAL_I2C_Mem_Read(&hi2c1, i2cAddress << 1, memAddress, 1, &chip_address, 1, 100);
  sprintf((char *)Buffer, "WHO_AM_I: 0x%X\r\n", chip_address);
  HAL_UART_Transmit(&huart2, Buffer, sizeof(Buffer), 10000);
}
