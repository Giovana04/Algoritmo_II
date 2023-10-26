#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "defina o tamanho do vetor: ";
    cin >> N;
    int V[N], *ponteiro[N];
    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
        ponteiro[i] = &V[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout << *ponteiro[i] << " ";
    }
}