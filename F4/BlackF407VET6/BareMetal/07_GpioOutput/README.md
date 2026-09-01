# Порты ввода-вывода. Вывод

Пробуем дергать порты ввода-вывода

## Build
- Build manually
```
arm-none-eabi-gcc -mcpu=cortex-m4 --specs=nosys.specs --specs=nano.specs -mthumb -DDEBUG -DSTM32F407xx -Iinc -I..\CMSIS\Device\ST\STM32F4xx\Include -I..\CMSIS\Include -T"STM32F407VETX_FLASH.ld" Startup/startup_stm32f407vetx.S Src/main.c Src/gpio.c Src/syscalls.c Src/sysmem.c Src/system_stm32f4xx.c -o firmware.elf
arm-none-eabi-size .\firmware.elf
arm-none-eabi-objcopy -O binary firmware.elf firmware.bin
```

- Build by Makefile
После первоначального запуска системы `make` немного подкрутил настройку. Добавил файлы compiler_options.mk и linker_options.mk
Как обычно `.vscode/tasks.json` с пунктами сборки и отчистки. Планируется сделать задачу заливки на MCU.
Инструмент этот позволяет отделить разделяемую между проектами часть (`CMSIS`).
```
make clean
make all
```

### Настройка на определенный MCU

#### sources.mk
SOURCES_C += $(MK_PATH)/Src/system_stm32f4xx.c
SOURCES_ASM += $(MK_PATH)/Startup/startup_stm32f407vetx.S
INCDIR += -I$(WORKSPACE_LOC)/CMSIS/Device/ST/STM32F4xx/Include

#### compiler_options.mk
COMPILE_OPT += -mcpu=cortex-m4
COMPILE_OPT += -DSTM32F407xx

#### linker_options.mk
LDFLAGS += -mcpu=cortex-m4
LDSCRIPT = $(MK_PATH)/STM32F407VETX_FLASH.ld

## Flash
PS c:\Users\chuwi\STM32CubeIDE\F4\BlackF407VET6\BareMetal\07_GpioOutput\> openocd -f board/st_nucleo_f4.cfg
- Build manually
```
target remote localhost:3333
monitor reset init
monitor flash write_image erase firmware.elf
monitor reset init
monitor resume
```

- Build by Makefile
```
target remote localhost:3333
monitor reset init
monitor flash write_image erase build/gpiooutput.elf
monitor reset init
monitor resume
```

Или можно использовать `STM32_Programmer_CLI.exe`
```
c:\ST\STM32CubeProgrammer\bin\STM32_Programmer_CLI.exe --connect port=swd --download build/gpiooutput.elf -hardRst
```
