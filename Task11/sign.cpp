#include <iostream>

int main()
{
    int number;

    std::cout << "Введите целое число: ";
    std::cin >> number;

    if (number > 0)
    {
        std::cout << "Число " << number << " — положительное\n";
    }
    else if (number < 0)
    {
        std::cout << "Число " << number << " — отрицательное\n";
    }
    else
    {
        std::cout << "Число " << number << " — ноль\n";
    }

    return 0;
}

//Предсказание: если число меньше нуля, то отрицательное
//если равно нулю, то ноль
//если больше нуля, то положительное