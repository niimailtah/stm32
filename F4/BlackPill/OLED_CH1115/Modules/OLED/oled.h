/**
  ******************************************************************************
  * @file    oled.h
  * @brief   Header for oled.c file
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __OLED_H
#define __OLED_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

void OLED_Reset(void);
void OLED_InitReg(void);
void OLED_Init(void);

extern uint8_t Image[8 * 128];

#ifdef __cplusplus
}
#endif
  
#endif /* __OLED_H */

/*****END OF FILE****/
