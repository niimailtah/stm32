# Чуть сдвинулся

А вот тут теперь бeдет почти полноценный маячок

## Код

А мы возьмем да и сделаем.
Подготавлимаем исходники для сборки:
```
git clone https://github.com/STMicroelectronics/STM32CubeF4.git
cd STM32CubeF4
git pull
git submodule update --init --recursive
```
Находим файлы включения, копируем и настраиваем проект для использования stm32f4.

## Командная строка

А никто не утверждал, что будет легко. Но все-таки уже опыт появился.

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
monitor flash write_image erase 6_BlinkWithHeaderFiles.elf
monitor reset init
monitor resume
```
