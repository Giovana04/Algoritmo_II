//Leia o raio de uma esfera e apresente o seu volume (4 π R^3/3).

#include <iostream>
using namespace std;

double volume(double r){
    return ((4*3.14*(r*r*r))/3);
}

int main(){
    double r;
    cin >> r;
    cout << volume(r);
}