# Тестирование ILI9341


## Соединения

| ILI9341 |  NUCLEO   |
| ------- | --------- |
| VCC     | 5V        |
| GND     | GND       |
| CS      | PB4 (D5)  |
| RST     | PB10 (D6) |
| DC      | PA8 (D7)  |
| MOSI    | PA7 (D11) |
| SCK     | PA5 (D13) |
| LED     | 3V3       |


## DMA

Для сравнения скорости заливки области используется флаг (define) `USE_DMA`
