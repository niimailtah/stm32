# Установка системной частоты

Изменяем системную частоту со стандартной (16MHz) на более подходящую (96MHz или 100MHz).
96MHz удобно для тактирования USB.
100MHz - максимальная частота MCU.

## Build
Makefile включает файлы `compiler_options.mk`, `linker_options.mk` и `sources.mk`
Как обычно `.vscode/tasks.json` с пунктами сборки и отчистки. Планируется сделать задачу заливки на MCU.
`CMSIS` подключается как разделяемый. Общая папка в корне workspace.
Основная часть Makefile `rules.mk` также является общей и находится в папке `make_scripts` корня workspace.
```
make clean
make all
```

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
c:\ST\STM32CubeProgrammer\bin\STM32_Programmer_CLI.exe --connect port=swd --download build/sysclock.elf -hardRst
```

## Ссылки
[Changing core frequency of STM32F411 using registers only](https://blog.embeddedexpert.io/?p=454)
