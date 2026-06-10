/*
 * UsbFsCdc.cpp
 *
 * Базовый класс для работы с USB CDC на STM32
 *
 *  Created on: Jul 30, 2023
 *      Author: dedov
 */
#include "main.h"
//#include "usbd_def.h"
#include "usbd_cdc_if.h"
#include "UsbFsCdc.h"


/*****************************************************************
 * Внешние функции
 *****************************************************************/

/*****************************************************************
 * Внешние данные
 *****************************************************************/

///*****************************************************************
// * обработчик прерывания от USB по приходу новых данных
// *****************************************************************/
extern "C" void CDC_Receive_IRQ(uint8_t *Buf, uint32_t Len)
{
	// Переносим принятые данные в свой буфер
	if (Len == 0)
	{
		return;
	}

	UsbFsCdcClass::receive_IRQ(Buf, Len);
}


///*****************************************************************
// * обработчик прерывания от USB по Изменению скорости
// *****************************************************************/

/*******************************************************************************/
/* Line Coding Structure                                                       */
/*-----------------------------------------------------------------------------*/
/* Offset | Field       | Size | Value  | Description                          */
/* 0      | dwDTERate   |   4  | Number |Data terminal rate, in bits per second*/
/* 4      | bCharFormat |   1  | Number | Stop bits                            */
/*                                        0 - 1 Stop bit                       */
/*                                        1 - 1.5 Stop bits                    */
/*                                        2 - 2 Stop bits                      */
/* 5      | bParityType |  1   | Number | Parity                               */
/*                                        0 - None                             */
/*                                        1 - Odd                              */
/*                                        2 - Even                             */
/*                                        3 - Mark                             */
/*                                        4 - Space                            */
/* 6      | bDataBits  |   1   | Number Data bits (5, 6, 7, 8 or 16).          */
/*******************************************************************************/

extern "C" void ChangePortSpeed(uint8_t* pbuf, uint16_t length)
{
	uint32_t speed = pbuf[3]; speed <<= 8;
	speed |= pbuf[2]; speed <<= 8;
	speed |= pbuf[1]; speed <<= 8;
	speed |= pbuf[0];

	UsbFsCdcClass::ChangeSpeed(speed);
	//	uint8_t stopBits = pbuf[4];
	//	uint8_t parityBits = pbuf[5];
	//	uint8_t dataBits = pbuf[6];
}

/*****************************************************************
 * Класс UsbFsCdcClass
 *****************************************************************/

UsbFsCdcClass::EventUsbDataReceived_type UsbFsCdcClass::pEventUsbDataReceived = 0;
UsbFsCdcClass::EventChangeSpeed_type UsbFsCdcClass::pEventChangeSpeed = 0;

void UsbFsCdcClass::ChangeSpeed(uint32_t speed)
{
	if (pEventChangeSpeed != 0)
	{
		pEventChangeSpeed( speed);
	}
}

//
void UsbFsCdcClass::Start()
{
}

void UsbFsCdcClass::receive_IRQ(uint8_t *Buf, uint32_t Len)
{
	// Копируем Данные в наш буфер и если нет передачи, то запускаем передачу
	if (_inp_counter >= _usb_buf_size)
	{
		return; // Буфер полон
	}
	uint32_t dataLen = Len;
	// Отбрасываем данные, которые не влезут в буфер приема
	if (dataLen > _usb_buf_size-_inp_counter)
	{
		dataLen = _usb_buf_size-_inp_counter;
	}

	__disable_irq();
	// В прерывании может измениться _inp_index или _inp_counter
	// это приведет к непредсказыем значения, поэтому __disable_irq()
	uint32_t index_wr = _inp_index + _inp_counter;
	__enable_irq();

	for (uint32_t i = 0; i < dataLen; ++i)
	{
		if (index_wr >= _usb_buf_size)
		{
			index_wr -= _usb_buf_size;
		}

		_inp_buf[index_wr] = *Buf++;
		index_wr++;

		__disable_irq();
		_inp_counter++;
		if(_inp_counter >= _usb_buf_size)
		{
			_inp_counter -= _usb_buf_size;
		}
		__enable_irq();
	}

	if (pEventUsbDataReceived != 0)
	{
		pEventUsbDataReceived();
	}
}

// Размер буферов приема и передачи USB_DEVICE равны по 1024 байт (это
//		максимально возможное значение стандартного драйвера
//
const uint32_t UsbFsCdcClass::_usb_maxInpOut_size { 1024 };
// Размеры нашего буфера. Желательно иметь запас, но делать его слишком большим
//		смысла нет.
const uint32_t UsbFsCdcClass::_usb_buf_size { _usb_maxInpOut_size*2 };

uint8_t UsbFsCdcClass::_inp_buf[_usb_buf_size];
uint8_t UsbFsCdcClass::_out_buf[_usb_buf_size];

uint32_t	UsbFsCdcClass::_inp_index   { 0 };
uint32_t	UsbFsCdcClass::_inp_counter { 0 };
uint32_t	UsbFsCdcClass::_out_index   { 0 };
uint32_t	UsbFsCdcClass::_out_counter { 0 };


///-----------------------------------------
// Функции не рабочие,
// 					 Переделать !!!!!
////---------------------------------------
int UsbFsCdcClass::getchar(void)
{
	int result;
	//int loc_index;
	__disable_irq();
	if (_inp_counter <= 0)
	{
		__enable_irq();
		return -1;	// новых байтов не получено
	}

	result = _inp_buf[_inp_index];

	//loc_index = _inp_index;// - _inp_counter;
	_inp_counter--;
	_inp_index++;
	if (_inp_index >= _usb_buf_size)
	{
		_inp_index -= _usb_buf_size;
	}
//	if (loc_index < 0)
//	{
//		loc_index += _usb_buf_size;
//	}
//	result = _inp_buf[loc_index];
//	if (_inp_index > 0)
//	{
//		result = _inp_buf[_inp_index - 1];
//	}
//	else
//	{
//		result = _inp_buf[_uartBufMaxSize - 1];
//	}
	__enable_irq();

	return result;
}

void UsbFsCdcClass::putchar(uint8_t dataByte)
{
	// тут только копить в буфер, передача по синхронизации USB
	if (_out_counter >= _usb_buf_size)
	{
		return; // буфер полон
	}

	_out_buf[_out_index] = dataByte;

	__disable_irq();
	_out_index++; _out_counter++;
	if (_out_index >= _usb_buf_size)
	{
		_out_index = 0;
	}
	__enable_irq();
}

//uint8_t CDC_Transmit_FS(uint8_t* Buf, uint16_t Len);
//uint8_t CDC_Transmit_FS( unsigned char *Buf, uint16_t Len);

void UsbFsCdcClass::SendData( void)
{
	uint32_t sendCounter;
	int32_t sendIndex;
	uint8_t result;

	if (_out_counter <= 0)
	{
		return;
	}

	__disable_irq();
	sendIndex = _out_index - _out_counter;
	if (sendIndex < 0)
	{
		sendIndex += _usb_buf_size;
		sendCounter = _usb_buf_size-sendIndex;
	}
	else
	{
		sendCounter = _out_counter;
	}
	__enable_irq();

//	if( _out_index + _out_counter <= _usb_buf_size )
//	{ 	// Оправляем все.
//		sendCounter = _out_counter;
//	}
//	else
//	{	// Делим на две части
//		// отправляем до конца буфера
//		sendCounter = _usb_buf_size - _out_index;
//	}
	//result = CDC_Transmit_FS((uint8_t*)(&_out_buf[_out_index]), (uint16_t)sendCounter);
	result = CDC_Transmit_FS(&_out_buf[sendIndex], (uint16_t)sendCounter);
	if (result == USBD_OK)
	{
		__disable_irq();
			//_out_index += sendCounter;
//			if (_out_index >= _usb_buf_size)
//			{
//				_out_index = 0;
//			}

		_out_counter -= sendCounter;
		__enable_irq();
	}
}
