/**
  ******************************************************************************
  * @file     nvram.h
  * @author   Alexey Polurotov
  * @version  V1.0
  * @date     27/02/2025
  * @brief    NVRAM library for STM32F1XX with HAL-Driver
  ******************************************************************************
*/
#ifndef __NVRAM_H
#define __NVRAM_H
/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
//#include "stm32f1xx_hal.h"

// ------------------------------------------- library configuration -------------------------------------------

// number of variables (maximum variable name is NVRAM_VARIABLE_COUNT - 1)
// keep in mind it is limited by page size
// maximum is also determined by your variable sizes
// space utilization ratio X = (2 + 4*COUNT_16BIT + 6*COUNT_32BIT + 10*COUNT_64BIT) / PAGE_SIZE
// if X is high, variable changes more often require a page transfer --> lifetime of the flash can be reduced significantly
// depending on your variable change rate, X should be at least <50%
#define NVRAM_VARIABLE_COUNT	(uint16_t) 4

// flash size of used STM32F103C8 device in KByte
#define NVRAM_FLASH_SIZE		(uint16_t) 128

// ------------------------------------------------- constants -------------------------------------------------

// NVRAM start address in flash: use last two pages of flash memory
//#define NVRAM_START_ADDRESS	(uint32_t) (0x08000000 + 1024*NVRAM_FLASH_SIZE - 2*FLASH_PAGE_SIZE)
// NVRAM start address in flash:

// TODO
#define NVRAM_START_ADDRESS	(uint32_t) (0x08010000)
#define FLASH_PAGE_SIZE (uint32_t) (128)


// used flash pages for NVRAM
typedef enum
{
	NVRAM_PAGE0			= NVRAM_START_ADDRESS,						// Page0
	NVRAM_PAGE1			= NVRAM_START_ADDRESS + FLASH_PAGE_SIZE,	// Page1
	NVRAM_PAGE_NONE		= 0x00000000								// no page
} NVRAM_Page_e;

// page status
typedef enum
{
	NVRAM_ERASED		= 0xFFFF,									// Page is empty
	NVRAM_RECEIVING		= 0xEEEE,									// Page is marked to receive data
	NVRAM_VALID			= 0x0000									// Page containing valid data
} NVRAM_PageStatus_e;

// results
typedef enum
{
	NVRAM_SUCCESS			= 0x00,									// Method successful / HAL_OK
	NVRAM_ERROR				= 0x01,									// Error: HAL_ERROR occurred
	NVRAM_BUSY				= 0x02,									// Error: HAL_BUSY occurred
	NVRAM_TIMEOUT			= 0x03,									// Error: HAL_TIMEOUT occurred
	NVRAM_NO_VALID_PAGE		= 0x04,									// Error: no valid page found
	NVRAM_NOT_ASSIGNED		= 0x05,									// Error: variable was never assigned
	NVRAM_INVALID_NAME		= 0x06,									// Error: variable name to high for variable count
	NVRAM_FULL				= 0x07									// Error: NVRAM is full
} NVRAM_Result_e;

// sizes ( halfwords = 2 ^ (size-1) )
typedef enum
{
	NVRAM_SIZE_DELETED		= 0x00,									// variable is deleted (no size)
	NVRAM_SIZE16			= 0x01,									// variable size = 16 bit = 1 Halfword
	NVRAM_SIZE32			= 0x02,									// variable size = 32 bit = 2 Halfwords
	NVRAM_SIZE64			= 0x03									// variable size = 64 bit = 4 Halfwords
} NVRAM_Size_e;

typedef union
{
	int16_t  Int16;
	int32_t  Int32;
	int64_t  Int64;
	uint16_t uInt16;
	uint32_t uInt32;
	uint64_t uInt64;
	float    Float;
	double   Double;
 } NVRAM_Value_u;

// ----------------------------------------------public functions---------------------------------------------

NVRAM_Result_e NVRAM_Init();
NVRAM_Result_e NVRAM_ReadVariable(uint16_t VariableName, NVRAM_Value_u* Value);
NVRAM_Result_e NVRAM_WriteVariable(uint16_t VariableName, NVRAM_Value_u Value, NVRAM_Size_e Size);
NVRAM_Result_e NVRAM_DeleteVariable(uint16_t VariableName);

#endif // __NVRAM_H
