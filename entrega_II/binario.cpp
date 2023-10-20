#include <iostream>
using namespace std;

string Binario(int n)
{
    string binario;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            binario += '0';
        }
        else
        {
            binario += '1';
        }
        n /= 2;
    }
    return binario;
}

int main()
{
    int n;
    cin >> n;
    cout << "Decimal: " << n << endl;
    cout << "Binario : " << Binario(n) << endl;
}