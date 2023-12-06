#include <iostream>
#include "extern.cpp"
using namespace std;
#define N 5

double a = 12.0;
extern void troca();
void estatica(int a);
void registro();


int main(){
    int *p, x = 10, *p2, y = 5;
    p = &x;
    p2 = &y;
    cout << "Valores iniciais:" << endl << "p = " << p << " conteudo de p = " << *p << endl << "p2 = " << p2 << " conteudo de p2 = " << *p2 << endl;
    cout << endl;

    //ex. 1
    p++;
    cout << "p apos ex. 1: " << p << endl;
    cout << endl;

    //ex. 2
    p = p + 2;
    cout << "p apos ex. 2: " << p << endl;
    cout << endl;

    //ex. 3
    p = p - 2;
    cout << "p apos ex. 3: " << p << endl;
    cout << endl;

    //ex. 4
    cout << "Exercicio 4 nao e possivel de ser realizado." << endl;
    cout << endl;

    //ex. 5
    cout << "ex. 5" << endl;
    if (*p > *p2)
    {
        cout << "conteudo do ponteiro 1 e maior." << endl;
    }
    else{
        cout << "conteudo do ponteiro 2 e maior." << endl;
    }
    cout << endl;

    //ex. 6
    cout << "ex. 6" << endl << "chamada 1: ";
    estatica(2);
    cout << "chamada 2: ";
    estatica(4);
    cout << "chamada 3: ";
    estatica(7);
    cout << endl;

    //ex. 7
    cout << "Inicialmente: " << a << endl;
    troca();
    
    //ex. 8
    cout << endl << "ex. 8" << endl;
    registro();
    registro();
    registro();
    registro();
    cout << endl;

    //ex. 9
    cout << endl << "ex. 9" << endl;
    int v[N] = {0, 1, 2, 5, 6}, *vet;
    vet = v;
    cout << "Os elementos do vetor sao: ";
    for (int i = 0; i < N; i++)
    {
        cout << *(vet + i) << ", ";
    }
    cout << endl; 

    //ex. 10
    cout << endl << "ex. 10" << endl;
    if (p > p2)
    {
        cout << "O endereço do ponteiro 1 é maior que o do ponteiro 2";
    }
    else{
        cout << "O endereço do ponteiro 2 é maior que o do ponteiro 1";
    }
}

void estatica(int a){
static int x;
x += a;
cout << "x = " << x << endl;
x++;}

void registro(){
    register int reg = 1;
    reg++;
    cout << "Valor: " << reg << " ";
}