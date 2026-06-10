/*
  ******************************************************************************
  * @file    screen.h
  * @brief   Header for screen.c file
  ******************************************************************************
  */

#ifndef __OLED_SCREEN_H
#define __OLED_SCREEN_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdbool.h>
#include <stdint.h>

 /* Typedefs ------------------------------------------------------------------*/
 typedef enum RefPoint_e
 {
  	AbsRef,
  	IncRef,
 } RefPoint_e;

 /* Function prototypes -------------------------------------------------------*/
void OLED_DrawMainScreen(void);
void OLED_DrawZeroSettingCoundownScreen(void);
void OLED_DrawZeroSettingScreen1(void);
void OLED_DrawZeroSettingScreen2(void);
void OLED_DrawZeroSettingScreen3(void);
void OLED_DrawZeroSettingScreen4(void);
void OLED_DrawSettingsScreen(void);
void OLED_DrawInfoScreen(void);
void OLED_DrawSeviceScreen(void);
void OLED_DrawScreen(void);

extern volatile int8_t _angle_value; // значение угла
extern volatile int8_t _x_angle_value; // значение продольного угла
extern volatile int8_t _y_angle_value; // значение поперечного угла
extern volatile int8_t _x_angle_grads_value; // значение угла (градусы)
extern volatile int8_t _x_angle_minutes_value; // значение угла (минуты)
extern volatile int8_t _x_angle_seconds_value; // значение угла (секунды)
extern volatile double _correction_factor; // корректирующий коэффициент для продольной шкалы
extern volatile bool _is_countdown_active; // флаг активности счетчика обратного отчсета
extern volatile bool _is_bluetooth_connected;  // флаг соединения Bluetooth
extern volatile RefPoint_e _current_ref_point; // метода отсчета (абсолютный/AbsRef или относительный/IncRef)
extern volatile int8_t _angle_mode; // режим отображения (мм/м\0 или °/'/"\1)
extern volatile uint8_t _charge_percent; // значение заряда батареи

#ifdef __cplusplus
}
#endif

#endif /* __OLED_SCREEN_H */

/*****END OF FILE****/
