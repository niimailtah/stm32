# ADXL345

Инициализация и получение данных от акселерометра ADXL345 по I2C

### Соединение

3V3 VCC
GND GND
D7  SDO 
SCL SCL
SDA SDA

Адрес I2C зависит от уровня на SDO:
- Low:  0x53
- High: 0x1D

## Заметки

ADXL345 + STM32 I2C Tutorial: Read 3-Axis Acceleration Data
https://controllerstech.com/adxl345-accelerometer-using-stm32/
