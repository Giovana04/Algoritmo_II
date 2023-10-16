//Leia um número natural, calcule e apresente o seu fatorial.

#include <iostream>
using namespace std;

int fatorial(int N){
    int F=1;
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
    return(F);
}

int main(){
    int N;
    cin >> N;
    cout << fatorial(N);
}