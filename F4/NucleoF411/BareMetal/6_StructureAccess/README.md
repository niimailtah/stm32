# Структурный доступ к регистрам 

Попробуем доступ к регистрам структуризировать

Заворачиваем в поля структуры смещения регистра для GPIO

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
monitor flash write_image erase 6_StructureAccess.elf
monitor reset init
monitor resume
```
