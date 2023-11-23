/* Exercício 1: Criação de um registro simples (Nível Fácil)
Crie um registro chamado "Aluno", que possui três campos: nome (string), 
idade (int) e nota (float). Depois, declare uma variável desse tipo e atribua alguns valores para ela. 
Por fim, imprima esses valores na tela.  */

#include <iostream>
using namespace std;

typedef struct {
int idade;
float nota;
string nome;
} Aluno;

int main(){
    Aluno aluno1;
    getline(cin, aluno1.nome);
    cin >> aluno1.idade;
    cin >> aluno1.nota;
    cout << "O/A aluno(a) " << aluno1.nome << " de " << aluno1.idade << " anos, tirou " << aluno1.nota;
}