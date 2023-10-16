// Leia um número inteiro, verifique e apresente se o número é par ou ímpar.

#include <iostream>
using namespace std;

void par()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << a << " e par.";
    }
    else {
        cout << a << " e impar.";
    }
}

int main()
{
    par();
}
