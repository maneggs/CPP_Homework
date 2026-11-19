#include <iostream>

int main()
{
    std::cout << "7.9 -> " << static_cast<int>(7.9) << '\n';
    std::cout << "7.3 -> " << static_cast<int>(7.3) << '\n';
    std::cout << "-7.9 -> " << static_cast<int>(-7.9) << '\n';
    std::cout << "-7.3 -> " << static_cast<int>(-7.3) << '\n';

    return 0;
}
