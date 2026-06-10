/**
  ******************************************************************************
  * @file           : button.h
  * @brief          : Buttons driver
  * @author         : TQFP (for https://microtechnics.ru/user-blogs/)
  ******************************************************************************
  */

#ifndef __BUTTON_H
#define __BUTTON_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Declarations and definitions ----------------------------------------------*/

// Configuration

#define GPIO_BUTTON_NOT_PRESSED                              (GPIO_PIN_RESET)

#define BUTTONS_LONG_PRESS_MS                                500
#define BUTTONS_VERY_LONG_PRESS_MS                           3000

typedef enum {
    BUTTON_ESC,
    BUTTON_OK,
    BUTTON_NEXT,
    BUTTONS_NUM,
} ButtonID;

// End of configuration

#define DEBOUNCE_TIME_MS                                     100
#define GPIO_BUTTON_PRESSED                                  (!GPIO_BUTTON_NOT_PRESSED)

typedef struct
{
  GPIO_TypeDef *port;
  uint16_t pin;
} McuPin;

typedef enum
{
  BUTTON_STARTING                      = 0,
  BUTTON_NOT_PRESSED                   = 1,
  BUTTON_WAIT_DEBOUNCE                 = 2,
  BUTTON_PRESSED                       = 3,
} ButtonState;

typedef enum
{
  BUTTON_NONE                          = 0,
  BUTTON_SHORT_PRESS                   = 1,
  BUTTON_LONG_PRESS                    = 2,
  BUTTON_VERY_LONG_PRESS               = 3,
} ButtonAction;

/* Functions -----------------------------------------------------------------*/
void BUTTON_Process();
void BUTTON_TimerProcess();
ButtonAction BUTTON_GetAction(uint8_t index);
void BUTTON_ResetActions();
void BUTTON_Init();

#ifdef __cplusplus
}
#endif

#endif // __BUTTON_H
