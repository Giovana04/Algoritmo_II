#include <iostream>
using namespace std;

int soma(int n){
    if (n <= 0){
        return 0;
    }
    else{
        return n + soma(n-1);
    }   
}

int main(){
    int n;
    cin >> n;
    cout << soma(n);
}

