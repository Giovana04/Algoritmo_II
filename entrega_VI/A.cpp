#include <iostream>
using namespace std;

void ordenarValores(int* a, int* b);

void decomporDouble(double x, int* inteira, double* fracionaria);

int main() {
    int a, b;
    cout << "Escreva os valores desejados: ";
    cin >> a >> b;
    ordenarValores(&a, &b);
    cout << "Valores ordenados: a = " << a << ", b = " << b << endl;

    double valor, Fracionaria;
    int Inteira;
    cout << endl << "Escreva um valor facionário: ";
    cin >> valor;
    decomporDouble(valor, &Inteira, &Fracionaria);
    cout  << "Valor original: " << valor << endl;
    cout << "Parte inteira: " << Inteira << endl;
    cout << "Parte fracionária: " << Fracionaria << endl;
}


void ordenarValores(int* a, int* b) {
    if (a > b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}


void decomporDouble(double x, int* inteira, double* fracionaria) {
    *inteira = (int) x;
    *fracionaria = x - *inteira;
}