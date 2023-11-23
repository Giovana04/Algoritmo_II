/* Exercício 3: Uso de Ponteiros para Registros (Nível Intermediário)
Crie um ponteiro para o registro "Aluno" e use-o para acessar e modificar os dados do aluno. */
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