// Leia um número inteiro, verifique e apresente se o número é par ou ímpar.

#include <iostream>
using namespace std;

bool par(int a)
{
    return (a % 2 == 0? true : false);
}

int main()
{

    int a;
    cin >> a;

    if (par(a))
        cout << a << " e par." << endl;
    else
        cout << a << " e impar." << endl;
        
}