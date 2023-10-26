#include <iostream>
using namespace std;

void troca(string S);

int main(){
   
    string inverter;
    cin >> inverter;
    troca(inverter);
}

void troca(string S){
    int *ponteiro = NULL;
    string invertida;
    for (int i = 0; S[i] != '\0'; i++)
    {
        ponteiro = &i;
    }
    for (int i = 0; i < *ponteiro; i++)
    {
        invertida[*ponteiro-i] = S[i];
    }
    for (int i = 0; i <= *ponteiro; i++)
    {
        cout << invertida[i];
    }
    
}