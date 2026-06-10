/*
 * UsbFsCdc.h
 *
 * Базовый класс для работы с USB CDC на STM32
 *
 * Обработка прерываний и организация обмена по USB
 *
 *
 *  Created on: Jul 30, 2023
 *      Author: dedov
 */

#ifndef MY_SRC_USBFSCDC_H_
#define MY_SRC_USBFSCDC_H_

#include "main.h"

//typedef void (*MyFuncPtrType)() ;

class UsbFsCdcClass
{
public:
	UsbFsCdcClass() {}
	~UsbFsCdcClass() {}
	void Start();
	static void receive_IRQ(uint8_t *Buf, uint32_t Len);

	typedef void (*EventChangeSpeed_type)(uint32_t speed);
	static EventChangeSpeed_type pEventChangeSpeed;

	static void ChangeSpeed(uint32_t speed);
	static int getchar(void);
	static void putchar(uint8_t dataByte);
	static void SendData(void);

protected:
	typedef void (*EventUsbDataReceived_type)();
	static EventUsbDataReceived_type pEventUsbDataReceived;

private:
	// Максимальное значение размера буфера дрвйвера USB
	static const uint32_t _usb_maxInpOut_size;
	// Размеры нашего буфера
	static const uint32_t _usb_buf_size;
	static uint8_t _inp_buf[];
	static uint8_t _out_buf[];

	static uint32_t	_inp_index, _inp_counter;
	static uint32_t	_out_index, _out_counter;
};

#endif /* MY_SRC_USBFSCDC_H_ */
