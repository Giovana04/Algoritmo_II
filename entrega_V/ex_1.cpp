/* Passagem por valor
Neste desafio, crie uma função que tome dois números inteiros como argumento,
multiplique-os e retorne o resultado. */

#include <iostream>
using namespace std;

int mult(int a, int b);

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << "O resultado da multiplicação é: " << mult(n1, n2) << endl;
}

int mult(int a, int b)
{
    return a * b;
}
