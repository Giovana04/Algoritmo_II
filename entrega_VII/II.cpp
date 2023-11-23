/* Exercício 2: Uso de um Array de Registros (Nível Intermediário)
Usando o registro "Aluno" do exercício anterior, 
crie um array que pode armazenar dados de três alunos. 
Preencha esse array com informações de três alunos e, em seguida, imprima essas informações na tela. */

#include <iostream>
using namespace std;
#define N 3

typedef struct {
int idade;
float nota;
string nome;
} Aluno;

void preencher (Aluno *alunos);
void mostrar (Aluno *alunos);

int main(){
    Aluno alunos[N];
    for (int i = 0; i < N; i++)
    {
        preencher(&alunos[i]);
    }
    cout << endl << "====================================" << endl;
    for (int i = 0; i < 3; i++)
    {
        mostrar(&alunos[i]);
        cout<<endl;
    }
}

void preencher (Aluno *alunos){
    cout <<endl<< "Idade do aluno: ";
    cin >> alunos->idade;
    cout << endl << "Nota: ";
    cin >> alunos->nota;
    cin.ignore();
    cout << endl << "Nome do aluno: ";
    getline(cin, alunos->nome);
}

void mostrar (Aluno *alunos){
    cout << "Nome do aluno: " << alunos->nome << endl;
    cout << "Idade: " << alunos->idade << endl;
    cout << "Nota do " << alunos->nome << ": " << alunos->nota << endl<<endl; 
}