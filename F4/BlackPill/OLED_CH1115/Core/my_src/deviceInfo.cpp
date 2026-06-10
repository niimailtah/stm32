/*
 * deviceInfo.cpp
 *
 * Базовое описание устройства
 *
 *  Created on: May 19, 2023
 *      Author: dedov
 */

#include "main.h"
#ifdef STM32F4
#include "stm32f4xx_ll_system.h"
#endif
#ifdef STM32G4
#include "stm32g4xx_ll_system.h"
#endif
#include "time.h"
#include "UsbDevice.h"

// ----------------------------------------------------------------------------
// Код устройства 16 бит. Присваивается новый код каждому устройству
static const uint32_t DeviceCode = 0x0100; // 256
// Версия прошивки
static const char *DeviceSoftVersion = "v0.01b (24.02.2026)";
// Название устройства
static const char *DeviceName = "stm32f411ceu6 Цифровой уровень";
// Краткое описание устройства
static const char *DeviceDescription = "Цифровой уровень\n\
\n\
";

static const char *undefinedValue = "No defined";

// ----------------------------------------------------------------------------
static uint32_t DeviceMCUinfo[2];
static uint32_t DeviceUIDcode[3];
time_t CurrentTime;
static uint8_t returnString[256];
static uint8_t *pReturnString;

// ----------------------------------------------------------------------------
void GetDeviceCode();
static void GetDeviceMCUifo(void);
static void GetDeviceUIDcode(void);

// ----------------------------------------------------------------------------
/*
 * GetDeviceInfo(uint8_t  *cmdBuf)
 * Команда "Получить информацию о устройстве"
 * первый байт 0xFF - Команда "GetDeviceInfo"
 * второй байт - запрашиваемая информация
 * =0 - только  DeviceCode (тип устройства, определяет рабочие функции)
 * 0x01 - версия ПО (обновления, улучшение, исправление ошибок)
 * 0x02 - Имя устройства
 * 0x04 - MCU_IDCODE, UID (128 bites)
 * 0x08 - MCU_info, MCU (64 bites)
 * 0x10 - описание возможностей
 * 0x20 - поддерживаемые команды (список)
 *
*/
uint8_t *GetDeviceInfo(uint8_t subCmd)
{
	switch (subCmd)
	{
		case 0: // DeviceCode(тип устройства, определяет рабочие функции)
			GetDeviceCode();
			pReturnString = returnString;
			break;
		case 1: // Версия ПО
			pReturnString = (uint8_t*)DeviceSoftVersion;
			break;
		case 2: // Имя устройства
			pReturnString = (uint8_t*)DeviceName;
			break;
		case 3:	// ID чипа (серийный номер)
			GetDeviceUIDcode();
			pReturnString = returnString;
			//returnString = 0;
			break;
		case 4: // информация о чипе
			GetDeviceMCUifo();
			pReturnString = returnString;
			//returnString = 0;
			break;
		case 5:	// описание устройства
			pReturnString = (uint8_t*)DeviceDescription;
			break;
		case 6: // список поддерживаемых команд устройства.
			pReturnString = (uint8_t*)undefinedValue;
			break;
		default:
			pReturnString = (uint8_t*)undefinedValue;
			break;
	}

	return pReturnString;
}


void GetCommandHelp(uint8_t *cmdBuf)
{
}

void GetDeviceCode()
{
	uint8_t* p = returnString;

	p = UsbDevice::uint32toHEX(DeviceCode, p);

	*p++ = 0; // символ конца строки
}


static void GetDeviceMCUifo(void)
{
	uint8_t* p = returnString;

	DeviceMCUinfo[0] = LL_DBGMCU_GetDeviceID();   // MCU_id
	DeviceMCUinfo[1] = LL_DBGMCU_GetRevisionID(); // MCU_revision

	p = UsbDevice::uint32toHEX(DeviceMCUinfo[0], p);
	p = UsbDevice::uint32toHEX(DeviceMCUinfo[1], p);

	*p++ =  0; // символ конца строки
}


static void GetDeviceUIDcode(void)
{
	uint8_t* p = returnString;

	DeviceMCUinfo[0] = LL_DBGMCU_GetDeviceID (); // MCU_id
	DeviceUIDcode[0] = HAL_GetUIDw0();
	DeviceUIDcode[1] = HAL_GetUIDw1();
	DeviceUIDcode[2] = HAL_GetUIDw2();

	p = UsbDevice::uint32toHEX(DeviceMCUinfo[0], p);
	p = UsbDevice::uint32toHEX(DeviceUIDcode[0], p);
	p = UsbDevice::uint32toHEX(DeviceUIDcode[1], p);
	p = UsbDevice::uint32toHEX(DeviceUIDcode[2], p);

	*p++ =  0; // символ конца строки
}


void SendDeviceInfo(uint8_t  subCmd)
{
	UsbDevice::ClearOutBuf(); //	Sender_ClearBuf();
	UsbDevice::AddByte(0xff);
	UsbDevice::AddByte(0x00);	// Результат приема команды
	UsbDevice::AddByte(subCmd);
	UsbDevice::AddString(GetDeviceInfo(subCmd));
	UsbDevice::ReadySendToUSB();
}
