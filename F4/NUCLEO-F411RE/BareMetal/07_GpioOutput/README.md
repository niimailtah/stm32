# Порты ввода-вывода. Вывод

Пробуем дергать порты ввода-вывода

arm-none-eabi-gcc -mcpu=cortex-m4 --specs=nosys.specs --specs=nano.specs -mthumb -DDEBUG -DSTM32F411xE -Iinc -Ichip_headers\CMSIS\Device\ST\STM32F4xx\Include -Ichip_headers\CMSIS\Include -T"STM32F411RETX_FLASH.ld" Startup/startup_stm32f411retx.s Src/main.c Src/gpio.c Src/syscalls.c Src/sysmem.c Src/system_stm32f4xx.c -o firmware.elf

arm-none-eabi-size .\firmware.elf

arm-none-eabi-objcopy -O binary firmware.elf firmware.bin

PS C:\Users\chuwi\STM32CubeIDE\F4\NucleoF411RE\BareMetal\07_GpioOutput> openocd -f board/st_nucleo_f4.cfg

- Build manually
target remote localhost:3333
monitor reset init
monitor flash write_image erase firmware.elf
monitor reset init
monitor resume

- Build by Makefile
target remote localhost:3333
monitor reset init
monitor flash write_image erase build/gpiooutput.elf
monitor reset init
monitor resume

## Make

Теперь есть первоначальная поддержка `make`, что дает уже немало.
Сразу же сделал `.vscode/tasks.json` с пунктами сборки и отчистки. Планируется сделать задачу заливки на MCU.
Инструмент этот позволяет отделить разделяемую между проектами часть (`CMSIS`).
