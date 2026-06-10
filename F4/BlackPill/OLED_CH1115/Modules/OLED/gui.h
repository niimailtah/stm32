/**
  ******************************************************************************
  * @file    gui.h
  * @brief   Header for gui.c file
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __OLED_GUI_H
#define __OLED_GUI_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

/* Typedefs ------------------------------------------------------------------*/
typedef enum OLED_Color_e
{
	OLED_Color_Black,
	OLED_Color_White,
	OLED_Color_Invert,
} OLED_Color_e;

typedef enum OLED_Font_Style_e
{
	OLED_Font_Regular,
	OLED_Font_Bold,
} OLED_Font_Style_e;

typedef struct
{
	uint16_t utf8_sym;
	uint8_t koi8r_sym;
	uint8_t cpp866_sym;
} UTF8_Charmaps_s;

typedef struct
{
	uint8_t x;
	uint8_t y;
	OLED_Color_e color;
	char *error;
} Point_s;

typedef struct
{
	uint8_t x1;
	uint8_t y1;
	uint8_t x2;
	uint8_t y2;
	OLED_Color_e color;
	char *error;
} Line_s;

typedef struct
{
	uint8_t x;
	uint8_t y;
	uint8_t width;
	uint8_t height;
	uint8_t radius;
	OLED_Color_e color;
	char *error;
} Rect_s;

typedef struct
{
	uint8_t x;
	uint8_t y;
	uint8_t radius;
	OLED_Color_e color;
	char *error;
} Circle_s;

typedef struct
{
	uint8_t x;
	uint8_t y;
	uint8_t sym;
	OLED_Font_Style_e style;
	OLED_Color_e color;
	char *error;
} Char_s;

typedef struct
{
	uint8_t x;
	uint8_t y;
	uint8_t width;
	uint8_t height;
	uint8_t *bitmap;
	OLED_Color_e color;
	char *error;
} Bitmap_s;
/* Function prototypes -------------------------------------------------------*/
void OLED_Clear(void);
#define OLED_SetPixel(...) OLED_SetPixel_imp((Point_s){.color=OLED_Color_White, \
	__VA_ARGS__})
Point_s OLED_SetPixel_imp(Point_s in);
#define OLED_DrawPoint(...) OLED_DrawPoint_imp((Point_s){.color=OLED_Color_White, \
	__VA_ARGS__})
Point_s OLED_DrawPoint_imp(Point_s in);
#define OLED_DrawLine(...) OLED_DrawLine_imp((Line_s){.color=OLED_Color_White, \
	__VA_ARGS__})
Line_s OLED_DrawLine_imp(Line_s in);
void OLED_DrawRect(uint8_t x_offset, uint8_t y_offset, uint8_t width, uint8_t height, OLED_Color_e color);
void OLED_DrawRoundRect(uint8_t x_offset, uint8_t y_offset, uint8_t width, uint8_t height, uint8_t radius, OLED_Color_e color);
#define OLED_DrawCircle(...) OLED_DrawCircle_imp((Circle_s){.color=OLED_Color_White, \
	__VA_ARGS__})
Circle_s OLED_DrawCircle_imp(Circle_s in);
void OLED_DrawChar(uint8_t x_offset, uint8_t y_offset, const char ch, OLED_Color_e color);
void OLED_DrawText(uint8_t x_offset, uint8_t y_offset, const char *str, OLED_Color_e color);
#define OLED_DrawConsole8Char(...) OLED_DrawConsole8Char_imp((Char_s){.style=OLED_Font_Regular, .color=OLED_Color_White, \
	__VA_ARGS__})
Char_s OLED_DrawConsole8Char_imp(Char_s in);
#define OLED_DrawTerminus16Char(...) OLED_DrawTerminus16Char_imp((Char_s){.style=OLED_Font_Regular, .color=OLED_Color_White, \
	__VA_ARGS__})
Char_s OLED_DrawTerminus16Char_imp(Char_s in);
#define OLED_DrawTerminus24Char(...) OLED_DrawTerminus24Char_imp((Char_s){.style=OLED_Font_Regular, .color=OLED_Color_White, \
	__VA_ARGS__})
Char_s OLED_DrawTerminus24Char_imp(Char_s in);
#define OLED_DrawBitmap(...) OLED_DrawBitmap_imp((Bitmap_s){.color=OLED_Color_White, \
	__VA_ARGS__})
Bitmap_s OLED_DrawBitmap_imp(Bitmap_s in);
void OLED_DrawBTSign(bool is_bluetooth_connected);
void OLED_DrawBattary(uint8_t charge_percent);
void OLED_DrawXColba(int8_t bubble_pos);
void OLED_DrawYColba(int8_t bubble_pos);
void OLED_RefreshScreen(void);
void OLED_SetWindow(uint8_t x1, uint8_t x2, uint8_t y1, uint8_t y2);

void KOI8Rx16_decompress_sym(uint8_t sym, OLED_Font_Style_e style);
void KOI8Rx24_decompress_sym(uint8_t sym, OLED_Font_Style_e style);
uint8_t utf8_to_koi8r(uint16_t utf8_sym);
uint8_t utf8_to_cp866(uint16_t utf8_sym);

/* Variables ----------------------------------------------------------------*/
extern uint8_t Image[8 * 128];

static const UTF8_Charmaps_s charmap_table[] = {
		{.utf8_sym = L'А', .koi8r_sym = 0xE1, .cpp866_sym = 0x80},
		{.utf8_sym = L'Б', .koi8r_sym = 0xE2, .cpp866_sym = 0x81},
		{.utf8_sym = L'В', .koi8r_sym = 0xF7, .cpp866_sym = 0x82},
		{.utf8_sym = L'Г', .koi8r_sym = 0xE7, .cpp866_sym = 0x83},
		{.utf8_sym = L'Д', .koi8r_sym = 0xE4, .cpp866_sym = 0x84},
		{.utf8_sym = L'Е', .koi8r_sym = 0xE5, .cpp866_sym = 0x85},
		{.utf8_sym = L'Ж', .koi8r_sym = 0xF6, .cpp866_sym = 0x86},
		{.utf8_sym = L'З', .koi8r_sym = 0xFA, .cpp866_sym = 0x87},
		{.utf8_sym = L'И', .koi8r_sym = 0xE9, .cpp866_sym = 0x88},
		{.utf8_sym = L'Й', .koi8r_sym = 0xEA, .cpp866_sym = 0x89},
		{.utf8_sym = L'К', .koi8r_sym = 0xEB, .cpp866_sym = 0x8A},
		{.utf8_sym = L'Л', .koi8r_sym = 0xEC, .cpp866_sym = 0x8B},
		{.utf8_sym = L'М', .koi8r_sym = 0xED, .cpp866_sym = 0x8C},
		{.utf8_sym = L'Н', .koi8r_sym = 0xEE, .cpp866_sym = 0x8D},
		{.utf8_sym = L'О', .koi8r_sym = 0xEF, .cpp866_sym = 0x8E},
		{.utf8_sym = L'П', .koi8r_sym = 0xF0, .cpp866_sym = 0x8F},
		{.utf8_sym = L'Р', .koi8r_sym = 0xF2, .cpp866_sym = 0x90},
		{.utf8_sym = L'С', .koi8r_sym = 0xF3, .cpp866_sym = 0x91},
		{.utf8_sym = L'Т', .koi8r_sym = 0xF4, .cpp866_sym = 0x92},
		{.utf8_sym = L'У', .koi8r_sym = 0xF5, .cpp866_sym = 0x93},
		{.utf8_sym = L'Ф', .koi8r_sym = 0xE6, .cpp866_sym = 0x94},
		{.utf8_sym = L'Х', .koi8r_sym = 0xE8, .cpp866_sym = 0x95},
		{.utf8_sym = L'Ц', .koi8r_sym = 0xE3, .cpp866_sym = 0x96},
		{.utf8_sym = L'Ч', .koi8r_sym = 0xFE, .cpp866_sym = 0x97},
		{.utf8_sym = L'Ш', .koi8r_sym = 0xFB, .cpp866_sym = 0x98},
		{.utf8_sym = L'Щ', .koi8r_sym = 0xFD, .cpp866_sym = 0x99},
		{.utf8_sym = L'Ъ', .koi8r_sym = 0xFF, .cpp866_sym = 0x9A},
		{.utf8_sym = L'Ы', .koi8r_sym = 0xF9, .cpp866_sym = 0x9B},
		{.utf8_sym = L'Ь', .koi8r_sym = 0xF8, .cpp866_sym = 0x9C},
		{.utf8_sym = L'Э', .koi8r_sym = 0xFC, .cpp866_sym = 0x9D},
		{.utf8_sym = L'Ю', .koi8r_sym = 0xE0, .cpp866_sym = 0x9E},
		{.utf8_sym = L'Я', .koi8r_sym = 0xF1, .cpp866_sym = 0x9F},
		{.utf8_sym = L'а', .koi8r_sym = 0xC1, .cpp866_sym = 0xA0},
		{.utf8_sym = L'б', .koi8r_sym = 0xC2, .cpp866_sym = 0xA1},
		{.utf8_sym = L'в', .koi8r_sym = 0xD7, .cpp866_sym = 0xA2},
		{.utf8_sym = L'г', .koi8r_sym = 0xC7, .cpp866_sym = 0xA3},
		{.utf8_sym = L'д', .koi8r_sym = 0xC4, .cpp866_sym = 0xA4},
		{.utf8_sym = L'е', .koi8r_sym = 0xC5, .cpp866_sym = 0xA5},
		{.utf8_sym = L'ж', .koi8r_sym = 0xD6, .cpp866_sym = 0xA6},
		{.utf8_sym = L'з', .koi8r_sym = 0xDA, .cpp866_sym = 0xA7},
		{.utf8_sym = L'и', .koi8r_sym = 0xC9, .cpp866_sym = 0xA8},
		{.utf8_sym = L'й', .koi8r_sym = 0xCA, .cpp866_sym = 0xA9},
		{.utf8_sym = L'к', .koi8r_sym = 0xCB, .cpp866_sym = 0xAA},
		{.utf8_sym = L'л', .koi8r_sym = 0xCC, .cpp866_sym = 0xAB},
		{.utf8_sym = L'м', .koi8r_sym = 0xCD, .cpp866_sym = 0xAC},
		{.utf8_sym = L'н', .koi8r_sym = 0xCE, .cpp866_sym = 0xAD},
		{.utf8_sym = L'о', .koi8r_sym = 0xCF, .cpp866_sym = 0xAE},
		{.utf8_sym = L'п', .koi8r_sym = 0xD0, .cpp866_sym = 0xAF},
		{.utf8_sym = L'р', .koi8r_sym = 0xD2, .cpp866_sym = 0xE0},
		{.utf8_sym = L'с', .koi8r_sym = 0xD3, .cpp866_sym = 0xE1},
		{.utf8_sym = L'т', .koi8r_sym = 0xD4, .cpp866_sym = 0xE2},
		{.utf8_sym = L'у', .koi8r_sym = 0xD5, .cpp866_sym = 0xE3},
		{.utf8_sym = L'ф', .koi8r_sym = 0xC6, .cpp866_sym = 0xE4},
		{.utf8_sym = L'х', .koi8r_sym = 0xC8, .cpp866_sym = 0xE5},
		{.utf8_sym = L'ц', .koi8r_sym = 0xC3, .cpp866_sym = 0xE6},
		{.utf8_sym = L'ч', .koi8r_sym = 0xDE, .cpp866_sym = 0xE7},
		{.utf8_sym = L'ш', .koi8r_sym = 0xDB, .cpp866_sym = 0xE8},
		{.utf8_sym = L'щ', .koi8r_sym = 0xDD, .cpp866_sym = 0xE9},
		{.utf8_sym = L'ъ', .koi8r_sym = 0xDF, .cpp866_sym = 0xEA},
		{.utf8_sym = L'ы', .koi8r_sym = 0xD9, .cpp866_sym = 0xEB},
		{.utf8_sym = L'ь', .koi8r_sym = 0xD8, .cpp866_sym = 0xEC},
		{.utf8_sym = L'э', .koi8r_sym = 0xDC, .cpp866_sym = 0xED},
		{.utf8_sym = L'ю', .koi8r_sym = 0xC0, .cpp866_sym = 0xEE},
		{.utf8_sym = L'я', .koi8r_sym = 0xD1, .cpp866_sym = 0xEF},
		{.utf8_sym = L'Ё', .koi8r_sym = 0xB3, .cpp866_sym = 0xF0},
		{.utf8_sym = L'ё', .koi8r_sym = 0xA3, .cpp866_sym = 0xF1},
		{.utf8_sym = L'°', .koi8r_sym = 0x9C, .cpp866_sym = 0xF8},
};

#ifdef __cplusplus
}
#endif

#endif /* __OLED_GUI_H */

/*****END OF FILE****/
