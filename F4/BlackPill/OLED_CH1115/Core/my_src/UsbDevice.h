/*
 * UsbDevice.h
 *
 * Класс устройства. Обрабатывает прием и передачу по USB
 * - Обработка команд идентификации, другие команды отпраляются генерируя
 * событие
 *
	Внимание!!!
		- Обработка команд UsbDevice::Commands()
		- Отправка ответа UsbDevice::SendData()
	Вынесены в основной цикл, что-бы обработка команд не блокировала (замедляя)
		обработку прерываний от USB.
 *
 */

#ifndef MY_SRC_USBDEVICE_H_
#define MY_SRC_USBDEVICE_H_

#include "main.h"
#include "UsbFsCdc.h"

/*****************************************************************
 * Внешние функции
 *****************************************************************/
// Останов по "серьезной" ошибке, Для упрощенного анализа проблем.
//void StopOnError(char *errorString);
// Формирование ответа с информацией о устройсте
void SendDeviceInfo(uint8_t  subCmd);


class UsbDevice: public UsbFsCdcClass
{
public:
	UsbDevice()
	{
		// Заполняем указатель на обработчик принятых от ПК данных
		 UsbFsCdcClass::pEventUsbDataReceived = EventUsbDataReceived;
	}
	~UsbDevice() { } //

	// 10.11.2023 - добавлен новый метод.
	inline static void ChangeCommandStatus(uint8_t newStatus)
	{
		_checkSum += newStatus; // начальное значение было 0, поэтому
								// Изменение статуса приведет к такому
								// изменению контрольной суммы

		// Не очень правильно так менять... подумать как улучшить
		// Статус имеет смещение в буфере равное 3 (1 байт ":" и два байта
		// - код группы
		_outBuffer[3] = byte_H(newStatus);
		_outBuffer[4] = byte_L(newStatus);

	}
//public:
	// Извлечение из байтового буфера 32-разрядного числа
	static int32_t	GetInt32FromCommand(uint8_t *data, int16_t offset)
	{
		union
		{
			int32_t	int_val;
			uint8_t char_val[4];
		} result;

		result.char_val[0] = data[3+offset]; // Такое копирование самое эффективное (по коду)
		result.char_val[1] = data[2+offset];
		result.char_val[2] = data[1+offset];
		result.char_val[3] = data[0+offset];

		return	result.int_val;
	}

	// Извлечение из байтового буфера 16-разрядного числа
	static int16_t	GetInt16FromCommand(uint8_t *data, int16_t offset)
	{
		union
		{
			int16_t	int_val;
			uint8_t char_val[4];
		} result;

		result.char_val[0] = data[1+offset];
		result.char_val[1] = data[0+offset];

		return	result.int_val;
	}

	// Добавление (с перекодировкой)в байтовый буфер 32-разрядного числа
	// используется в DeviceInfo.cpp для формирования строк.
	static uint8_t *uint32toHEX(uint32_t value, uint8_t *p)
	{
		*p++ =  byte_H( value>>24);
		*p++ =  byte_L( value>>24);
		*p++ =  byte_H( value>>16);
		*p++ =  byte_L( value>>16);
		*p++ =  byte_H( value>>8);
		*p++ =  byte_L( value>>8);
		*p++ =  byte_H( value);
		*p++ =  byte_L( value);
		return p;
	}

	// Заполнение буфера отправки USB
	// Добавление символа в буфер
	static void AddChar(uint8_t value)
	{
		if (!_oubBufBusy)
		{
			StopOnError((char*)"UsbConnection: AddChar - попытка писать в неоткрытый буфер");
		}
		if (_bytes >=  _outBufferMaxLength)
		{
			return;
		}
		*_pBuffer = value;
		_pBuffer++;
		_bufferDataLength++;
		_bytes++;
	}

	// Заполнение буфера отправки USB
	// Добавление байта в буфер (с перекодированием в символы)
	static void AddByte(uint8_t value)
	{
		_checkSum += value;
		AddChar(byte_H(value));
		AddChar(byte_L(value));
	}

	// Заполнение буфера отправки USB
	// Добавление int16 в буфер (с перекодированием в символы)
	static void AddInt16(uint16_t value)
	{
		AddByte((value>>8)&0xFF);
		AddByte(value&0xFF);
	}

	// Заполнение буфера отправки USB
	// Добавление int32 в буфер (с перекодированием в символы)
	static void AddInt32(uint32_t value)
	{
		AddByte((value>>24)&0xFF);
		AddByte((value>>16)&0xFF);
		AddByte((value>>8)&0xFF);
		AddByte(value&0xFF);
	}

	// Заполнение буфера отправки USB
	// Добавление строки в буфер
	static void AddString(uint8_t *pString)
	{
		while (*pString != 0 && _bufferDataLength < _outBufferMaxLength)
		{
			AddByte(*pString++);
		}
	}

	// получить размер буфера передачи
	static inline int32_t GetOutBufferSize(void)
	{
		return _outBufferMaxLength; // размер буфера в байтах
	}

	// очистка буфера передачи ответа.
	static void ClearOutBuf()
	{
		if (_oubBufBusy)
		{
			StopOnError((char*)"UsbConnection: Out_ClearBuf - буфер занят, передача не завершена ");
		}
		_oubBufBusy = true;
		_pBuffer = _outBuffer;
		*_pBuffer = ':'; _pBuffer++;
		_bufferDataLength = 1;
		_checkSum = 0;
		_bytes = 0;
	}

	// Название SendToUSB несовсем правильное, Теперь мы сразу данные не
	// передаем, только довершаем ответ в соответствии с протоколом. И передаем
	// в USB (putchar).
	// Меняю на ReadySendToUSB() - готово для отправки
	// Для отправки данных на ПК требуется вызвать UsbDevice::SendData()
	static void ReadySendToUSB()
	{
		uint8_t *pointer;

		AddByte(_checkSum);
		AddChar( '\n'); // конец пакета

		//CDC_Transmit_FS( _outBuffer, _bufferDataLength);
		pointer = _outBuffer;
		for (int i = 0; i < _bufferDataLength; ++i)
		{
			putchar(*pointer++);
		}
		_oubBufBusy = false;
	}


	// обработчик поступающих команд. Вынесен отдельно, что-бы запускать его в
	// основном цикле
	static uint8_t *Commands()
	{
		uint8_t *cmdBuf;

		// если команды нет
		if ( (cmdBuf = GetCmdFromUSB_CDC()) == 0 )
		{
			return 0;
		}

		if (cmdBuf[0] == 0xFF)
		{
			SendDeviceInfo(cmdBuf[1]);  // Информация об устройстве
									    // для выбора при подключении
			return 0; // команда уже обработана
		}

		return cmdBuf;
	}

protected:

private:
	static uint8_t *GetCmdFromUSB_CDC(void);

	static unsigned char CharToBin(unsigned char x)
	{
		if (x >= '0' && x <= '9')
		{
			return x - '0';
		}
		else if (x >= 'a' && x <= 'f')
		{
			return x - 'a' + 10;
		}
		else if (x >= 'A' && x <= 'F')
		{
			return x - 'A' + 10;
		}
		else
		{
			return 0;
		}
	}


	static unsigned char byte_L(unsigned char x)
	{
		x &= 0x0f;
		if (x < 0x0A)
		{
			return x + '0';
		}
		else
		{
			return x + 'A' - 0x0a;
		}
	}

	static unsigned char byte_H(unsigned char x)
	{
		return byte_L(x>>4);
	}

	static void EventUsbDataReceived()
	{
		int16_t data;

		// Данные от USB приняты, vнужно сохранить для последующей обработки
		while ( (data = UsbFsCdcClass::getchar()) >= 0 )
		{
		}
	}

	static const int16_t _rxBufferSize { 1024 };
	static uint8_t	_rx_buf[];
	static int16_t	_rx_wr_index;
	static int16_t	_rx_rd_index;
	static int16_t	_rx_counter;
	//int _LenCmd=0;
	static int _indexGetCmd;

	static const int16_t 	_usbInpBufSize { _rxBufferSize };
	static const int16_t 	_usbCmdBufSize { _rxBufferSize/2 };
	static unsigned char	_USB_inpBuf[]; // буфер приема команд
	static unsigned char	_USB_cmdBuf[]; // буфер команды

	static int LenCmd;

	// буфер данных для отправки
	static const int16_t _outBufferMaxLength { 2000 };
	// unsigned char
	static uint8_t	_outBuffer[];
	//static unsigned char	_outBuffer[_outBufferMaxLength];
	static int16_t  _bufferDataLength;
	//static uint8_t	*_pBuffer;
	//static uint8_t	*_pBuffer1;
	static uint8_t	_checkSum;
	static int16_t  _bytes;
	static bool _oubBufBusy;

	static uint8_t	*_pBuffer;
};

#endif /* MY_SRC_USBDEVICE_H_ */
