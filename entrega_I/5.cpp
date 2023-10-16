//Leia um número natural, calcule e apresente o seu fatorial.

#include <iostream>
using namespace std;

void fatorial(){
    int N, F=1;
    cin >> N;
    while (N<0)
    {
        cout << "valor invalido, por favor escreva um numero positivo"<< endl;
        cin >> N;
    }
    while (N > 0)
    {
        F = F * (N);
        N--;
    }
    cout << F;
}

int main(){
    fatorial();
}
