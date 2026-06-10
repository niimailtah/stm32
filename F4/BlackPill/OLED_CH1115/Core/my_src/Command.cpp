/**
  * @file    Command.c
  *
  *  Created on: Apr 23, 2021
  *      Author: dedov
  */

#include <cmath>

#include "main.h"
#include "screen.h"
//#include "Structures.h"
#include "UsbDevice.h"
#include "ErrorsCommand.h"
//#include "LSM6DS3.h"
//#include "StatusWord.h"
//#include "SyncCollection.h"
//#include "PWMShowPosition.h"
//#include "IncEncoder.h"
//#include "Voltage24.h"
//#include "Stepper.h"
//#include "GlobalFunctions.h"
//#include "FrqMeter.h"
//#include "Ina3221a.h"
//#include "SPI1LSM6DS3.h"
#include "DigitalPins.h"

// ----------------------------------------------------------------------------
void cmdErrorCommand(uint8_t *cmdBuf);
int32_t	GetInt32FromCommand(uint8_t *data, int16_t offset);
int16_t	GetInt16FromCommand(uint8_t *data, int16_t offset);
void CommandsGroup_0x01(uint8_t *pCommandBuf);
void CommandsGroup_0x13(uint8_t *pCommandBuf);
void CommandsGroup_0x14(uint8_t *pCommandBuf);
void CommandsGroup_0x15(uint8_t *pCommandBuf);


// ----------------------------------------------------------------------------
void cmdErrorCommand(uint8_t *cmdBuf)
{
	UsbDevice::ClearOutBuf(); //Sender_ClearBuf();
	UsbDevice::AddByte(cmdBuf[0]);	// Код группы
	UsbDevice::AddByte(errCommandNoSupported); // ошибка, команда не поддерживается
	UsbDevice::AddByte(cmdBuf[1]);	// Код команды
	UsbDevice::ReadySendToUSB();
}


void TaskCommands(uint8_t *pCommandBuf)
{
	if (pCommandBuf[0] == 0x01)
	{
		CommandsGroup_0x01(pCommandBuf);
	}
	else
	{	// группа не поддерживается
		cmdErrorCommand(pCommandBuf);		// ответ "Ошибочная команда"
	}
}


// Обработка группы  0x01
void CommandsGroup_0x01(uint8_t *pCommandBuf)
{
	// Формируем начало пакета
	UsbDevice::ClearOutBuf(); //	Sender_ClearBuf();
	UsbDevice::AddByte(pCommandBuf[0]);
	UsbDevice::AddByte(0x00);	// Результат приема команды
								// По умолчанию "успешно", но может быть
								// изменено при выполнении команды
	UsbDevice::AddByte(pCommandBuf[1]);

//	{
//		// байт состояния цифровых выходов
//		uint8_t b_out;
//		b_out = 0;
//		b_out += DigitalPins::GetLcdEN()<<0;
//		b_out += DigitalPins::GetLcdDC()<<1;
//		b_out += DigitalPins::GetLcdRES()<<2;
//		UsbDevice::AddByte(b_out);
//	}

	switch (pCommandBuf[1])	// первый байт в буфере - код команды
	{
	case 0x00:  // Запрос информации
		// ничего не делаем, вся инфа уже в заголовке
		break;

	case 0x01:  // Прием данных от датчика уровня
		{
			int32_t x_value { GetInt32FromCommand(pCommandBuf, 2) };
			int32_t y_value { GetInt32FromCommand(pCommandBuf, 2 + 4) };
			// TODO: UNUSED(y_value);
			UNUSED(y_value);
			int32_t t_value { GetInt32FromCommand(pCommandBuf, 2 + 4 + 4) };
			// TODO: UNUSED(t_value);
			UNUSED(t_value);
			_x_angle_value = 0;

			double dx;
			double sinx;
			double arad;
			double agr;

			typedef struct ValueTable_s
			{
				int32_t register_value;
				double grad;
			} ValueTable_s;
			ValueTable_s ValueTable[21] =
			{
				{.register_value=-32767 * 2048, .grad=-30},
				{.register_value=    -60932644, .grad=-27},
				{.register_value=    -54590435, .grad=-24},
				{.register_value=    -48098598, .grad=-21},
				{.register_value=    -41474926, .grad=-18},
				{.register_value=    -34737574, .grad=-15},
				{.register_value=    -27905009, .grad=-12},
				{.register_value=    -20995958,  .grad=-9},
				{.register_value=    -14029359,  .grad=-6},
				{.register_value=     -7024306,  .grad=-3},
				{.register_value=            0,   .grad=0},
				{.register_value=      7024306,   .grad=3},
				{.register_value=     14029359,   .grad=6},
				{.register_value=     20995958,   .grad=9},
				{.register_value=     27905009,  .grad=12},
				{.register_value=     34737574,  .grad=15},
				{.register_value=     41474926,  .grad=18},
				{.register_value=     48098598,  .grad=21},
				{.register_value=     54590435,  .grad=24},
				{.register_value=     60932644,  .grad=27},
				{.register_value= 32767 * 2048,  .grad=30},
			};
			// TODO: UNUSED(ValueTable);
			UNUSED(ValueTable);

			dx = std::fabs((double)x_value);
			sinx = (dx / 2048) / 65535 * _correction_factor;
			arad = round(asin(sinx) * 1000000.) / 1000000.; // округляем до 6 знаков чтобы дискретность была 0.000001 радиан (около 0.2 угловой секунды)
			agr = arad * 180 / M_PI;

            double temg = agr - (int)agr;
            int imin, isec;
            if (temg == 0)
            {
                imin = 0;
                isec = 0;
            }
            else
            {
                isec = (int)(temg * 3600);
                imin = isec / 60;
                isec %= 60;
            }

//            _x_angle = arad;
            _x_angle_grads_value = agr;
            _x_angle_value = x_value > 0 ? _x_angle_grads_value : -_x_angle_grads_value;
            _x_angle_minutes_value = imin;
            _x_angle_seconds_value = isec;

//			_x_height = Math.Sin(arad) * 1000; // в мм на метр
		}
		break;

	default:
		// Меняем результат выполнения на "ошибка, команда не поддерживается"
		UsbDevice::ChangeCommandStatus(errCommandNoSupported);
		break;
	}

	UsbDevice::ReadySendToUSB();
}


int32_t	GetInt32FromCommand(uint8_t *data, int16_t offset)
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


int16_t	GetInt16FromCommand(uint8_t *data, int16_t offset)
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
