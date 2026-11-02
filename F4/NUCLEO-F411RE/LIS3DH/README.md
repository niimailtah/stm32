# LIS3DH

Тестирование LIS3DH
[Библиотека LIS3DH](https://github.com/wrclark/lis3dh)

## Соединения

| NUCLEO-F411RE | LIS3DH |
| ------------- | ------ |
| GND           | GND    |
| 3V3           | VCC    |
| PB8 (D15)     | SCL    |
| PB9 (D14)     | SDA    |
| PA8 (D7)      | SDO    |

Для отладки используется ST-LINK: PA13 (TMS), PA14 (TCK).
Для печати сообщений используется USART-мост ST-LINK: PA2 (USART_TX), PA3 (USART_RX).
Светодиод на NUCLEO: PA5
Кнопка на NUCLEO: PC13
