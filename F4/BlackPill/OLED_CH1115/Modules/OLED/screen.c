/**
  ******************************************************************************
  * @file    screen.c
  * @brief   This file provides drawing screens on LCD display.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include <wchar.h>
#include <stdlib.h>
#include <string.h>
#include "screen.h"
#include "main.h"
#include "gui.h"


volatile int8_t _angle_value = 0; // значение угла
volatile int8_t _x_angle_value = 0; // значение продольного угла
volatile int8_t _y_angle_value = 0; // значение поперечного угла
volatile int8_t _x_angle_grads_value = 0; // значение угла (градусы)
volatile int8_t _x_angle_minutes_value  = 0; // значение угла (минуты)
volatile int8_t _x_angle_seconds_value  = 0; // значение угла (секунды)
volatile double _correction_factor = 1.0; // корректирующий коэффициент
volatile bool _is_countdown_active = false; // флаг активности счетчика обратного отчсета
volatile bool _is_bluetooth_connected = true;  // флаг соединения Bluetooth
volatile RefPoint_e _current_ref_point = AbsRef; // метода отсчета (абсолютный/AbsRef или относительный/IncRef)
volatile int8_t _angle_mode = 1; // режим отображения (мм/м\0 или °/'/"\1)
volatile uint8_t _charge_percent = 50;


/**
  * @brief Отрисовка главного экрана
  */
void OLED_DrawMainScreen()
{
//	uint8_t x_offset = 10;
	uint8_t y_offset = 10;
	wchar_t ref_point_abs_text[3] = L"ABS";
	wchar_t ref_point_inc_text[3] = L"INC";
	wchar_t *ref_point = ref_point_abs_text;

	OLED_DrawBattary(_charge_percent);
	OLED_DrawBTSign(_is_bluetooth_connected);

	switch (_current_ref_point)
	{
	case AbsRef:
		ref_point = ref_point_abs_text;
		break;
	case IncRef:
		ref_point = ref_point_inc_text;
		break;
	default:
		break;
	}
	OLED_DrawRect(30, 0, 24, 8, OLED_Color_Black);
	OLED_DrawConsole8Char(.x=30, .y=0, .sym=utf8_to_cp866(ref_point[0]));
	OLED_DrawConsole8Char(.x=38, .y=0, .sym=utf8_to_cp866(ref_point[1]));
	OLED_DrawConsole8Char(.x=46, .y=0, .sym=utf8_to_cp866(ref_point[2]));

	switch (_angle_mode)
	{
	case 0:
		OLED_DrawRect(28, y_offset, 104, 22, OLED_Color_Black);
		OLED_DrawTerminus24Char(.x=28, .y=y_offset, .sym=utf8_to_koi8r(L'0'), .style=OLED_Font_Bold);
		OLED_DrawTerminus24Char(.x=40, .y=y_offset, .sym=utf8_to_koi8r(L','), .style=OLED_Font_Bold);
		OLED_DrawTerminus24Char(.x=52, .y=y_offset, .sym=utf8_to_koi8r(L'0'), .style=OLED_Font_Bold);
		OLED_DrawTerminus24Char(.x=68, .y=y_offset, .sym=0x30 + abs(_angle_value), .style=OLED_Font_Bold); //  '0' + i
		OLED_DrawTerminus16Char(.x=90, .y=y_offset + 6, .sym=utf8_to_koi8r(L'м'));
		OLED_DrawTerminus16Char(.x=98, .y=y_offset + 6, .sym=utf8_to_koi8r(L'м'));
		OLED_DrawTerminus16Char(.x=106, .y=y_offset + 6, .sym=utf8_to_koi8r(L'/'));
		OLED_DrawTerminus16Char(.x=114, .y=y_offset + 6, .sym=utf8_to_koi8r(L'м'));
		break;
	case 1:
	default:
		{
//			_x_angle_grads_value = 5;
//			_x_angle_minutes_value = 43;
//			_x_angle_seconds_value = 21;
			int8_t grad = _x_angle_grads_value;
			int8_t min_dec = _x_angle_minutes_value / 10;
			int8_t min_unit = _x_angle_minutes_value % 10;
			int8_t sec_dec = _x_angle_seconds_value / 10;
			int8_t sec_unit = _x_angle_seconds_value % 10;
			OLED_DrawRect(28, y_offset, 104, 22, OLED_Color_Black);
			OLED_DrawTerminus24Char(.x=28, .y=y_offset, .sym=0x30 + grad, .style=OLED_Font_Bold);
			OLED_DrawTerminus24Char(.x=40, .y=y_offset, .sym=utf8_to_koi8r(L'°'), .style=OLED_Font_Bold);
			OLED_DrawTerminus24Char(.x=52, .y=y_offset, .sym=0x30 + min_dec, .style=OLED_Font_Bold);
			OLED_DrawTerminus24Char(.x=64, .y=y_offset, .sym=0x30 + min_unit, .style=OLED_Font_Bold);
			OLED_DrawTerminus24Char(.x=76, .y=y_offset, .sym=utf8_to_koi8r(L'\''), .style=OLED_Font_Bold);
			OLED_DrawTerminus24Char(.x=88, .y=y_offset, .sym=0x30 + sec_dec, .style=OLED_Font_Bold);
			OLED_DrawTerminus24Char(.x=100, .y=y_offset, .sym=0x30 + sec_unit, .style=OLED_Font_Bold);
			OLED_DrawTerminus24Char(.x=112, .y=y_offset, .sym=utf8_to_koi8r(L'"'), .style=OLED_Font_Bold);
		}
		break;
	}

	OLED_DrawXColba(_x_angle_value);
	OLED_DrawYColba(_y_angle_value);

	OLED_RefreshScreen();

	return;
}

/**
  * @brief Отрисовка экрана установки нуля. Экран обратного отсчета
  */
void OLED_DrawZeroSettingCoundownScreen()
{
	OLED_DrawCircle(.x=64, .y=32, .radius=16, .color=OLED_Color_White);
	OLED_DrawCircle(.x=64, .y=32, .radius=15, .color=OLED_Color_Black);
	for (volatile int i = 3; i > 0; --i)
	{
		OLED_DrawCircle(.x=64, .y=32, .radius=15, .color=OLED_Color_Black);
		OLED_DrawTerminus24Char(.x=54, .y=20, .sym=utf8_to_koi8r('0' + i), .style=OLED_Font_Bold);
		OLED_RefreshScreen();
		HAL_Delay(1000);
	}

	return;
}

/**
  * @brief Отрисовка экрана установки нуля. Экран 1
  */
void OLED_DrawZeroSettingScreen1()
{
	uint8_t x_offset = 0;
	uint8_t y_offset = 0;
	uint8_t width = 127;
	uint8_t height = 63;
	uint8_t radius = 8;
	wchar_t caption[] = L"УСТАНОВКА НУЛЯ";
	wchar_t instr01[] = L"Для начала";
	wchar_t instr02[] = L"нажмите Ok";

	OLED_DrawRoundRect(x_offset, y_offset, width, height, radius, OLED_Color_White);
	OLED_DrawRoundRect(x_offset + 1, y_offset + 1, width - 2, height - 2, radius, OLED_Color_Black);
	OLED_DrawLine(.x1=x_offset + 6, .y1=y_offset + 20, .x2=x_offset + 122, .y2=y_offset + 20);
	for (volatile int i = 0; i < wcslen(caption); ++i)
	{
		OLED_DrawTerminus16Char(.x=x_offset + i * 8 + 7, .y=y_offset + 4, .sym=utf8_to_koi8r(caption[i]), .style=OLED_Font_Bold);
	}
	for (volatile int i = 0; i < wcslen(instr01); ++i)
	{
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 22, .sym=utf8_to_cp866(instr01[i]));
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 30, .sym=utf8_to_cp866(instr02[i]));
	}
	OLED_RefreshScreen();

	return;
}

/**
  * @brief Отрисовка экрана установки нуля. Экран 2
  */
void OLED_DrawZeroSettingScreen2()
{
	uint8_t x_offset = 0;
	uint8_t y_offset = 0;
	uint8_t width = 127;
	uint8_t height = 63;
	uint8_t radius = 8;
	wchar_t caption[] = L"УСТАНОВКА НУЛЯ";
	wchar_t instr01[] = L"Установите на";
	wchar_t instr02[] = L"ровную       ";
	wchar_t instr03[] = L"поверхнсть и ";
	wchar_t instr04[] = L"нажмите Ok   ";

	OLED_DrawRoundRect(x_offset, y_offset, width, height, radius, OLED_Color_White);
	OLED_DrawRoundRect(x_offset + 1, y_offset + 1, width - 2, height - 2, radius, OLED_Color_Black);
	OLED_DrawLine(.x1=x_offset + 6, .y1=y_offset + 20, .x2=x_offset + 122, .y2=y_offset + 20);
	for (volatile int i = 0; i < wcslen(caption); ++i)
	{
		OLED_DrawTerminus16Char(.x=x_offset + i * 8 + 7, .y=y_offset + 4, .sym=utf8_to_koi8r(caption[i]), .style=OLED_Font_Bold);
	}
	for (volatile int i = 0; i < wcslen(instr01); ++i)
	{
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 22, .sym=utf8_to_cp866(instr01[i]));
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 30, .sym=utf8_to_cp866(instr02[i]));
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 38, .sym=utf8_to_cp866(instr03[i]));
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 46, .sym=utf8_to_cp866(instr04[i]));
	}
	OLED_RefreshScreen();

	return;
}

/**
  * @brief Отрисовка экрана установки нуля. Экран 3
  */
void OLED_DrawZeroSettingScreen3()
{
	uint8_t x_offset = 0;
	uint8_t y_offset = 0;
	uint8_t width = 127;
	uint8_t height = 63;
	uint8_t radius = 8;
	wchar_t caption[] = L"УСТАНОВКА НУЛЯ";
	wchar_t instr01[] = L"Переверните и";
	wchar_t instr02[] = L"нажмите Ok   ";

	OLED_DrawRoundRect(x_offset, y_offset, width, height, radius, OLED_Color_White);
	OLED_DrawRoundRect(x_offset + 1, y_offset + 1, width - 2, height - 2, radius, OLED_Color_Black);
	OLED_DrawLine(.x1=x_offset + 6, .y1=y_offset + 20, .x2=x_offset + 122, .y2=y_offset + 20);
	for (volatile int i = 0; i < wcslen(caption); ++i)
	{
		OLED_DrawTerminus16Char(.x=x_offset + i * 8 + 7, .y=y_offset + 4, .sym=utf8_to_koi8r(caption[i]), .style=OLED_Font_Bold);
	}
	for (volatile int i = 0; i < wcslen(instr01); ++i)
	{
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 22, .sym=utf8_to_cp866(instr01[i]));
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 30, .sym=utf8_to_cp866(instr02[i]));
	}
	OLED_RefreshScreen();

	return;
}

/**
  * @brief Отрисовка экрана установки нуля. Экран 4
  */
void OLED_DrawZeroSettingScreen4()
{
	uint8_t x_offset = 0;
	uint8_t y_offset = 0;
	uint8_t width = 127;
	uint8_t height = 63;
	uint8_t radius = 8;
	wchar_t caption[] = L"УСТАНОВКА НУЛЯ";
	wchar_t instr01[] = L"Установка нуля";
	wchar_t instr02[] = L"завершина     ";

	OLED_DrawRoundRect(x_offset, y_offset, width, height, radius, OLED_Color_White);
	OLED_DrawRoundRect(x_offset + 1, y_offset + 1, width - 2, height - 2, radius, OLED_Color_Black);
	OLED_DrawLine(.x1=x_offset + 6, .y1=y_offset + 20, .x2=x_offset + 122, .y2=y_offset + 20);
	for (volatile int i = 0; i < wcslen(caption); ++i)
	{
		OLED_DrawTerminus16Char(.x=x_offset + i * 8 + 7, .y=y_offset + 4, .sym=utf8_to_koi8r(caption[i]), .style=OLED_Font_Bold);
	}
	for (volatile int i = 0; i < wcslen(instr01); ++i)
	{
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 22, .sym=utf8_to_cp866(instr01[i]));
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 30, .sym=utf8_to_cp866(instr02[i]));
	}
	OLED_RefreshScreen();

	return;
}

/**
  * @brief Отрисовка экрана настроек
  */
void OLED_DrawSettingsScreen()
{
	uint8_t x_offset = 0;
	uint8_t y_offset = 0;
	uint8_t radius = 8;
	uint8_t width = 127;
	uint8_t height = 63;
	wchar_t caption[] = L"НАСТРОЙКИ";
	wchar_t out_mode_label[]  = L"Вид шкалы: "; // мм/м || °'"
	wchar_t zero_mode_label[] = L"Режим нуля:"; // ABS || INC
	wchar_t bt_label[] =        L"Bluetooth: "; // Вкл || Выкл
	wchar_t timeout_label[] =   L"Автооткл.: "; // 5 мин || 10 мин || Выкл

	OLED_DrawRoundRect(x_offset, y_offset, width, height, radius, OLED_Color_White);
	OLED_DrawRoundRect(x_offset + 1, y_offset + 1, width - 2, height - 2, radius, OLED_Color_Black);
	for (volatile int i = 0; i < wcslen(caption); ++i)
	{
		OLED_DrawTerminus16Char(.x=x_offset + i * 8 + 7, .y=y_offset + 4, .sym=utf8_to_koi8r(caption[i]), .style=OLED_Font_Bold);
	}
	OLED_DrawLine(.x1=x_offset + 6, .y1=y_offset + 20, .x2=x_offset + 122, .y2=y_offset + 20);
	for (volatile int i = 0; i < wcslen(out_mode_label); ++i)
	{
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 22, .sym=utf8_to_cp866(out_mode_label[i]));
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 30, .sym=utf8_to_cp866(zero_mode_label[i]));
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 38, .sym=utf8_to_cp866(bt_label[i]));
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 46, .sym=utf8_to_cp866(timeout_label[i]));
	}
	OLED_RefreshScreen();

	return;
}

/**
  * @brief Отрисовка экрана информации
  */
void OLED_DrawInfoScreen()
{
	uint8_t x_offset = 0;
	uint8_t y_offset = 0;
	uint8_t width = 127;
	uint8_t height = 63;
	uint8_t radius = 8;

	OLED_DrawRoundRect(x_offset, y_offset, width, height, radius, OLED_Color_White);
	OLED_DrawRoundRect(x_offset + 1, y_offset + 1, width - 2, height - 2, radius, OLED_Color_Black);
	wchar_t model_str_utf8[] =   L"Модель 100-0.02";
	wchar_t sn_str_utf8[] =      L"SN   0123456789";
	wchar_t date_str_utf8[] =    L"Дата 2026-01-01";
	wchar_t version_str_utf8[] = L"Версия  v.1.0.0";
	wchar_t prec_str_utf8[] =    L"Шаг   0.01 мм/м";
	for (volatile int i = 0; i < wcslen(model_str_utf8); ++i)
	{
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 6,  .sym=utf8_to_cp866(model_str_utf8[i]));
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 16, .sym=utf8_to_cp866(sn_str_utf8[i]));
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 26, .sym=utf8_to_cp866(date_str_utf8[i]));
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 36, .sym=utf8_to_cp866(version_str_utf8[i]));
		OLED_DrawConsole8Char(.x=x_offset + i * 8 + 4, .y=y_offset + 46, .sym=utf8_to_cp866(prec_str_utf8[i]));
	}
	OLED_RefreshScreen();

	return;
}

/**
  * @brief Отрисовка сервисного экрана
  */
void OLED_DrawSeviceScreen()
{
	uint8_t x_offset = 0;
	uint8_t y_offset = 0;
	uint8_t width = 127;
	uint8_t height = 63;
	uint8_t radius = 8;
	wchar_t factor_str_utf8[] = L"Коэф.:";
	char factor_str_value[5] = {0,};

	OLED_DrawRoundRect(x_offset, y_offset, width, height, radius, OLED_Color_White);
	OLED_DrawRoundRect(x_offset + 1, y_offset + 1, width - 2, height - 2, radius, OLED_Color_Black);
	// Коэффициент сжатия/растяжения
	sprintf(factor_str_value, "%4.2lf", _correction_factor);
	for (volatile int i = 0; i < wcslen(factor_str_utf8); ++i)
	{
		OLED_DrawConsole8Char(.x=x_offset + 8 + i * 8, .y=y_offset + 6, .sym=utf8_to_cp866(factor_str_utf8[i]));
	}
	for (volatile int i = 0; i < strlen(factor_str_value); ++i)
	{
		OLED_DrawConsole8Char(.x=x_offset + 60 + i * 8 + 4, .y=y_offset + 6, .sym=factor_str_value[i]);
	}
	OLED_RefreshScreen();

	return;
}


/*****END OF FILE****/
