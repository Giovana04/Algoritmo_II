//Leia um número inteiro e informe se o número é ou não múltiplo de 4.

#include <iostream>
using namespace std;

bool multiplo (int a){
return (a % 4 == 0? true : false);
}

int main(){
    int a;
    cin >> a;
    if (multiplo(a))
    {
        cout << a << " e multiplo de 4.";
    }
    else{
        cout << a << " nao e multiplo de 4.";
    }
}
