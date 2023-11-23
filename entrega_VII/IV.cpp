/*Exercício 4: Uso de Registros dentro de Registros (Nível Avançado)
Crie um novo registro chamado "Curso", que contém um campo chamado "estudante" do tipo "Aluno" (o registro do exercício 1). 
Declare uma variável do tipo "Curso", preencha-a com dados e imprima esses dados na tela.*/

#include <iostream>
using namespace std;

typedef struct {
int idade;
float nota;
string nome;
} Aluno;

typedef struct
{
    string curso;
    string periodo;
    Aluno estudante;
}Curso;

void preencher (Curso *curso1);
void mostrar (Curso *curso1);

int main(){
    Curso curso1;
    preencher(&curso1);
    cout << endl << "====================================" << endl;
    mostrar(&curso1);
}

void preencher (Curso *curso1){
    cout <<endl<< "Idade do aluno: ";
    cin >> curso1->estudante.idade;
    cout << endl << "Nota: ";
    cin >>curso1->estudante.nota;
    cin.ignore();
    cout << endl << "Nome do aluno: ";
    getline(cin, curso1->estudante.nome);
    cout << endl << "Nome do curso: ";
    cin >> curso1->curso;
    cout << endl << "Periodo: ";
    cin >> curso1->periodo;
}

void mostrar (Curso *curso1){
    cout << "Nome do aluno: " << curso1->estudante.nome << endl;
    cout << "Idade: " << curso1->estudante.idade << endl;
    cout << "Nota do " << curso1->estudante.nome << ": " << curso1->estudante.nota << endl; 
    cout << "Cursando " << curso1->curso << " no periodo " << curso1->periodo;
}