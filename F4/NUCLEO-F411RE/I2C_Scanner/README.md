# Нахождение адресов ао I2C

Вывод информации осуществляется через VCP, по USB через ST-LINK.

## MPU-6050, MPU-9250

### Соединение

3V3 VCC
GND GND
D7      | ADO
D19/SCL | SCL
D18/SDA | SDA

Адрес I2C зависит от уровня на ADO:
- Low:  0x68
- High: 0x69

## ADXL345

### Соединение

3V3 VCC
GND GND
D7      | SDO 
D19/SCL | SCL
D18/SDA | SDA

Адрес I2C зависит от уровня на SDO:
- Low:  0x53
- High: 0x1D

## BMI270

### Соединение

3V3 VCC
GND GND
D7      | SDO/ADO
D19/SCL | SCL
D18/SDA | SDA

Адрес I2C зависит от уровня на SDO/ADO:
- Low:  0x68
- High: 0x69
Если не инициализировать пин SDO/ADO, то адрес будет плавать.

## LIS3DH

### Соединение

3V3 VCC
GND GND
D7      | SDO 
D19/SCL | SCL
D18/SDA | SDA

Адрес I2C зависит от уровня на SDO:
- Low:  0x18
- High: 0x19
