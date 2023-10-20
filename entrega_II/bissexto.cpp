#include <iostream>
using namespace std;

int ano;

bool bissexto_00(int ano)
{
    return (ano % 400 == 0 ? true : false);
}
bool bissexto(int ano)
{
    return (ano % 4 == 0 ? true : false);
}

int main()
{

    cout << "Escreva o ano desejado: " << endl;
    cin >> ano;
    
    if (ano % 100 == 0)
    {
        if (bissexto_00(ano) == true)
        {
            cout << "O ano " << ano << " e bissexto.";
        }
        else
        {
            cout << "O ano " << ano << " nao e bissexto.";
        }
    }

    else
    {
        if (bissexto(ano) == true)
        {
            cout << "O ano " << ano << " e bissexto.";
        }
        else
        {
            cout << "O ano " << ano << " nao e bissexto.";
        }
    }
}