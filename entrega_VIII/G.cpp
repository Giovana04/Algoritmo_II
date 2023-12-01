#include<iostream>
using namespace std;
#define H 5
#define J 7

void maior_menor (int v[], int &a, int &b);
void vetores (int N[], int v[]);
void par_impar(int v[]);

int main(){
    int v[H] = {1, 2, 3, 4, 5}, n[J] = {6, 7, 8, 9, 10, 11, 12}, m, M;
    m = M = v[0];
    maior_menor (v, m, M);
    vetores (n, v);
    par_impar(v);
}

void maior_menor (int v[], int &a, int &b){
    int *p;
    p = v;
    
    for (int i = 1; i < H; i++)
    {
        if (*(p + i) < a )
        {
            a = *(p + i);
        }
        if (*(p + i) > b)
        {
            
            b = *(p + i);
        }
    }
    cout << "O menor valor do vetor V e: " << a << endl << "O maior valor do vetor V e: " << b << endl;
}

void vetores (int N[], int v[]){
    cout << endl;
    int final[H+J];
    int *p;
    p = v;
    for (int i = 0; i < H; i++)
    {
        final[i] = *(p + i);
    }
    p = N;
    for (int i = 0; i < J; i++)
    {
        final[i+5] = *(p + i);
    }
    p = final;
    cout << "vetor final: ";
    for (int i = 0; i < H+J; i++)
    {
        cout << *(p + i) << " ";
    }
    
}

void par_impar(int v[]){
    cout << endl;
    int *p;
    int i = 0, impar[H], par[H];
    p = v;
    cout << endl << "Numeros pares: ";
    for (int i = 0; i < H; i++) {
        if (*(p + i) % 2 == 0) {
            cout << *(p + i) << " ";
        }
    }

    cout << endl <<"Numeros impares: ";
    for (int i = 0; i < H; i++) {
        if (*(p + i) % 2 != 0) {
            cout << *(p + i) << " ";
        }
    }
}