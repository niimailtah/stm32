/**
  ******************************************************************************
  * @file    test.h
  * @brief   Header for test.c file
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __TEST_H
#define __TEST_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

 void test_OLED_DrawPoint(void);
 void test_OLED_DrawLine(void);
 void test_OLED_DrawPattern(void);
 void test_OLED_DrawRect(void);
 void test_OLED_DrawRoundRect(void);
 void test_OLED_DrawArc(void);
 void test_OLED_DrawCircle(void);
 void test_OLED_DrawText(void);
 void test_OLED_DrawTerminusText(void);
 void test_OLED_DrawMainScreen(void);
 void test_OLED_Ranges(void);

#ifdef __cplusplus
}
#endif
  
#endif /* __TEST_H */

/*****END OF FILE****/
