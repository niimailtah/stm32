# CortexLib

Продолжаю по-маленьку продвигаться по этому тернистому пути.
`lamerOk` обучает своих студентов, и эти студенты сдают ему лабораторные и курсовые работы через `GitHub`.
Очень познавательные репозитории получаются:
- https://github.com/MolodoyNasos/hello.git
- https://github.com/Cuprum1736/IAR-lab.git
- https://github.com/ZaKBin/kursovai.git
- https://github.com/SALAT413/Labaraboti.git
- https://github.com/SergeyTrushnikov/LABORATORNIE.git
- https://github.com/Over1Come/new-rep.git
- https://github.com/DolgihE/New2.git
- https://github.com/katya-volodina/volodina.git
Просмотр оных снова вдохновил меня на продолжение разбора библиотеки `CortexLib`.
На момент создания этого проекта уже есть пробы: для NUCLEO-F411RE (`...\stm32\F4\NUCLEO-F411RE\NG\`).
В текущем проекте задействован WeActF405RGT6.

## Build

Для сборки используется `CMake`.

## Примечания

Весь проект на `C++`, без `HAL` и `CMSIS`.
Для создания проекта использовался STM32CubeIDE. Новый пустой проект для CMake.
Переименовал `main.c` в `main.cpp`.
После генерации чуть изменил `CMakeLists.txt`: добавил правило для `CMAKE_CXX_FLAGS`, попроавил список исходников.
Скомпилировал и залил прошивку.
Далее запускаем VSCode скриптом `start_code.ps1`.

## Заливка

```
c:\ST\STM32CubeProgrammer\bin\STM32_Programmer_CLI.exe --connect port=swd --download Debug/RegNG_CMake.elf -hardRst
```
