/*Passagem por referência
Neste exercício, você vai criar uma função que aceite um número inteiro por referência,
subtraia 5 dele e retorne o resultado.
*/

#include <iostream>
using namespace std;

int sub5(int *numero);

int main() {
    int n;
    cin >> n;
    cout << "O resultado da soma é: " << sub5(&n) << endl;

    return 0;
}

int sub5(int *numero) {
    return *numero - 5;
}