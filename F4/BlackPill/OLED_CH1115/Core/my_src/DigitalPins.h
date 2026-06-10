/*
 * DigitalPins.h
 *	Класс для удобства работы с пинами ввода/вывода
 *
 *	Класс Статический
 *
 *  Created on: Apr 24, 2024
 *      Author: dedov
 */

#ifndef MY_SRC_DIGITALPINS_H_
#define MY_SRC_DIGITALPINS_H_
#include "main.h"

// Порты ввода (только чтение) IDR (Input Data Register)
#define PORT_A_INP	((PortAInputs_t*)(PosrtA_BaseAddress+0x10))
//#define PORT_B_INP	((PortBInputs_t*)(PosrtB_BaseAddress+0x10))
//#define PORT_C_INP	((PortCInputs_t*)(PosrtC_BaseAddress+0x10))

// Порты вывода (чтение и запись) ODR (Output Data Register)
//#define PORT_A_OUT	((PortAOutputs_t*)(PosrtA_BaseAddress+0x14))
#define PORT_B_OUT	((PortBOutputs_t*)(PosrtB_BaseAddress+0x14))
#define PORT_C_OUT	((PortCOutputs_t*)(PosrtC_BaseAddress+0x14))

class DigitalPins {
public:
	DigitalPins() {};
	virtual ~DigitalPins() {};

	// Led
	inline static void LedBoardOn()     { PORT_C_OUT->LedBoard = 0; }
	inline static void LedBoardOff()    { PORT_C_OUT->LedBoard = 1; }
	inline static void LedBoardToggle() { PORT_C_OUT->LedBoard = ~PORT_C_OUT->LedBoard; }

	// Key
	inline static uint16_t GetKey()
	{
#ifdef STM32F4
		return PORT_A_INP->Key;
#endif // STM32F4
#ifdef STM32G4
		return PORT_C_INP->Key;
#endif // STM32G4
	}
	static const uint8_t LED_ON { 0 };
	static const uint8_t LED_OFF{ 1 };

	// Drive
	// Не используется
	inline static uint16_t GetDrvMs() { return PORT_B_OUT->DrvMS; }
	inline static void SetDrvMs(uint16_t newValue) { PORT_B_OUT->DrvMS = newValue; }

	inline static uint16_t GetDrvEnable() { return PORT_B_OUT->DrvEnable; }
	inline static void SetDrvEnable(uint16_t newValue) { PORT_B_OUT->DrvEnable = newValue; }
	inline static void DriveDisable() { PORT_B_OUT->DrvEnable = 1; }
	inline static void DriveEnable()  { PORT_B_OUT->DrvEnable = 0; }

	// IsDrvEnable() - информация от текущем состоянии привода!!! по значению на выходе разрешения
	inline static bool IsDrvEnable() { return (PORT_B_OUT->DrvEnable==0); }

	inline static uint16_t GetDrvStep() { return PORT_B_OUT->DrvStep; }
	inline static void SetDrvStep(uint16_t newValue) { PORT_B_OUT->DrvStep = newValue; }
	inline static void SetDrvStepOn()  { PORT_B_OUT->DrvStep = 1; }
	inline static void SetDrvStepOff() { PORT_B_OUT->DrvStep = 0; }

	inline static uint16_t GetDrvDir() { return PORT_B_OUT->DrvDir; }
	inline static void SetDrvDir(uint16_t newValue) { PORT_B_OUT->DrvDir = newValue; }

private:
	static const uint32_t PosrtA_BaseAddress { GPIOA_BASE };
	static const uint32_t PosrtB_BaseAddress { GPIOB_BASE };
	static const uint32_t PosrtC_BaseAddress { GPIOC_BASE };

	// Входы (чтение)
	typedef struct
	{
#ifdef STM32F4
		volatile 	uint16_t	Key	: 1;             // 00 - UserKey
		volatile 	uint16_t	x_disable01_15	:15; // 01...15
	} PortAInputs_t;
#endif // STM32F4
#ifdef STM32G4
	typedef struct
	{
		volatile 	uint16_t	x_disable00_12	:13; // 00...12
		volatile 	uint16_t	Key	: 1;             // 13 - UserKey
		volatile 	uint16_t	x_disable14_15	:2;  // 14...15
	} PortCInputs_t;
#endif // STM32G4

	// Выходы (чтение и запись)
	// Не используется
	typedef struct
	{
		volatile 	uint16_t	DrvMS		:2; // 0 - DRV_MS1,2
		volatile 	uint16_t	x_disable02	:1; // 2 -
		volatile 	uint16_t	DrvEnable	:1; // 3 - DRV_EN
		volatile 	uint16_t	DrvDir		:1; // 4 - DRV_DIR
		volatile 	uint16_t	DrvStep		:1; // 5 - DRV_STEP
		volatile 	uint16_t	x_disable06_15	:10; // 06...15
	} PortBOutputs_t;

	typedef struct
	{
#ifdef STM32F4
		volatile 	uint16_t	x_disable00_12	:13; // 00...12
		volatile 	uint16_t	LedBoard		:1;  // 13 - BoardLed
		volatile 	uint16_t	x_disable14_15	:2;  // 14...15
#endif // STM32F4
#ifdef STM32G4
		volatile 	uint16_t	x_disable00_05	:6; // 00...05
		volatile 	uint16_t	LedBoard		:1; // 06 - BoardLed
		volatile 	uint16_t	x_disable07_15	:9; // 07...15
#endif // STM32G4
	} PortCOutputs_t;
};

#endif /* MY_SRC_DIGITALPINS_H_ */
