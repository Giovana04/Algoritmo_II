//Leia 2 números inteiros positivos e apresente a soma dos n números existentes 
//entre eles (incluindo os limites do intervalo) (Por exemplo, para 5 e 8: 5+6+7+8).

#include <iostream>
using namespace std;

void soma(){
    int a, b, soma=0;
    cin >> a >> b;
    if (a >= b)
    {
        for (int i = b; i <= a; i++)
        {
            soma += i;
        }   
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            soma += i;
        }
    }
    cout << soma << endl;
}

int main(){
    soma();
}