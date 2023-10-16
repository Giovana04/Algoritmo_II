//Leia 2 números inteiros positivos e apresente a soma dos n números existentes 
//entre eles (incluindo os limites do intervalo) (Por exemplo, para 5 e 8: 5+6+7+8).

#include <iostream>
using namespace std;

int soma(int a, int b){
    int soma=0;
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
    return (soma);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << soma(a, b);
}
