#include <iostream>

int main()
{

    double celsius;
    std::cout << "Цельсий: ";
    std::cin >> celsius;

    double fahrenheit = celsius * 9.0 / 5.0 + 32;
    std::cout << "Фаренгейт: " << fahrenheit << std::endl;

    double f_input;
    std::cout << "Фаренгейт: ";
    std::cin >> f_input;

    double c_output = (f_input - 32) * 5.0 / 9.0;
    std::cout << "Цельсий: " << c_output << std::endl;

    int scale = 9 / 5; 
    double broken_f = celsius * scale + 32;
    std::cout << "Испорченная прямая формула: " << broken_f << std::endl;

    return 0;
}
