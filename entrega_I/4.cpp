//Leia o raio de uma esfera e apresente o seu volume (4 π R^3/3).

#include <iostream>
using namespace std;

void volume(){
    double r;
    cin >> r;
    cout << ((4*3.14*(r*r*r))/3);
}

int main(){
    volume();
}