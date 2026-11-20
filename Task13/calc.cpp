#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char op;
    cin >> a >> op >> b;

    switch (op)
    {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Ошибка: деление на ноль" << endl;
            } else {
                cout << a << " / " << b << " = " << a / b 
                     << " (остаток " << a % b << ")" << endl;
            }
            break;
        case '%':
            cout << a << " % " << b << " = " << a % b << endl;
            break;
        default:
            cout << "Операция " << op << " не поддерживается" << endl;
            break;
    }

    return 0;
}
