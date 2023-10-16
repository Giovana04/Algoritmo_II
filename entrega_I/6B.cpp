// Leia a base e o expoente (dois valores inteiros maiores ou iguais a zero), calcule e
// apresente o resultado da potência.

#include <iostream>
using namespace std;

int B, e;

void leitura()
{
    cout << "escreva o valor da base:" << endl;
    cin >> B;
    cout << "escreva o valor do expoente:" << endl;
    cin >> e;
    while (B < 0 || e < 0)
    {
        cout << "valores invalidos, por favor escreva valores positivos" << endl
             << "escreva o valor da base:" << endl;
        cin >> B;
        cout << "escreva o valor do expoente:" << endl;
        cin >> e;
    }
}

int potencia(int B, int e)
{
    int pot = 1;
    for (int i = 1; i <= e; i++)
    {
        pot = pot * B;
    }
    return pot;
}

int main()
{
    leitura();
    cout << potencia(B, e);
}