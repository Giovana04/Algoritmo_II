/* Passagem por referência com vetores
Neste cenário, você será desafiado a criar uma função que aceite um vetor por referência e
inverta a ordem de seus elementos.*/

#include <iostream>
using namespace std;

#include <iostream>

void inverter(int *v, int tamanho);

int main() {
    int N;
    cout << "defina o tamanho do vetor: ";
    cin >> N;
    int V[N];
    for (int i = 0; i < N; i++)
    {
        cout << "defina o vetor: ";
        cin >> V[i];
    }
    inverter(V, N);
}

void inverter(int *v, int tamanho){
    int invertida[tamanho], contrario = tamanho - 1;
    for (int i = 0; i < tamanho; i++){
        invertida[contrario] = *(v + i);
        contrario--;
    }
    for (int i = 0; i < tamanho; i++){
        cout << invertida[i] << " ";
    }
}