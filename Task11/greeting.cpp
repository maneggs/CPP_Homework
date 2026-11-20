#include <iostream>

int main()
{
    int hour;

    std::cout << "Введите текущий час (0-23): ";
    std::cin >> hour;

    if (hour < 6)
    {
        std::cout << "Час " << hour << ": Доброй ночи\n";
    }
    else if (hour < 12)
    {
        std::cout << "Час " << hour << ": Доброе утро\n";
    }
    else if (hour < 18)
    {
        std::cout << "Час " << hour << ": Добрый день\n";
    }
    else
    {
        std::cout << "Час " << hour << ": Добрый вечер\n";
    }

    return 0;
}

//Предсказание: если час меньше 6, то ночь
//меньше 12, то утро,
//меньше 18, то день,
//иначе вечер
