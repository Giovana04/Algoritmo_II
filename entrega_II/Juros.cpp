#include <iostream>
using namespace std;

float juros (float dinheiro, float taxa, int anos);

int main(){
    float din, taxa;
    int anos;
    cout << "Quanto será investido? ";
    cin >> din;
    cout << "insira a taxa de juros anual: ";
    cin >> taxa;
    cout << "insira por quantos anos o valor irá render: ";
    cin >> anos;
    cout << juros(din, taxa, anos);
}

float juros (float dinheiro, float taxa, int anos){
    float p = 1;
    for (int i = 0; i < anos; i++){
        p = p * (1+(taxa/100));
    } 
    return dinheiro + p;
}
