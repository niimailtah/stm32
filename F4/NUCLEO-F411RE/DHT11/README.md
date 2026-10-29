# DHT11

Тестирование DHT11
[Библиотека DHT11](https://github.com/quen0n/DHT11-DHT22-STM32-HAL)

## Соединения

| NUCLEO-F411RE | DHT11 |
| ------------- | ----- |
| GND           | -     |
| 5V            | VCC   |
| PA8 (D7)      | S     |

Для отладки используется ST-LINK: PA13 (TMS), PA14 (TCK).
Для печати сообщений используется USART-мост ST-LINK: PA2 (USART_TX), PA3 (USART_RX).
Светодиод на NUCLEO: PA5
Кнопка на NUCLEO: PC13
