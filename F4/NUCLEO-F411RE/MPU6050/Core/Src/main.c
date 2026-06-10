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
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include <string.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define SR2_BUSY	(1U<<1)
#define CR1_START	(1U<<8)
#define SR1_SB		(1U<<0)
#define SR1_ADDR	(1U<<1)
#define SR1_TXE		(1U<<7)
#define CR1_ACK		(1U<<10)
#define CR1_STOP	(1U<<9)
#define SR1_RXNE	(1U<<6)
#define SR1_BTF		(1U<<2)
/*
* PB8 ----- SCL
* PB9 ----- SDA
* */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
// массив данных
// [accX, accY, accZ, temp, gyrX, gyrY, gyrZ]
// acc - ускорение, gyr - угловая скорость, temp - температура (raw)
int16_t data[7];
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */
int I2C1_byteRead(char saddr, char maddr, uint8_t* data);
int I2C1_byteWrite(char saddr, char maddr, uint8_t* data);

void i2c1_byte_read(char saddr, char maddr, char* data);
void i2c1_burst_read(char saddr, char maddr, int n, char* data);
void i2c1_burst_write(char saddr, char maddr, int n, char* data);
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
const int MPU_addr = 0x68; // адрес датчика
#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif

PUTCHAR_PROTOTYPE
{
	HAL_UART_Transmit(&huart2, (uint8_t*)&ch, 1, HAL_MAX_DELAY);
	return ch;
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

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
  MX_I2C1_Init();
  MX_USART2_UART_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

#define PWR_MGMT_1_REG    0x6B
#define SMPLRT_DIV_REG    0x19
#define ACCEL_CONFIG_REG  0x1C
#define ACCEL_XOUT_H_REG  0x3B
#define ACCEL_YOUT_H_REG  0x3D
#define ACCEL_ZOUT_H_REG  0x3F
#define TEMP_OUT_H_REG    0x41
#define GYRO_CONFIG_REG   0x1B
#define GYRO_XOUT_H_REG   0x43
#define GYRO_YOUT_H_REG   0x45
#define GYRO_ZOUT_H_REG   0X47

	uint8_t Configure=0;
	I2C1_byteWrite(MPU_addr,PWR_MGMT_1_REG, &Configure);
	Configure=0x7;
	I2C1_byteWrite(MPU_addr,SMPLRT_DIV_REG, &Configure);
	Configure=0x00;
	I2C1_byteWrite(MPU_addr,ACCEL_CONFIG_REG,&Configure);
	Configure=0x00;
	I2C1_byteWrite(MPU_addr,GYRO_CONFIG_REG, &Configure);

  uint8_t temp_data = 0b000001000;
  HAL_StatusTypeDef ret;
//  ret = HAL_I2C_Mem_Write(&hi2c1, MPU_addr << 1, 27, 1, &temp_data, 1, 100);
//  if (ret == HAL_OK)
//  {
//	  printf("Configuring gyroscope\r\n");
//  }
//  else
//  {
//	  printf("Failed to configure gyroscope\r\n");
//  }
//
//  temp_data = 0b000001000;
//  ret = HAL_I2C_Mem_Write(&hi2c1, MPU_addr << 1, 28, 1, &temp_data, 1, 100);
//  if (ret == HAL_OK)
//  {
//	  printf("Configuring accelerometer\r\n");
//  }
//  else
//  {
//	  printf("Failed to configure acceleromter\r\n");
//  }
//
//    temp_data = 0;
//    ret = HAL_I2C_Mem_Write(&hi2c1, MPU_addr << 1, 107, 1, &temp_data, 1, 100);
//    if (ret == HAL_OK)
//    {
//  	  printf("Exiting from sleep mode\r\n");
//    }
//    else
//    {
//  	  printf("Failed to exit from sleep mode\r\n");
//    }

    uint8_t raw_data[14];
  while (1)
  {
	  HAL_I2C_Mem_Read(&hi2c1, (MPU_addr << 1) + 1, 59, 1, raw_data, 14, 100);
	  for (uint8_t i = 0; i < 7; ++i)
	  {
		  data[i] = ((int16_t)raw_data[i * 2] << 8) | (int16_t)raw_data[i * 2 + 1];
	  }
	  printf("Sensor data: \t%d\t%d\t%d\t%d\t%d\t%d\t%d\r\n",
			  data[0], data[1], data[2], data[3], data[4], data[5], data[6]);
	  HAL_Delay(200);
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
// from book, not working
void i2c1_byte_read(char saddr, char maddr, char* data) {
	volatile int tmp;

	/* Wait until bus not busy */
	while (I2C1->SR2 & (SR2_BUSY)){}

	/* Generate start */
	I2C1->CR1 |= CR1_START;

	/* Wait until start flag is set */
	while (!(I2C1->SR1 & (SR1_SB))){}

	/* Transmit slave address + Write */
	I2C1->DR = saddr << 1;

	/* Wait until addr flag is set */
	while (!(I2C1->SR1 & (SR1_ADDR))){}

	/* Clear addr flag */
	tmp = I2C1->SR2;

	/* Send memory address */
	I2C1->DR = maddr;

	/*Wait until transmitter empty */
	while (!(I2C1->SR1 & SR1_TXE)){}

	/*Generate restart */
	I2C1->CR1 |= CR1_START;

	/* Wait until start flag is set */
	while (!(I2C1->SR1 & SR1_SB)){}

	/* Transmit slave address + Read */
	I2C1->DR = saddr << 1 | 1;

	/* Wait until addr flag is set */
	while (!(I2C1->SR1 & (SR1_ADDR))){}

	/* Disable Acknowledge */
	I2C1->CR1 &= ~CR1_ACK;

	/* Clear addr flag */
	tmp = I2C1->SR2;

	/* Generate stop after data received */
	I2C1->CR1 |= CR1_STOP;

	/* Wait until RXNE flag is set */
	while (!(I2C1->SR1 & SR1_RXNE)){}

	/* Read data from DR */
	*data++ = I2C1->DR;
}


// from book, not working
void i2c1_burst_write(char saddr, char maddr, int n, char* data) {
	volatile int tmp;

	/* Wait until bus not busy */
	while (I2C1->SR2 & (SR2_BUSY)){}

	/* Generate start */
	I2C1->CR1 |= CR1_START;

	/* Wait until start flag is set */
	while (!(I2C1->SR1 & (SR1_SB))){}

	/* Transmit slave address */
	I2C1->DR = saddr << 1;

	/* Wait until addr flag is set */
	while (!(I2C1->SR1 & (SR1_ADDR))){}

	/* Clear addr flag */
	tmp = I2C1->SR2;

	/* Wait until data register empty */
	while (!(I2C1->SR1 & (SR1_TXE))){}

	/* Send memory address */
	I2C1->DR = maddr;

	for (int i = 0; i < n; i++) {
		/* Wait until data register empty */
		while (!(I2C1->SR1 & (SR1_TXE))){}

		/* Transmit memory address */
		I2C1->DR = *data++;
	}

	/* Wait until transfer finished */
	while (!(I2C1->SR1 & (SR1_BTF))){}

	/* Generate stop */
	I2C1->CR1 |= CR1_STOP;
}



// it works!
// https://github.com/ENG-EDISON/STM32_I2C1_I2C2_USART2_MPU6050_BareMetal
int I2C1_byteRead(char saddr, char maddr,uint8_t* data)
{
	volatile uint32_t tmp=0;
	while (I2C1->SR2 & I2C_SR2_BUSY);       /* wait until bus not busy */
	I2C1->CR1 |= I2C_CR1_START;             /* generate start */
	while (!(I2C1->SR1 & I2C_SR1_SB));      /* wait until start flag is set */
	I2C1->DR = (uint8_t)saddr<<1;           /* transmit slave address + Write */
	while (!(I2C1->SR1 & I2C_SR1_ADDR));    /* wait until addr flag is set */
	tmp = I2C1->SR1;                				/* clear addr flag */
	tmp = I2C1->SR2;
	while (!(I2C1->SR1 & I2C_SR1_TXE));   	/* wait until data register empty */
	I2C1->DR = maddr;               				/* send memory address */
	while (!(I2C1->SR1 & I2C_SR1_TXE));    	/* wait until data register empty */
	I2C1->CR1 |= 0x100;             				/* generate restart */
	while (!(I2C1->SR1 & I2C_SR1_SB));      /* wait until start flag is set */
	I2C1->DR =(uint8_t)(saddr<< 1|0x1);     /*transmit slave address + Read */
	while (!(I2C1->SR1 & I2C_SR1_ADDR));    /* wait until addr flag is set */
	I2C1->CR1 &= ~I2C_CR1_ACK;            	/* Disable Acknowledge */
	tmp = I2C1->SR1;                				/* clear addr flag */
	tmp = I2C1->SR2;                				/* clear addr flag */
	while (!(I2C1->SR1 & I2C_SR1_RXNE));    /* Wait until RXNE flag is set */
	I2C1->CR1 |= I2C_CR1_STOP;            	/* generate stop after data received */
	*data++ = (uint8_t)I2C1->DR;            /* Read data from DR */
	return 0;
}

// it works!
// https://github.com/ENG-EDISON/STM32_I2C1_I2C2_USART2_MPU6050_BareMetal
int I2C1_byteWrite(char saddr, char maddr, uint8_t* data)
{
	volatile int tmp=0;
	while (I2C1->SR2 & I2C_SR2_BUSY);      /* wait until bus not busy */
	I2C1->CR1 |= 0x100; 										/* generate start */
	while (!(I2C1->SR1 & 1));/* wait until start flag is set */
	I2C1->DR = saddr << 1; /* transmit slave address */
	while(!(I2C1->SR1 & 2)); /* wait until addr flag is set */
	tmp = I2C1->SR2; /*clear addr flag */
	while (!(I2C1->SR1 & 0x80)); /* wait until data register empty */
	I2C1->DR = maddr; /* send memory address */
	while (!(I2C1->SR1 & 0x80)); /* wait until data register empty */
	I2C1->DR = *data; /* transmit data */
	while (!(I2C1->SR1 & 4)); /* wait until transfer finished */
	I2C1->CR1 |= 0x200; /* generate stop */
	return 0;
}
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
