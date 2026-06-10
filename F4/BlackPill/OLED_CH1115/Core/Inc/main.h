/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include "u8g2.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
typedef enum EScreenMode
{
    MainScreen,
    ZeroSettingScreen1,
    ZeroSettingScreen2,
    ZeroSettingScreen3,
    ZeroSettingScreen4,
    SettingsScreen,
    InfoScreen,
    ServiceScreen,
} EScreenMode;

typedef enum EButtonAction
{
    None = 0,
    Esc = 1,
    Ok = 2,
    Next = 3,
} EButtonAction;
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
void SendDataByte(uint8_t value);
void SendCommandByte(uint8_t value);

uint8_t u8x8_stm32_gpio_and_delay(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);
uint8_t u8x8_byte_stm32_hw_spi(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);

void StopOnError(char *errorString);
void TaskCommands(uint8_t *pCommandBuf);

extern u8g2_t myDisplay;
extern EScreenMode CurrentScreen;
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define OLED_CS_Pin GPIO_PIN_2
#define OLED_CS_GPIO_Port GPIOA
#define OLED_DC_Pin GPIO_PIN_3
#define OLED_DC_GPIO_Port GPIOA
#define OLED_RST_Pin GPIO_PIN_4
#define OLED_RST_GPIO_Port GPIOA
#define BTN_ESC_Pin GPIO_PIN_0
#define BTN_ESC_GPIO_Port GPIOB
#define BTN_NEXT_Pin GPIO_PIN_1
#define BTN_NEXT_GPIO_Port GPIOB
#define BTN_OK_Pin GPIO_PIN_2
#define BTN_OK_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
#define U8G2
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
