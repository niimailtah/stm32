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
#include "i2c.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include "BMPXX80.h"
#include "delays.h"
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
float temperature, huminidity;
int32_t pressure;
uint8_t Buffer[25] = {0};
uint8_t Space[] = " -- ";
uint8_t NewLine[] = "\r\n";
uint8_t StartMSG[] = "Starting I2C Scanning: \r\n";
uint8_t EndMSG[] = "\r\n ------ Done! ----- \r\n\r\n";

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */
#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif

PUTCHAR_PROTOTYPE
{
  HAL_UART_Transmit(&huart1, (uint8_t *)&ch, 1, HAL_MAX_DELAY);
  return ch;
}
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */
    // определяем где выполняется программа, и корректируем расположение таблицы векторов
    uint32_t retPCasm(void); // небольшая функция для определения где выполняется программа в FLASH или RAM
    if ((retPCasm() & 0x20000000) != 0)
    {
        SCB->VTOR = 0x20000000; /* FlagDebugInRAM=1;*/
    }


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
  MX_I2C2_Init();
  MX_USART1_UART_Init();
  MX_TIM1_Init();
  /* USER CODE BEGIN 2 */
  printf("Инициализация.%s", NewLine);

  HAL_TIM_Base_Start( &htim1 );

  /*-[ I2C Bus Scanning ]-*/
  uint8_t i = 0, ret, i2c_address = 0x00, mem_address = 0x00;
  printf(StartMSG);
  printf(Space);
  for (i = 1; i < 128; ++i)
  {
      if (i % 16 == 0)
      {
          printf(NewLine);
      }
      ret = HAL_I2C_IsDeviceReady(&hi2c2, (uint16_t)(i<<1), 3, 5);
      if (ret != HAL_OK) /* No ACK Received At That Address */
      {
          printf(Space);
      }
      else if(ret == HAL_OK)
      {
          printf("0x%X", i);
          if (i == 0x68 || i == 0x69) // MPU6050
          {
              i2c_address = i;
          }
          if (i == 0x53 || i == 0x1D) // ADXL345
          {
              i2c_address = i;
          }
          if (i == 0x76 || i == 0x77) // BMP180, BMP280, BME280
          {
              i2c_address = i;
              mem_address = 0xD0;
          }
      }
  }
  printf(EndMSG);
  /*--[ Scanning Done ]--*/
  uint8_t chip_address;
  HAL_I2C_Mem_Read(&hi2c2, i2c_address << 1, mem_address, 1, &chip_address, 1, 100);
  printf("chip id: 0x%X%s", chip_address, NewLine);

  // инициализация датчиков ----------------------------------------------------
    // указываем хендл i2c порта hi2c2 , также можем менять режимы ( данные в файле BMPXX0.h )
    #ifdef BMP180
        BMP180_Init( &hi2c2, BMP180_STANDARD );
    #endif

    #ifdef BMP280
        BMP280_Init( &hi2c2, BMP280_TEMPERATURE_16BIT, BMP280_STANDARD, BMP280_FORCEDMODE );
        BMP280_SetConfig( BMP280_STANDBY_MS_10, BMP280_FILTER_OFF );
    #endif

    #ifdef BME280
        BME280_Init( &hi2c2, BME280_TEMPERATURE_16BIT, BME280_PRESSURE_ULTRALOWPOWER, BME280_HUMINIDITY_STANDARD, BME280_NORMALMODE );
        BME280_SetConfig( BME280_STANDBY_MS_10, BME280_FILTER_OFF );
    #endif

    HAL_Delay(3000);

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
#ifdef BMP180
      float temperature = BMP180_ReadTemperature();
      Delay_us(500);
      int32_t pressure = BMP180_ReadPressure();
      Delay_us(500);
#endif

#ifdef BMP280
      BMP280_ReadTemperatureAndPressure(&temperature, &pressure);
#endif

#ifdef BME280
      BME280_ReadTemperatureAndPressureAndHuminidity(&temperature, &pressure, &huminidity);
#endif


#ifdef BMP180
      printf("BMP180 %s", NewLine);
#endif
#ifdef BMP280
      printf("BMP280 %s", NewLine);
#endif
#ifdef BME280
      printf("BME280 %s", NewLine);
#endif

        // °F = ( °C * 1.8000 ) + 32.00
      printf("Temp: %.2f C %s", temperature, NewLine );                    // °C
      printf("Temp: %.2f F %s", ( temperature * 1.8 ) + 32.0, NewLine );   // °F

#ifdef BME280
      // точка росы
        float dewpoint_temperature = ( 237.7 * ( ((17.27 * temperature )/(237.7 + temperature)) + logf( huminidity/100 ) ) ) / ( 17.27 - ( (( 17.27 * temperature ) / ( 237.7 + temperature )) + logf( huminidity/100 ) ) );
        printf("TT: %.2f C %s",dewpoint_temperature, NewLine);
#endif

      // 1 hPa = 1 Pa
      // 1 hPa = 1 mbar
      // 1 mmHg = 1 mbar / 1.333
      printf("Pres: %ld Pa %s", pressure, NewLine );                       //  Pa - в Паскалях
      printf("Pres: %ld hPa %s", ( pressure / 100 ), NewLine );            // hPa - в гектопаскаль
      printf("Pres: %.2f mmHg %s", (pressure / 100) / 1.333, NewLine );    // mmHg - в ​​милиметрах ртутного столба

#ifdef BME280
      printf("Hum: %.2f %% %s", huminidity, NewLine);
#endif

    printf(NewLine);
    HAL_Delay(1000);

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
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
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

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
