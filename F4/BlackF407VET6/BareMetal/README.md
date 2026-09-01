# Общие для всех проектов примечания

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
monitor flash write_image erase 16_IWDG.elf
monitor reset init
monitor resume
```

Вообще-то пока пользуюсь STM32CubeIDE. Так проще заливать прошивку.
А для VSCode, Makefile и CMake, думаю, следует использовать STM32CubeProgrammer (по крайней мере для Win).
```
c:\tools\ST\STM32CubeProgrammer\bin\STM32_Programmer_CLI.exe --connect port=swd --download 16_IWDG.elf -hardRst
```

## Создание проекта из CubeMX

Если создаем проект для NUCLEO, то линковщик генерируется только для FLASH. А для конкретного контроллера - и FLASH и RAM. Порой это может сохранить FLASH для контроллера.

## Заметки

Создал черновую версию системы сборки на `C` с помощью `make`. Используются `make_script/*`, сделано для `07_GpioOutput` (2026-06-04).
Пока что все свалено в кучу. За основу брались статьи https://habr.com/ru/articles/1010484/, https://habr.com/ru/articles/748162/.
Также сделал для этого проекта задачи для VSCode.

Для STM32CubeIDE получилось сделать один workspace и в нем отдельные проекты. Причем общая часть (`/CMSIS`) также выведена.
Делается это хитрым способом:
- в папке на один уровень выше создается пустой проект
- удаляем этот проект из списка вышестояшего workspace
- добавляем пустой STM32CubeIDE-проект
- добавляем контент для Makefile
- настраиваем пути для include

Похоже не только я по книжке программирую. Например, https://github.com/halukkirkgoz/STM32_NUCLEO_F411RE_Projects
