# Нахождение адресов ао I2C

## MPU650

### Соединение

3V3 VCC
GND GND
D7  ADO
SCL SCL
SDA SDA

Адрес I2C зависит от уровня на ADO:
- Low:
- High:

## ADXL345

### Соединение

3V3 VCC
GND GND
D7  SDO 
SCL SCL
SDA SDA

Адрес I2C зависит от уровня на SDO:
- Low:  0x53
- High: 0x1D
