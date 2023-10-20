#include <iostream>
using namespace std;

int N;

int positivos (int N){
    int soma = 0;
    for (int i = 1; i <= N; i++)
    {
        soma += i;
    }
    return soma;
}

int main(){
    cout << "Escreva o numero desejado: " << endl;
    cin >> N;
    while (N < 0)
    {
        cout << "O valor deve ser positivo" << endl;
        cin >> N;
    }
    
    cout << positivos(N);
}