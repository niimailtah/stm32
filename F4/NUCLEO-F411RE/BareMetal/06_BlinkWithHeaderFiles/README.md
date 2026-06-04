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
