# Командный проект: сборник расчётов
Группа ПИ-53. Лабораторная работа № 2.
## Команда
| Участник | Роль | Вариант | Файлы | Пункты меню |
|----------------|-------------|---------|--------------------------|-------------|
| Гацер А. С. | техлид | 82 | gatser.h, gatser.cpp | 1–2 |
| Гудочкин А. Д. | разработчик | 14 | gudochkin.h, gudochkin.cpp | 3–4 |
| Луканин Г. В. | разработчик | 36 | lukanin.h, lukanin.cpp | 5–6 |
## Сборка и запуск
cd путь к вашей папке, например cd C:/Users/User1/source/repos
git clone https://github.com/artem-gatser/team-project.git
cd team-project
g++ main.cpp gatser.cpp gudochkin.cpp lukanin.cpp -o app
./app
