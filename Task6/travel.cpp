#include <iostream>

int main()
{

    double distance, time;
    std::cout << "Расстояние и время: ";
    std::cin >> distance >> time;

    double speed = distance / time;
    std::cout << "Скорость: " << speed << std::endl;

    return 0;
}
