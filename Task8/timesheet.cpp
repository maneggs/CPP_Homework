#include <iostream>

int main()
{
    double hours = 0.0;
    int rate = 0;

    std::cout << "Введите отработанное время: ";
    std::cin >> hours;
    std::cout << "Введите часовую ставку: ";
    std::cin >> rate;

    int whole_hours = static_cast<int>(hours);
    double fractional_hours = hours - whole_hours;
    int minutes = static_cast<int>(fractional_hours * 60 + 0.5);

    double total_salary = hours * rate;
    int total_kopecks = static_cast<int>(total_salary * 100 + 0.5);
    int rubles = total_kopecks / 100;
    int kopecks = total_kopecks % 100;

    std::cout << "Часы: " << hours << ", ставка: " << rate << '\n';
    std::cout << "Время: " << whole_hours << " ч " << minutes << " мин\n";
    std::cout << "Заработок: " << rubles << " руб " << kopecks << " коп\n";

    return 0;
}
