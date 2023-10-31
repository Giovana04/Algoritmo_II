/* Passagem por referência com strings
Neste desafio, crie uma função que tome uma string por referência e a converta em letras
maiúsculas.*/

#include <iostream>
using namespace std;

string Maiuscula(string *frase);

int main()
{
    string frase;
    getline(cin, frase);
    Maiuscula(&frase);
}

string Maiuscula(string *frase)
{
    for (int i = 0; i < (*frase).length(); i++){
        if ((*frase)[i] < 'z' && (*frase)[i] > 'a' && (*frase)[i] != ' '){
            (*frase)[i] -= 32;
        }
    }
    for (int i = 0; i < (*frase).length(); i++)
    {
        cout << (*frase)[i];
    }
}
