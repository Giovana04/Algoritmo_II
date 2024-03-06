#include <iostream>
using namespace std;

int calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int numero;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "O numero deve ser positivo.";
        return 1;
    }

    int resultado = calcularFatorial(numero);
    cout << "O fatorial de " << numero << " é: " << resultado << endl;

    return 0;
}
