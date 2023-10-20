#include <iostream>
using namespace std;

int crescente(int vetor[], int N);

int main()
{
    int N;
    cout << "defina o tamanho do vetor: ";
    cin >> N;
    int vetor[N];
    cout << "defina os numeros do vetor, lemrbre-se de dar 'enter' a cada numero: ";
    for (int i = 0; i < N; i++)
    {
        cin >> vetor[i];
    }
    crescente(vetor, N);
}

int crescente(int vetor[], int N)
{
    int aux;
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << vetor[i] << " ";
    }
    
}