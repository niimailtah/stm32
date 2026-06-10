# Порты ввода-вывода. Вывод

Пробуем дергать порты ввода-вывода

## Build
- Build manually
```
arm-none-eabi-gcc -mcpu=cortex-m4 --specs=nosys.specs --specs=nano.specs -mthumb -DDEBUG -DSTM32F411xE -Iinc -Ichip_headers\CMSIS\Device\ST\STM32F4xx\Include -Ichip_headers\CMSIS\Include -T"STM32F411RETX_FLASH.ld" Startup/startup_stm32f411retx.s Src/main.c Src/gpio.c Src/syscalls.c Src/sysmem.c Src/system_stm32f4xx.c -o firmware.elf
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

SOURCES_C += $(MK_PATH)/Src/system_stm32h5xx.c

SOURCES_ASM += $(MK_PATH)/Startup/startup_stm32h533retx.S

INCDIR += -I$(MK_PATH)/chip_headers/CMSIS/Device/ST/STM32H5xx/Include

#### compiler_options.mk
COMPILE_OPT += -mcpu=cortex-m33
COMPILE_OPT += -DSTM32H533xx

#### linker_options.mk
LDFLAGS += -mcpu=cortex-m33
LDSCRIPT = $(MK_PATH)/STM32H533RETX_FLASH.ld

## Flash
PS C:\Users\chuwi\STM32CubeIDE\F4\NucleoF411RE\BareMetal\07_GpioOutput> openocd -f board/st_nucleo_f4.cfg
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

К сожалению для NUCLEO-H533 нет конфигурации OpenOCD, поэтому воспользуемся STM32_Programmer_CLI.
```
c:\ST\STM32CubeProgrammer\bin\STM32_Programmer_CLI.exe --connect port=swd --download build/gpiooutput.elf -hardRst
```
