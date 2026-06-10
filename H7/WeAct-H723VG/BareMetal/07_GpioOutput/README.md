# Порты ввода-вывода. Вывод

Пробуем дергать порты ввода-вывода

## Build by Makefile

### Файлы для make
compiler_options.mk
linker_options.mk
sources.mk

Как обычно `.vscode/tasks.json` с пунктами сборки и отчистки. Планируется сделать задачу заливки на MCU.
Отделил разделяемую между проектами часть (`CMSIS`).
```
make clean
make all
```

### Настройка на определенный MCU

#### sources.mk
SOURCES_C += $(MK_PATH)/Src/system_stm32h7xx.c
SOURCES_ASM += $(MK_PATH)/Startup/startup_stm32h723vgtx.S
INCDIR += -I$(WORKSPACE_LOC)/CMSIS/Device/ST/STM32H7xx/Include

#### compiler_options.mk
COMPILE_OPT += -mcpu=cortex-m7
COMPILE_OPT += -DSTM32H723xx

#### linker_options.mk
LDFLAGS += -mcpu=cortex-m7
LDSCRIPT = $(MK_PATH)/STM32H723VGTX_FLASH.ld

## Flash
Т.к. для OpenOCD нет настройки для STM32H723, то используем `STM32_Programmer_CLI.exe`
```
c:\ST\STM32CubeProgrammer\bin\STM32_Programmer_CLI.exe --connect port=swd --download build/gpiooutput.elf -hardRst
```

## Заметки
Пока что не заработало `=(`
