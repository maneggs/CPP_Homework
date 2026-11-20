#include <iostream>

using namespace std;

int main()
{
    
    int a, b;
    cin >> a >> b;
    
    int max_val = (a > b) ? a : b;
    cout << "Максимум: " << max_val << endl;
    
    cout << (a == b ? "Числа равны" : (a > b ? "Больше первое число" : "Больше второе число")) << endl;
    
    return 0;
}
