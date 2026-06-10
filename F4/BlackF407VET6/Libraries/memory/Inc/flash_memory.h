/**
  ******************************************************************************
  * @file     memory.h
  * @author   Alexey Polurotov
  * @version  V1.0
  * @date     27/02/2025
  * @brief    Memory management.
  ******************************************************************************
*/
#ifndef __FLASH_MEMORY_H
#define __FLASH_MEMORY_H
/* Includes ------------------------------------------------------------------*/
#include <stdbool.h>
#include "stm32f4xx_hal.h"

/* Typedef -------------------------------------------------------------------*/
typedef struct {
	uint32_t magic; 		// magic value
	uint8_t  Param1;         // 1 byte
	uint8_t  Param2;         // 1 byte
	uint16_t Param3;        // 2 byte
	uint32_t Param4;        // 4 byte
	uint32_t Param5;        // 4 byte
	char last_addr[0]; 		// the pointer to calculate real size of structure
} stored_data_s;
typedef union {
	stored_data_s stored_data;
	uint8_t bytes[16];
} stored_data_u;

typedef struct {
	HAL_StatusTypeDef status;
	size_t len;
	uint32_t rd32[4];
	size_t count;
	uint8_t data[64];
	stored_data_u stored_data;
	char *error;
} flash_s;

/* Define -------------------------------------------------------------------*/
#define FLASH_MAGIC ((uint32_t) 0xAA55A55A)
// internal flash
#define FLASH_SECTOR0_BASE_ADDRESS 0x08000000U
#define FLASH_SECTOR1_BASE_ADDRESS 0x08004000U
#define FLASH_SECTOR2_BASE_ADDRESS 0x08008000U
#define FLASH_SECTOR3_BASE_ADDRESS 0x0800c000U
#define FLASH_SECTOR4_BASE_ADDRESS 0x08010000U
#define FLASH_SECTOR5_BASE_ADDRESS 0x08020000U
#define FLASH_SECTOR6_BASE_ADDRESS 0x08040000U
#define FLASH_SECTOR7_BASE_ADDRESS 0x08060000U
#define FLASH_SECTOR8_BASE_ADDRESS 0x08080000U

#define flash_read(...) flash_read_imp((flash_s){.status=HAL_OK, \
													__VA_ARGS__})
#define flash_write(...) flash_write_imp((flash_s){.status=HAL_OK, \
													__VA_ARGS__})
#define flash_erase(...) flash_erase_imp((flash_s){.status=HAL_OK, \
													__VA_ARGS__})

// external flash
#define F_CS_Pin GPIO_PIN_0
#define F_CS_GPIO_Port GPIOB

#define W25_CSL HAL_GPIO_WritePin(F_CS_GPIO_Port, F_CS_Pin, GPIO_PIN_RESET);
#define W25_CSH HAL_GPIO_WritePin(F_CS_GPIO_Port, F_CS_Pin, GPIO_PIN_SET);
#define READ      0x03
#define WRITE     0x02
#define WRITE_EN  0x06
#define WRITE_DS  0x04
#define ERASE_SEC 0x20
#define SR1_READ  0x05
#define ID_READ   0x90
#define JEDEC_READ 0x9f

/* Function prototypes -------------------------------------------------------*/
#ifdef __cplusplus
 extern "C" {
#endif

// internal flash
flash_s flash_read_imp(flash_s in);
flash_s flash_write_imp(flash_s in);
flash_s flash_erase_imp(flash_s in);

// external flash
uint16_t Read_ID(void);
uint32_t Read_JEDEC(void);
uint8_t Read_SR1(void);
void Read_Page(uint32_t addr, uint8_t *rData);

void WriteEnable(void);
void WriteDisable(void);
void Write_Page(uint32_t addr, uint8_t *wData);

void EraseSec(uint32_t addr);

/* variables --*/
extern uint8_t buffer[256];
extern bool flash_is_empty;

#ifdef __cplusplus
}
#endif

#endif // __FLASH_MEMORY_H
