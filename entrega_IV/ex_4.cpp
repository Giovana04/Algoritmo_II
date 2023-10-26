#include <iostream>
using namespace std;

int vogais (string palavra, int* vogal);
string letras(string palavra);

int main(){
    int vogal;
    string palavra;
    getline(cin, palavra);
    vogais(palavra, &vogal);

    cout << "sao " << vogal << " vogais." << endl << "Sendo elas: " << letras(palavra);
}

int vogais (string palavra, int* vogal){
    *vogal = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' || palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U')
        {
            (*vogal)++;
        }
    }
}
string letras(string palavra){
    string letra;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' || palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U')
        {
            letra += palavra[i];
            letra += ' ';
        }
    }
    return (letra);
}
