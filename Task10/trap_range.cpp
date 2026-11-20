#include <iostream>

int main()
{
    int x = 5;
    std::cout << "x=" << x << ": 0<x<10 = " << (0 < x < 10)
              << ", правильно = " << (x > 0 && x < 10) << '\n';

    x = -5;
    std::cout << "x=" << x << ": 0<x<10 = " << (0 < x < 10)
              << ", правильно = " << (x > 0 && x < 10) << '\n';

    return 0;
}
