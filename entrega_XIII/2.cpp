#include <iostream>
using namespace std;
#define N 10

int busca_binaria(int x, int *v, int n){
    int ini = 0;
    int fim = n-1;
    while(ini <= fim){ //Condição de parada
    //calcula o meio do sub-vetor
    int i = (ini + fim) / 2;
    if (v[i] == x)
    return i; //Item encontrado
    if (v[i] < x)
    ini = i+1; //Item está no sub-vetor à direita
    else
    fim = i; //v[i] > x //Item está no sub-vetor à esquerda
    }
    return -1;
}


int main(){
    int v[N] = {0,1,2,3,4,5,6,7,8,9}, j, x;
    cin >> x;
    j = busca_binaria(x, v, N);
    cout << j;
}