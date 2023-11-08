#include <iostream>
#define N 7
using namespace std;

int encontrarMaior(int* vetor);

double calcularMedia(int* vetor);

int contarPositivos(int* vetor);

void inserirValores(int* vetor, int n);

void encontrarMaiorMenor(int* vetor, int& maior, int& menor);

int main() {
    int vetor[N] = {5, 8, 2, 10, -3, 7};

    // Chamadas das funções
    int maior = encontrarMaior(vetor);
    cout << "Maior valor: " << maior << endl;

    double media = calcularMedia(vetor);
    cout << "Média dos valores: " << media << endl;

    int positivos = contarPositivos(vetor);
    cout << "Número de elementos positivos: " << positivos << endl;

    int n;
    cout << "Digite a quantidade de valores a serem inseridos: ";
    cin >> n;
    int Vetor2[n];
    inserirValores(Vetor2, n);

    int maior, menor;
    encontrarMaiorMenor(vetor, maior, menor);
    cout << "Maior valor no vetor: " << maior << endl;
    cout << "Menor valor no vetor: " << menor << endl;
}

int encontrarMaior(int* vetor) {
    int maior = vetor[0];
    for (int i = 1; i < N; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

double calcularMedia(int* vetor) {
    int soma = 0;
    for (int i = 0; i < N; i++)
    {
        soma += vetor[i];
    }
    
    return (soma / N);
}

int contarPositivos(int* vetor) {
    int positivos = 0;
    for (int i = 0; i < N; i++)
    {
        if (vetor[i] >= 0 )
        {
            positivos++;
        }
        
    }
    
    return positivos;
}

void inserirValores(int* vetor, int n) {
    int valor;
    for (int i = 0; i < n; i++) {
        cin >> valor;
        vetor[i] = valor;
    }
    cout << "Valores inseridos no vetor: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void encontrarMaiorMenor(int* vetor, int& maior, int& menor) {
    maior = vetor[0];
    menor = vetor[0];
    for (int i = 1; i < N; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
}
