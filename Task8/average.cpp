#include <iostream>

int main()
{
    int grade1 = 5;
    int grade2 = 5;
    int grade3 = 4;

    int sum = grade1 + grade2 + grade3;

    std::cout << "Целочисленное среднее: " << sum / 3 << '\n';
    std::cout << "Дробное среднее: " << static_cast<double>(sum) / 3 << '\n';

    return 0;
}
