# LIS3DH

Тестируем LIS3DH.
Заглянул на habr. [Обзор Акселерометра LIS3DH](https://habr.com/ru/articles/851180/).

## Подключения

Для самого начала нашел первую попавшуюся библиотеку на github [LIS3DH_STM32_HAL](https://github.com/jedp/LIS3DH_STM32_HAL).
Подключаем по I2C.

| LIS3DH | XPulse |
| ------ | ------ |
| GND    | GND    |
| VCC    | 3V3    |
| SCL    | PA8    |
| SDA    | PC9    |
| SDO    | GND    |

## Links

Стоит глянуть:
- https://github.com/STMicroelectronics/lis3dh-pid
- https://github.com/dunajski/lis3dh_stm32g0_example
- https://github.com/edgeaiguy/stm32f4-datalogger
- https://github.com/AlekseySedyshev/STM32F042_LIS3DH
- https://github.com/wrclark/lis3dh
- https://github.com/carspeedisc/lis3dh-stm32-spi-driver
- https://github.com/Nisaof/STM32Accelerometer-Based-Digital-Level
- https://github.com/Sergey1560/h7_spi_lis3dsh
