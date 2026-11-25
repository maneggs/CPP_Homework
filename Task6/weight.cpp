#include <iostream>

int main()
{

    double pounds;
    std::cout << "Вес в фунтах: ";
    std::cin >> pounds;

    double kg = pounds * 0.453592;
    std::cout << "Вес в кг: " << kg << std::endl;

    double inches;
    std::cout << "Рост в дюймах: ";
    std::cin >> inches;

    double cm = inches * 2.54;
    std::cout << "Рост в см: " << cm << std::endl;

    return 0;
}
