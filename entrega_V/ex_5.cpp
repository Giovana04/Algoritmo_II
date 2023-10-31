/*Passagem por valor
Aqui, a tarefa é criar uma função que receba um número inteiro por valor, subtraia 5 dele e
retorne o resultado.*/

#include <iostream>
using namespace std;

int sub5(int numero);

int main() {
    int n;
    cin >> n;
    cout << "O resultado da soma é: " << sub5(n) << endl;

    return 0;
}

int sub5(int numero) {
    return numero - 5;
}