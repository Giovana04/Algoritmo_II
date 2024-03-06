#include <iostream>
#include <vector>
using namespace std;

int buscaBinaria(const vector<int>& lista, int alvo) {
    int inicio = 0;
    int fim = lista.size() - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        // Se o alvo for encontrado no meio, retorna a posição
        if (lista[meio] == alvo) {
            return meio;
        }

        // Se o alvo estiver na metade esquerda, atualiza o fim
        if (lista[meio] > alvo) {
            fim = meio - 1;
        }
        // Se o alvo estiver na metade direita, atualiza o inicio
        else {
            inicio = meio + 1;
        }
    }

    // Retorna -1 se o alvo não estiver na lista
    return -1;
}

int main() {
    vector<int> lista = {1, 3, 5, 7, 9, 11, 13, 15, 17};

    int alvo;
    cout << "Digite o numero a ser buscado: ";
    cin >> alvo;

    int indice = buscaBinaria(lista, alvo);

    if (indice != -1) {
        cout << "O numero " << alvo << " foi encontrado na posicao " << indice << "." << endl;
    } else {
        cout << "O numero " << alvo << " nao foi encontrado na lista." << endl;
    }

    return 0;
}
