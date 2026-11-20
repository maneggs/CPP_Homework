#include <iostream>
#include <string>

int main()
{
    const int PIN = 1234;
    int inputPin;

    std::cout << "Введи пин-код: ";
    std::cin >> inputPin;

    if (inputPin != PIN)
    {
        std::cout << "Неверно\n";
        return 0;
    }

    int age;
    std::cout << "Введи возраст зрителя: ";
    std::cin >> age;

    std::string category;
    int price = 0;

    if (age < 12)
    {
        category = "детский (100 руб)";
        price = 100;
    }
    else if (age <= 17)
    {
        category = "школьник (150 руб)";
        price = 150;
    }
    else if (age <= 64)
    {
        category = "взрослый (250 руб)";
        price = 250;
    }
    else
    {
        category = "пенсия (120 руб)";
        price = 120;
    }

    int count;
    std::cout << "Введи количество билетов: ";
    std::cin >> count;

    if (count < 1) {
        std::cout << "Количество должно быть не меньше 1\n";
        return 0;
    }

    int total = price * count;
    std::cout << "Категория: " << category << "\n";
    std::cout << "К оплате: " << total << " руб\n";

    return 0;
}
