/**
  ******************************************************************************
  * @file     memory.h
  * @author   Alexey Polurotov
  * @version  V1.0
  * @date     27/02/2025
  * @brief    Memory management.
  ******************************************************************************
*/
#ifndef __MEMORY_H
#define __MEMORY_H
/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Typedef -------------------------------------------------------------------*/
typedef struct {
	HAL_StatusTypeDef status;
	char *error;
} flash_s;

/* Define -------------------------------------------------------------------*/
#define flash_read(...) flash_read_imp((flash_s){.status=HAL_OK, \
													__VA_ARGS__})
#define flash_write(...) flash_write_imp((flash_s){.status=HAL_OK, \
													__VA_ARGS__})
#define flash_erase(...) flash_erase_imp((flash_s){.status=HAL_OK, \
													__VA_ARGS__})

/* Function prototypes -------------------------------------------------------*/
#ifdef __cplusplus
 extern "C" {
#endif

flash_s flash_read_imp(flash_s in);
flash_s flash_write_imp(flash_s in);
flash_s flash_erase_imp(flash_s in);

#ifdef __cplusplus
}
#endif

#endif // __MEMORY_H
