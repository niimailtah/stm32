/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "dma.h"
#include "spi.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdlib.h>
#include "spi_ili9341.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
extern uint16_t TFT9341_WIDTH;
extern uint16_t TFT9341_HEIGHT;
#ifdef USE_DMA
uint8_t  dma_spi_fl  = 0;
uint32_t dma_spi_cnt = 1;
#endif
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
__STATIC_INLINE void DelayMicro(uint32_t __IO micros)
{
  micros *=(SystemCoreClock/1000000)/5;
  while(micros--);
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */
  uint16_t i, j;
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_SPI1_Init();
  MX_USART2_UART_Init();
  /* USER CODE BEGIN 2 */
  TFT9341_ini(240, 320);
  TFT9341_FillScreen(TFT9341_BLACK);
  HAL_Delay(500);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
    for (i = 0; i < 20; i++)
    {
      TFT9341_FillScreen(TFT9341_RandColor());
      HAL_Delay(150);
    }
    HAL_Delay(500);
    TFT9341_FillScreen(TFT9341_BLACK);

    for (i = 0; i < 20; i++)
    {
      TFT9341_FillRect(0, 0, TFT9341_WIDTH/2-1, TFT9341_HEIGHT/2-1, TFT9341_RandColor());
      HAL_Delay(100);
      TFT9341_FillRect(TFT9341_WIDTH/2, 0, TFT9341_WIDTH-1, TFT9341_HEIGHT/2-1, TFT9341_RandColor());
      HAL_Delay(100);
      TFT9341_FillRect(0, TFT9341_HEIGHT/2, TFT9341_WIDTH/2-1, TFT9341_HEIGHT-1, TFT9341_RandColor());
      HAL_Delay(100);
      TFT9341_FillRect(TFT9341_WIDTH/2, TFT9341_HEIGHT/2, TFT9341_WIDTH-1, TFT9341_HEIGHT-1, TFT9341_RandColor());
      HAL_Delay(100);
    }
    HAL_Delay(500);
    TFT9341_FillScreen(TFT9341_BLACK);
    for (i = 0; i < 1000; i++)
    {
      TFT9341_FillRect(rand()%TFT9341_WIDTH, rand()%TFT9341_HEIGHT,
			  rand()%TFT9341_WIDTH, rand()%TFT9341_HEIGHT,
              TFT9341_RandColor());
      HAL_Delay(10);
    }
    HAL_Delay(500);
    TFT9341_FillScreen(TFT9341_BLACK);

    for (i = 0; i < 15000; i++)
    {
      for (j = 0; j < 100; j++)
      {
        TFT9341_DrawPixel(rand()%TFT9341_WIDTH,
        		rand()%TFT9341_HEIGHT,
				TFT9341_BLACK);
      }
      TFT9341_DrawPixel(rand()%TFT9341_WIDTH,
    		  rand()%TFT9341_HEIGHT,
			  TFT9341_RandColor());
      DelayMicro(100);
    }
    HAL_Delay(500);
    TFT9341_FillScreen(TFT9341_BLACK);

    for (j = 0; j  < 20; j++)
    {
      for (i = 0; i < TFT9341_WIDTH; i++)
      {
        TFT9341_DrawLine(TFT9341_RandColor(), i, 0, i, TFT9341_HEIGHT-1);
      }
    }
    HAL_Delay(500);
    TFT9341_FillScreen(TFT9341_BLACK);

    for (i = 0; i < 1000; i++)
    {
      TFT9341_DrawLine(TFT9341_RandColor(),
                      rand()%TFT9341_WIDTH,
					  rand()%TFT9341_HEIGHT,
					  rand()%TFT9341_WIDTH,
					  rand()%TFT9341_HEIGHT);
      HAL_Delay(10);
    }
    HAL_Delay(500);
    TFT9341_FillScreen(TFT9341_BLACK);

    for (j = 0; j < 20; j++)
    {
      for(i=0;i<TFT9341_WIDTH/2;i++)
      {
        TFT9341_DrawRect(TFT9341_RandColor(), i, i, TFT9341_WIDTH-i-1, TFT9341_HEIGHT-i-1);
      }
    }
    HAL_Delay(500);
    TFT9341_FillScreen(TFT9341_BLACK);

    for (i = 0; i < 2000; i++)
    {
      TFT9341_DrawCircle(rand()%(TFT9341_WIDTH - 40) + 20,
    		  rand()%(TFT9341_HEIGHT - 40) + 20,
			  20, TFT9341_RandColor());
      HAL_Delay(3);
    }
    HAL_Delay(500);
    TFT9341_FillScreen(TFT9341_BLACK);

    TFT9341_SetTextColor(TFT9341_YELLOW);
    TFT9341_SetBackColor(TFT9341_BLUE);
    TFT9341_SetFont(&Font24);
    TFT9341_DrawChar(10,10,'S');
    TFT9341_DrawChar(27,10,('t'));
    TFT9341_DrawChar(44,10,('m'));
    TFT9341_DrawChar(61,10,('3'));
    TFT9341_DrawChar(78,10,('2'));
    TFT9341_SetTextColor(TFT9341_GREEN);
    TFT9341_SetBackColor(TFT9341_RED);
    TFT9341_SetFont(&Font20);
    TFT9341_DrawChar(10,34,('S'));
    TFT9341_DrawChar(24,34,('t'));
    TFT9341_DrawChar(38,34,('m'));
    TFT9341_DrawChar(52,34,('3'));
    TFT9341_DrawChar(66,34,('2'));
    TFT9341_SetTextColor(TFT9341_BLUE);
    TFT9341_SetBackColor(TFT9341_YELLOW);
    TFT9341_SetFont(&Font16);
    TFT9341_DrawChar(10,54,('S'));
    TFT9341_DrawChar(21,54,('t'));
    TFT9341_DrawChar(32,54,('m'));
    TFT9341_DrawChar(43,54,('3'));
    TFT9341_DrawChar(54,54,('2'));
    TFT9341_SetTextColor(TFT9341_CYAN);
    TFT9341_SetBackColor(TFT9341_BLACK);
    TFT9341_SetFont(&Font12);
    TFT9341_DrawChar(10,70,('S'));
    TFT9341_DrawChar(17,70,('t'));
    TFT9341_DrawChar(24,70,('m'));
    TFT9341_DrawChar(31,70,('3'));
    TFT9341_DrawChar(38,70,('2'));
    TFT9341_SetTextColor(TFT9341_RED);
    TFT9341_SetBackColor(TFT9341_GREEN);
    TFT9341_SetFont(&Font8);
    TFT9341_DrawChar(10,82,('S'));
    TFT9341_DrawChar(15,82,('t'));
    TFT9341_DrawChar(20,82,('m'));
    TFT9341_DrawChar(25,82,('3'));
    TFT9341_DrawChar(30,82,('2'));
    TFT9341_SetTextColor(TFT9341_YELLOW);
    TFT9341_SetBackColor(TFT9341_BLUE);
    HAL_Delay(2000);
    TFT9341_FillScreen(TFT9341_BLACK);

	for (i = 0; i < 16; i++)
	{
	  TFT9341_SetRotation(i%4);
	  TFT9341_SetFont(&Font24);
	  TFT9341_FillScreen(TFT9341_BLACK);
	  TFT9341_String(1,100,"ABCDEF12345678");
	  TFT9341_SetFont(&Font20);
	  TFT9341_String(1,124,"ABCDEFGHI12345678");
	  TFT9341_SetFont(&Font16);
	  TFT9341_String(1,144,"ABCDEFGHIKL123456789");
	  TFT9341_SetFont(&Font12);
	  TFT9341_String(1,160,"ABCDEFGHIKLMNOPQRSTUVWXY 123456789");
	  TFT9341_SetFont(&Font8);
	  TFT9341_String(1,172,"ABCDEFGHIKLMNOPQRSTUVWXYZ 123456789ABCDEFGHIKL");
	  HAL_Delay(2000);
	}
	HAL_Delay(10000);
	TFT9341_SetRotation(0);
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 16;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV4;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */
#ifdef USE_DMA
void HAL_SPI_TxCpltCallback(SPI_HandleTypeDef *hspi)
{
  if (hspi == &hspi1)
  {
    dma_spi_cnt--;
    if (dma_spi_cnt == 0)
    {
      HAL_SPI_DMAStop(&hspi1);
      dma_spi_cnt = 1;
      dma_spi_fl  = 1;
    }
  }
}
#endif
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}
#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
