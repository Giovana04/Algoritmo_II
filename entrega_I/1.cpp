//Leia um número inteiro e informe se o número é ou não múltiplo de 4.

#include <iostream>
using namespace std;

void multiplo(){
    int a;
    cin >> a;
    if (a % 4 == 0)
    {
        cout << a << " e multiplo de 4.";
    }
    else{
        cout << a << " nao e multiplo de 4.";
    }
}

int main(){
    multiplo();
}

