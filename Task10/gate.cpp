#include <iostream>

int main()
{
    int age;
    int passInput;

    std::cout << "Введи возраст: ";
    std::cin >> age;
    std::cout << "Введи код пропуска (0 - нет, любое другое - есть): ";
    std::cin >> passInput;

    bool hasPass = passInput != 0;

    bool isAdult = age >= 18;
    bool isAllowed = isAdult && hasPass;
    bool hasDiscount = age < 12 || age >= 65; // "до 12 лет или от 65"
    bool isDenied = !isAllowed;

    std::cout << "Взрослый: " << isAdult << '\n';
    std::cout << "Допуск в зал: " << isAllowed << '\n';
    std::cout << "Льгота: " << hasDiscount << '\n';
    std::cout << "Отказ: " << isDenied << '\n';
    std::cout << "Совпадение де Моргана: " 
              << !(age < 18 || !hasPass) << " " 
              << (age >= 18 && hasPass) << '\n';

    return 0;
}
