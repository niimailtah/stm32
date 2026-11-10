# LIS3DH

Тестирование LIS3DH
[Библиотека LIS3DH](https://github.com/STMicroelectronics/lis3dh-pid)

## Соединения
SPI

| NUCLEO-F411RE | LIS3DH |
| ------------- | ------ |
| GND           | GND    |
| 3V3           | VCC    |
| PA5 (D13)     | SCL    |
| PA6 (D12)     | SDA    |
| PA7 (D11)     | SDO    |
| PB6 (D10)     | SC     |

Для отладки используется ST-LINK: PA13 (TMS), PA14 (TCK).
Для печати сообщений используется USART-мост ST-LINK: PA2 (USART_TX), PA3 (USART_RX).
Кнопка на NUCLEO: PC13
