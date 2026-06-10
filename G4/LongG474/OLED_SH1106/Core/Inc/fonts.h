/**
  ******************************************************************************
  * @file    fonts.h
  * @brief   Header for fonts.c file
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __FONTS_H
#define __FONTS_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

// ASCII
typedef struct Font_t
{
	const uint8_t *table;
	uint16_t width;
	uint16_t height;
} Font_t;

extern Font_t Font24;
//extern sFONT Font20;
extern Font_t Font16;
//extern sFONT Font12;
extern Font_t Font8;

#ifdef __cplusplus
}
#endif
  
#endif /* __FONTS_H */

/*****END OF FILE****/
