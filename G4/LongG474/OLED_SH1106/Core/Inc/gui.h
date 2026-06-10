/**
  ******************************************************************************
  * @file    gui.h
  * @brief   Header for gui.c file
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GUI_H
#define __GUI_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
#include "fonts.h"

/* Typedefs ------------------------------------------------------------------*/
typedef enum OLED_Color_t
{
	OLED_Color_Black,
	OLED_Color_White,
} OLED_Color_t;

/* Function prototypes -------------------------------------------------------*/
void OLED_SetPixel(uint8_t x, uint8_t y, OLED_Color_t color);
void OLED_Clear(void);
void OLED_DrawPoint(uint8_t x_point, uint8_t y_point, OLED_Color_t color);
void OLED_DrawLine(uint8_t x_start, uint8_t y_start, uint8_t x_end, uint8_t y_end, OLED_Color_t color);
void OLED_DrawRect(uint8_t x_offset, uint8_t y_offset, uint8_t width, uint8_t height, OLED_Color_t color);
void OLED_DrawRoundRect(uint8_t x_offset, uint8_t y_offset, uint8_t width, uint8_t height, uint8_t radius, OLED_Color_t color);
void OLED_DrawCircle(uint8_t x_center, uint8_t y_center, uint8_t radius, OLED_Color_t color);
void OLED_DrawChar(uint8_t x_offset, uint8_t y_offset, const char ch, Font_t *font, OLED_Color_t color);
void OLED_DrawTerminusChar(uint8_t x_offset, uint8_t y_offset, uint8_t sym, uint8_t font, OLED_Color_t color);
void OLED_DrawXColba(uint8_t bubble_pos);
void OLED_DrawYColba(uint8_t bubble_pos);
void OLED_RefreshScreen(void);
void OLED_SetWindow(uint8_t x1, uint8_t x2, uint8_t y1, uint8_t y2);

void KOI8Rx24_decompress_sym(uint8_t sym, uint8_t font);

/* Variables ----------------------------------------------------------------*/
extern uint8_t Image[8 * 128];

#ifdef __cplusplus
}
#endif
  
#endif /* __GUI_H */

/*****END OF FILE****/
