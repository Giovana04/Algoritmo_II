#include <iostream>
using namespace std;

int dobrar(int &a){
    return 2*a;
}

int main(){
    int a;
    cin >> a;
    cout << dobrar(a);
}
