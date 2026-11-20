#include <iostream>

using namespace std;

int main()
{

    int price, qty;
    cin >> price >> qty;
    
    if (qty < 1) {
        cout << "Количество должно быть не меньше 1" << endl;
        return 0;
    }
    
    int sum = price * qty;
    int discount_percent = 0;
    
    if (sum > 5000)
    {
        discount_percent = 10;
    }
    else if (sum > 1000)
    {
        discount_percent = 5;
    }
    else
    {
        discount_percent = 0;
    }
    
    int discount_amount = sum * discount_percent / 100;
    int to_pay = sum - discount_amount;
    
    int paid;
    cin >> paid;
    
    cout << "Сумма: " << sum << ", скидка " << discount_percent << "%, к оплате: " << to_pay << endl;
    
    if (paid >= to_pay)
    {
        cout << "Оплата прошла" << endl;
        cout << "Сдача: " << (paid - to_pay) << " руб" << endl;
    }
    else
    {
        cout << "Недостаточно средств: ещё " << (to_pay - paid) << " руб" << endl;
    }
    
    cout << "Категория: " << (to_pay > 4000 ? "существенная скидка" : "обычная покупка") << endl;
    
    return 0;
}
