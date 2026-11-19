#include <iostream>

int main()
{
    int goals = 27;                                  // строка А
    double avgGoals = static_cast<double>(goals) / 8; // строка Б
    std::cout << "Всего голов: " << goals << std::endl;
    std::cout << "Среднее за матч: " << avgGoals << std::endl;
    std::cout << "Мячей сыграно: " << static_cast<int>(8.9) << std::endl; // строка В
    return 0;
}

// 1 Строка А - пропущена точка с запятой в конце объявления переменной goals
// 2 Строка Б - statc_cast вместо static_cast
// 3 Строка В - отсутствует закрывающая угловая скобка (>) после типа int в static_cast
