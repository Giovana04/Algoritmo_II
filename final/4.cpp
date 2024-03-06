#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& numeros) {
    int n = numeros.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
}

void imprimirLista(const vector<int>& lista) {
    for (int numero : lista) {
        cout << numero << " ";
    }
    cout << endl;
}

int main() {
    // Teste com lista de números de diferentes tamanhos
    vector<vector<int>> casosDeTeste = {
        {5, 2, 9, 1, 7},  // Teste 1
        {3, 8, 4, 6},     // Teste 2
        {10, 1, 6, 4, 7, 2, 9, 3, 8, 5}  // Teste 3
    };

    // Executa o bubble sort para cada caso de teste e verifica se a lista está ordenada
    for (int i = 0; i < casosDeTeste.size(); i++) {
        vector<int> numeros = casosDeTeste[i];
        cout << "Caso de Teste " << i + 1 << ": Lista original: ";
        imprimirLista(numeros);

        bubbleSort(numeros);

        cout << "Lista ordenada: ";
        imprimirLista(numeros);

        cout << endl;
    }

    return 0;
}
