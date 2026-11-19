#include <iostream>

int main()
{
    double price;
    std::cout << "Vvedi tsenu: ";
    std::cin >> price;

    int kopecks = static_cast<int>(price * 100 + 0.5);
    int rubles = kopecks / 100;
    int remKopecks = kopecks % 100;

    std::cout << "Rubley: " << rubles << std::endl;
    std::cout << "Kopecksov: " << remKopecks << std::endl;
    std::cout << "Itogo: " << rubles << " rub " << remKopecks << " kop" << std::endl;

    return 0;
}
