## Переносим настройки пинов

### Для Debug Serial
PA13 - TMS
PA14 - TCK
Для этого выставляем галку Debug Serial Wire в разделе SYS

### Для TIM16
А есть ли он в F103? Нету, поэтому не использую.
Activated - true

Counter settings
- Prescaler: 4800-1
- Counter Mode: Up
- Counter Period: 65535
- Repetition Counter: 0
- auto-reload preload: Disable

### Для SPI
Mode: Half-Duplex Master
Hardware NSS Signal: Disable
PA7 - SPI1_MOSI
PB3 - SPI1_SCK

На плате дисплея пины обозначены так:
DI - SDI - SPI1_MOSI
SC - SCL - SPI1_SCK

Пины на Smart разведены так:
DI - SDI - PB15
SC - SCL - PB13
что соответствует SPI2

### Для GPIO
PC0 - RESET_TFT_PC0
PC1 - DC_TFT_PC1
PC2 - CS_TFT_PC2

На плате дисплея пины обозначены так:
CS   - CS  - CS_TFT_PC2
NRST - RST - RESET_TFT_PC0
A0   - RS  - DC_TFT_PC1

Пины на Smart разведены так:
CS   - CS  - PB12
NRST - RST - NRST
A0   - RS  - PB1
