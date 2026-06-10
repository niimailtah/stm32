/*
 * bootloader.h
 *
 *  Created on: Mar 12, 2025
 *      Author: Alexey Polurotov
 */

#ifndef BOOTLOADER_H_
#define BOOTLOADER_H_

/* Private defines -----------------------------------------------------------*/
#define FLASH_SECTOR0_BASE_ADDRESS 0x08000000U
#define FLASH_SECTOR1_BASE_ADDRESS 0x08004000U
#define FLASH_SECTOR2_BASE_ADDRESS 0x08008000U
#define FLASH_SECTOR3_BASE_ADDRESS 0x0800c000U
#define FLASH_SECTOR4_BASE_ADDRESS 0x08010000U
#define FLASH_SECTOR5_BASE_ADDRESS 0x08020000U
#define FLASH_SECTOR6_BASE_ADDRESS 0x08040000U
#define FLASH_SECTOR7_BASE_ADDRESS 0x08060000U
#define FLASH_SECTOR8_BASE_ADDRESS 0x08080000U

/* Private function prototypes -----------------------------------------------*/
void bootloader_jump_to_user_app(uint32_t app_address);

#endif /* BOOTLOADER_H_ */
