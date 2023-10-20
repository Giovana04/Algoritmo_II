#include <iostream>
using namespace std;

string senha(string senhas);

int main()
{
    string senhas;
    cout << "Digite uma senha que possua letras maiusculas, minusculas e numeros: " << endl;
    cin >> senhas;
    while (senha(senhas) == "senha inavalida")
    {
        cout << "senha inavalida, tente novamente: ";
        cin >> senhas;
        senha(senhas);
    }
    cout << senha(senhas);
}

string senha(string senhas)
{
    bool Maiuscula = false, minuscula = false, numerica = false;
    int letras = 0;

    while (senhas[letras] != '\0')
    {

        if ('0' <= senhas[letras] && senhas[letras] <= '9')
        {
            numerica = true;
        }
        if ('a' <= senhas[letras] && senhas[letras] <= 'z')
        {
            minuscula = true;
        }
        if ('A' <= senhas[letras] && senhas[letras] <= 'Z')
        {
            Maiuscula = true;
        }
        letras++;
    }   

if (Maiuscula == false || minuscula == false || numerica == false || letras < 8)
{
    return ("senha inavalida");
}

else
{
    return ("senha valida.");
}

}