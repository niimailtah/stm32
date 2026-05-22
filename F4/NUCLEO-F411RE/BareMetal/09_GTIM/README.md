# Основной таймер

Мигаем светодиодом по таймеру (general/основной)

## Код

Пока что не придумал, как драйвер CMSIS использовать совместно. Заливаем в проект (или копируем из /chip_headers с настройкой).
Подготавлимаем исходники для сборки:
```
git clone https://github.com/STMicroelectronics/STM32CubeF4.git
cd STM32CubeF4
git pull
git submodule update --init --recursive
```
Находим файлы включения, копируем и настраиваем проект для использования stm32f4.

## Настройка

Для того, чтобы настроить сборку на микроконтроллер следует define STM32F411xE (для NUCLEO-F411RE)

## Заливаем

Стартуем отладчик
```
openocd.exe -f board/st_nucleo_f4.cfg
```

Стартуем отладчик
```
C:\tools\ST\STM32CubeIDE\plugins\com.st.stm32cube.ide.mcu.externaltools.gnu-tools-for-stm32.14.3.rel1.win32_1.0.0.202510090749\tools\bin\arm-none-eabi-gdb.exe
```

Заливаем прошивку
```
target remote localhost:3333
monitor reset init
monitor flash write_image erase 9_GTIM.elf
monitor reset init
monitor resume
```

Вообще-то пока пользуюсь STM32CubeIDE. Так проще заливать прошивку.
А для VSCode и CMake, думаю, следует использовать STM32CubeProgrammer (по крайней мере для Win).
```
c:\tools\ST\STM32CubeProgrammer\bin\STM32_Programmer_CLI.exe --connect port=swd --download 9_GTIM.elf -hardRst
```
