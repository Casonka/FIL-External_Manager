<h1><p align="center"> 
Менеджер подключения внешних библиотек External Manager для библиотеки FIL.
</p></h1>

Для установки менеджера внешних библиотек следуйте следующим инструкциям:

- Добавьте следующую директиву #include в файл main.h согласно следующем фрагменту кода. Обратите внимание. что директиву необходимо расположить как можно ниже всех остальных добавлений.

```sh 
#include "stm32f4xx.h"
#include "FilConfig.h"
#include "External_Manager.h
```

- Далее выполните команду загрузки с репозитория (требуется установленная система контрольных версий [Git](https://git-scm.com/book/ru/v2/%D0%92%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D0%B5-%D0%A3%D1%81%D1%82%D0%B0%D0%BD%D0%BE%D0%B2%D0%BA%D0%B0-Git). Рекомендовано выполнить команду с использованием консоли cmd.

```sh
cd YOUR_PROJECT
git clone https://github.com/Casonka/FIL-External_Manager.git & cd FIL-External_Manager & rmdir /q README.md
```

Поздравляю. Менеджер внешних библиотек готов подключать внешние библиотеки. Для добавления нужной вам библиотеки необходимо её загрузить. Для этого выполните следующие команды. Параметр LIB_REPOS необходимо заменить ссылкой на репозиторий библиотеки. 

```sh
cd YOUR_PROJECT
git clone LIB_REPOS
```

Для удобства все доступные ссылки были сгруппированы в таблицу.

| Название библиотеки | Краткое описание
| ------ | ------ | 
| [SSD1306](https://github.com/RCR-DSTU/SSD1306.git) | Библиотека для работы с дисплеем SSD1306. Можно рисовать простые фигуры и изображения. Оригинальная версия принадлежит автору - [Alexander Lutsai](https://github.com/SL-RU/stm32libs/tree/master/HAL/ssd1306) |
| [MPU9250](https://github.com/RCR-DSTU/MPU9250.git) |  |
| [Regulators](https://github.com/RCR-DSTU/Regulators.git) |  |
| [Filters](https://github.com/RCR-DSTU/Filters.git) |  |
| [Kinematics](https://github.com/RCR-DSTU/Kinematics.git) |  |
| [TCS3472](https://github.com/RCR-DSTU/TCS3472.git) |  |
