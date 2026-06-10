/*
 * UsbDevice.cpp
 *
 *  Created on: Aug 4, 2023
 *      Author: dedov
 */
#include "main.h"
#include "UsbDevice.h"

//UsbDevice::UsbDevice() {
//
//}
//
//UsbDevice::~UsbDevice() {
//}
//

uint8_t	UsbDevice::_rx_buf[_rxBufferSize];
int16_t	UsbDevice::_rx_wr_index { 0 };
int16_t	UsbDevice::_rx_rd_index { 0 };
int16_t	UsbDevice::_rx_counter  { 0 };
int UsbDevice::LenCmd { 0 };
int UsbDevice::_indexGetCmd { 0 };

unsigned char	UsbDevice::_USB_inpBuf[_rxBufferSize]; // буфер приема команд
unsigned char	UsbDevice::_USB_cmdBuf[_rxBufferSize/2]; // буфер команды

uint8_t	UsbDevice::_outBuffer[_outBufferMaxLength + 1];
//unsigned char	UsbDevice::_outBuffer[_outBufferMaxLength + 1];
//unsigned char	UsbDevice::_outBuffer[2000 + 1];
int16_t  UsbDevice::_bufferDataLength;
uint8_t	*UsbDevice::_pBuffer { nullptr };
uint8_t	UsbDevice::_checkSum;
int16_t  UsbDevice::_bytes;
bool UsbDevice::_oubBufBusy { false };


uint8_t *UsbDevice::GetCmdFromUSB_CDC(void)
{
	static int index;
	uint8_t 	newByte;
	int16_t		newInt;
	int i;

	while (true)
	{
		newInt = UsbFsCdcClass::getchar();
		if (newInt < 0) // нет байтов для чтения
		{
			return 0; // выходим
		}

		newByte = newInt;

		if (index == 0)
		{ // ждем начало пакета
			if ( newByte != ':' )
			{
				index=0; continue; //			{ index=0; indData=0; checkSum=0; continue; }
			}
			else
			{
				index++; continue;
			}
		}
		else
		{
			_USB_inpBuf[index - 1] = newByte;
			if (newByte == '\n')  // конец пакета
			{
				break;
			}
			else
			{
				index++;
				if (newInt < '0') // ошибочный символ
				{
					index = 0; continue; // сбрасываем пакет и переходим к следующему символу в буфере
				}
				if (newInt < 'A' &&  newInt > '9') // ошибочный символ
				{
					index = 0; continue; // сбрасываем пакет и переходим к следующему символу в буфере
				}
				if (newInt < 'a' &&  newInt > 'F') // ошибочный символ
				{
					index = 0; continue; // сбрасываем пакет и переходим к следующему символу в буфере
				}
				if (newInt > 'f') // ошибочный символ
				{
					index = 0; continue; // сбрасываем пакет и переходим к следующему символу в буфере
				}
				if (index >= _usbCmdBufSize) // ошибка пакет слишком длинный
				{
					index = 0; continue; // сбрасываем пакет
				}
				continue;
			}
		}
	}

	if (newByte != '\n')
	{
		return 0; // передача закончилась, но пакет незавершен
	}

	// перекодировка пакета
	for (i = 0; i < index; i += 2)
	{
		_USB_cmdBuf[i>>1] = (CharToBin(_USB_inpBuf[i])<<4) + CharToBin(_USB_inpBuf[i + 1]);
	}
	LenCmd = index>>1;
	index = 0;
	// проверка пакета

	unsigned char cs = 0;
	for (i = 0; i < LenCmd - 1; ++i)
	{
		cs += _USB_cmdBuf[i];
	}
	if (cs == _USB_cmdBuf[LenCmd - 1])
	{
		return _USB_cmdBuf;
	}
	else
	{
		return 0;
	}
}
