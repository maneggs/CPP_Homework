#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin >> n;
    
    cout << n << " - " << (n % 2 == 0 ? "чётное" : "нечётное") << endl;
    
    return 0;
}
