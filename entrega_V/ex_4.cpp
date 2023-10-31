/*Passagem por referência
Neste desafio, você deve criar uma função que receba um número inteiro por referência,
some 10 a ele e retorne o resultado.*/

#include <iostream>
using namespace std;

int somarDez(int *numero);

int main() {
    int n;
    cin >> n;
    cout << "O resultado da soma é: " << somarDez(&n) << endl;

    return 0;
}

int somarDez(int *numero) {
    return *numero + 10;
}