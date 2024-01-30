#include <iostream>
using namespace std;

double pot(int n, int p){
    if (p == 0){
        return 1;
    }
    if( p > 0){
        return n * pot(n,p-1);
    }    
}

int main(){
    int n, p;
    cout << "Digite a base: ";
    cin >> n;
    cout << "Digite o expoente: ";
    cin >> p;
    cout << "O resultado é: " << pot(n, p);
}