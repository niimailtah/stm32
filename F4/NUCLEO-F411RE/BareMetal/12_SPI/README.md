# SPI

Получаем данные акселерометра ADXL345 по SPI и передаем по UART на PC.

## Build
Makefile включает файлы `compiler_options.mk`, `linker_options.mk` и `sources.mk`
Как обычно `.vscode/tasks.json` с пунктами сборки и отчистки. Планируется сделать задачу заливки на MCU.
`CMSIS` подключается как разделяемый. Общая папка в корне workspace.
Основная часть Makefile `rules.mk` также является общей и находится в папке `make_scripts` корня workspace.
```
make clean
make all
```

### Соединения
| STM32F4 | ADXL345 |
| ------- | ------- |
| 5V      | Vcc     |
| GND     | GND     |
| PA9     | CS      |
| PA6     | SDO     |
| PA7     | SDA     |
| PA5     | SCL     |

UART на NUCLEO-F411 уже выведен через ST-LINK на USB.

### Настройка на определенный MCU

#### sources.mk
SOURCES_C += $(MK_PATH)/Src/system_stm32f4xx.c
SOURCES_ASM += $(MK_PATH)/Startup/startup_stm32f411retx.S
INCDIR += -I$(WORKSPACE_LOC)/CMSIS/Device/ST/STM32F4xx/Include

#### compiler_options.mk
COMPILE_OPT += -mcpu=cortex-m4
COMPILE_OPT += -DSTM32F411xE

#### linker_options.mk
LDFLAGS += -mcpu=cortex-m4
LDSCRIPT = $(MK_PATH)/STM32F411RETx_FLASH.ld

## Flash
Используем `STM32_Programmer_CLI.exe` из командной строки.
```
c:\ST\STM32CubeProgrammer\bin\STM32_Programmer_CLI.exe --connect port=swd --download build/spi.elf -hardRst
```

## Использование
Перед включением питания запускаем на PC терминал (скорость 115200).
После включения в терминал будет выводится значения акселерометра.

## Примечания
ADXL345 умеет связываться по SPI (3-ware и 4-ware) и по I2C. В данном проекте используется SPI 4-ware.

## Ссылки
[Working with STM32 and Acceleration Sensor: ADXL345 in SPI mode Part 1](https://blog.embeddedexpert.io/?p=1310)
[Working with STM32 and Acceleration Sensor: ADXL345 in SPI mode Part 2](https://blog.embeddedexpert.io/?p=1317)
