# Bare metal STM32

## CLI

Проще всего взять CLI из STM32CubeIDE просто настроив пути:

```powershell
#cmake
$Env:PATH += ";c:\ST\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.cmake.win32_1.1.101.202603101401\tools\bin\"
#gnu tools
$Env:PATH += ";c:\ST\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.gnu-tools-for-stm32.14.3.rel1.win32_1.0.100.202602081740\tools\bin\"
#stm32CLI
$Env:PATH += ";c:\ST\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.cubeprogrammer.win32_2.2.400.202601091506\tools\bin\"
#make
$Env:PATH += ";c:\ST\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.make.win32_2.2.100.202601091506\tools\bin\"
#openocd
$Env:PATH += ";c:\ST\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.openocd.win32_2.4.400.202601091506\tools\bin\"

code .
```

## Проект

В проекте используется dev-плата NUCLEO-F411RE.
Основа: https://habr.com/ru/articles/1022976/

## Процесс разработки

```bash
arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -nostdlib -Iinc -T myLinker.ld startup/startup.c src/main.c src/config.c src/GPIO.c src/LED.c src/Timers.c -o firmware.elf
arm-none-eabi-objcopy -O binary firmware.elf firmware.bin
STM32_Programmer_CLI --connect port=swd  --download firmware.bin 0x08000000 -hardRst
arm-none-eabi-objcopy -O ihex firmware.elf firmware.hex
STM32_Programmer_CLI --connect port=swd -w firmware.hex -hardRst
```

## Добавляем CMake

https://www.zenembed.com/ru/cmake-cubemx
