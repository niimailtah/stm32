/**
 * @file:      app.cpp
 * @author:    Alexey Polurotov
 * @brief:
 */

#include <cstdio>
#include "app.hpp"
#include "tim.h"
#include "spi.h"
#include "usart.h"

#include "LIS3DSH.h"
// для расчетов углов наклона датчика
//#include <math.h>
#include <cmath>

uint8_t LIS3DSH_ID = 0;			// вернет 0x3F

int16_t AccXYZ[3] = {0, };	// массив куда будем считывать данные с датчика по осям X Y Z

float roll = 0.0f;
float pitch = 0.0f;

float rollF = 0.0f;
float pitchF = 0.0f;

volatile uint8_t interrupt_flag = 0;


int8_t temperature = 0;

void App::Init()
{
	//--------------------------------------------------------------------------------------------
	// читаем ID датчика ( должен вернуть I_AM_LIS3DSH -> 0x3f )
	LIS3DSH_ID = LIS3DSH_ReadID();

	// проверяем увидели ли датчик
	if( I_AM_LIS3DSH == LIS3DSH_ID ){
		// LIS3DSH OK
	}
	else{
		// LIS3DSH ERROR
	}
	//--------------------------------------------------------------------------------------------

	// сбрасываем все настройки в датчике к дефолтным
	LIS3DSH_RebootCmd();

	//--------------------------------------------------------------------------------------------
	// создаем структуру для настройки датчика
	LIS3DSH_InitTypeDef myAccConfigDef;

	myAccConfigDef.Output_DataRate = LIS3DSH_DATARATE_100;			// частота выборки ( замер ), либо LIS3DSH_DATARATE_POWERDOWN
	myAccConfigDef.Full_Scale = LIS3DSH_FULLSCALE_2;						// шкала 2g 4g 6g 8g 16g ( грамм )
	myAccConfigDef.Filter_BW = LIS3DSH_FILTER_BW_40;						// частота работы внутрешнего фильтра
	myAccConfigDef.Axes_Enable = LIS3DSH_XYZ_ENABLE;						// указываем с какими осями будем работать X Y Z
	myAccConfigDef.Self_Test = LIS3DSH_SELFTEST_NORMAL;					// указываем режим самотестирования
	myAccConfigDef.SPI_Wire = LIS3DSH_SERIALINTERFACE_4WIRE;		// SPI 4 проводной интерфейс ( работает только в режиме SPI в I2C режиме можно писать любой будет игнорироваться )


	// записываем выше указаные настройки в датчик
	LIS3DSH_Init(&myAccConfigDef);
	//--------------------------------------------------------------------------------------------

	return;
}

void App::Loop()
{
	while (true)
	{
		// считываем температуру датчика ( кратно 1 градусу ) в Celsius
		temperature = LIS3DSH_getTemperature();
		printf("%d\r\n", temperature);

#if 1

		// если новые данные готовы то считываем их
		if( LIS3DSH_newDataRedy() ==  1 ){

				// считываем данные с осей XYZ указав масив int16_t для трех осей
				LIS3DSH_ReadXYZ( AccXYZ );

				//===== получаем градусы наклона ( крен и тангаж ) ==========================================================

				// данные расчеты нам нужны для получения градусов наклона
				double X_out = AccXYZ[0];
				double Y_out = AccXYZ[1];
				double Z_out = AccXYZ[2];


				// варианты расчета углов
				// углы от (0 до 90 и от 90 до 0 ) и (0 до -90 и от -90 до 0 ) ( немного лучше измерения )
				#if 0
							// Calculate Roll and Pitch (rotation around X-axis, rotation around Y-axis)
							roll = atan(Y_out / sqrt(pow(X_out, 2) + pow(Z_out, 2))) * 180 / PI;
							pitch = atan(X_out / sqrt(pow(Y_out, 2) + pow(Z_out, 2))) * 180 / PI;

				#endif

				// углы от (0 до 360) ( но из-за оси Z в некоторых позах некоректно измеряет угол )
				#if 0
						roll = atan2(Y_out , Z_out) * 180 / PI;
						if( Y_out < 0 ){ roll = 360 + roll; }

						pitch = atan2((X_out) , Z_out) * 180 / PI;
						if( X_out < 0 ){ pitch = 360 + pitch; }
				#endif


				#if 1
						X_out /= 100.0f;
						Y_out /= 100.0f;
						Z_out /= 100.0f;

						float fNormAcc = sqrt((X_out*X_out)+(Y_out*Y_out)+(Z_out*Z_out));

						float fSinRoll = -Y_out/fNormAcc;
						float fCosRoll = sqrt((fSinRoll * fSinRoll));				// sqrt((1.0 - fSinRoll * fSinRoll));
						if( Y_out < 0 ){ fCosRoll = (-1 * fCosRoll); }


						float fSinPitch = -X_out/fNormAcc;
						float fCosPitch = sqrt((fSinPitch * fSinPitch)); 		//sqrt((1.0 - fSinPitch * fSinPitch));
						if( X_out < 0 ){ fCosPitch = (-1 * fCosPitch); }


						// 180 <- 90 -> 0 .... 0 <- 90 -> 180
						roll = acosf(fCosRoll) * 180/PI;
						pitch = acosf(fCosPitch) * 180/PI;

						// 180 <- 90 -> 0 .... 0 <- -90 -> -180
						if( Z_out < 0 )roll *= -1;
						if( Z_out < 0 )pitch *= -1;

				#endif



				// Low-pass filter фильтр простой ( плавныое изменение )
				rollF = 0.94 * rollF + 0.06 * roll;
				pitchF = 0.94 * pitchF + 0.06 * pitch;
				//============================================================================================================
				printf("%f %f\r\n", rollF, pitchF);

		}

#endif

		HAL_GPIO_TogglePin(LED_R_GPIO_Port, LED_R_Pin);
		HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin);
		HAL_GPIO_TogglePin(LED_B_GPIO_Port, LED_B_Pin);
		HAL_Delay(500);
	}

	return;
}

void App::Run()
{
	Init();
	Loop();

	return;
}
