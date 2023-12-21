#include <iostream>
using namespace std;

int busca(int A[], int n, int v);

int main() {
    int tamanho;
    cout << "Tamanho do vetor: ";
    cin >> tamanho;
    int vetor[tamanho], valorProcurado;
    cout << "Valor procurado: ";
    cin >> valorProcurado;

    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = i+1;
    }
    

    int resultado = busca(vetor, tamanho, valorProcurado);

    if (resultado != -1) {
        cout << "O elemento " << valorProcurado << " foi encontrado no indice: " << resultado << endl;
    } else {
        cout << "O elemento " << valorProcurado << " nao foi encontrado no vetor" << endl;
    }
}

int busca(int A[], int n, int v) {
    for (int i = 0; i < n; ++i) {
        if (A[i] == v) {
            return i; 
        }
    }
    return -1; 
}