#include <iostream>
using namespace std;

typedef struct{
int serie;
string nome;
double nota;
} Aluno;

void Alunos (int N, Aluno *A);
double Nota (Aluno *Notas, int alunos);

int main(){
    int N;
    cout << "Quantidade de alunos: ";
    cin >> N;
    Aluno Sala[N];
    Aluno*p = new Aluno[N];
    if (p == nullptr){
        cout << "Falha de alocacao de memoria" << endl;
        return -1;
    }
    Alunos(N, p);
    cout << "A media da turma e: "<< Nota(p, N);
    delete p;
    p = NULL;
}

void Alunos (int N, Aluno *A){
    for (int i = 0; i < N; i++)
    {
        cout << "Serie do aluno " << i << ": ";
        cin >> A[i].serie;
        cout << "Nome do aluno " << i << ": ";
        cin >> A[i].nome;
        cout << "Nota do aluno " << i << ": ";
        cin >> A[i].nota;
    }
}
double Nota (Aluno *aluno, int alunos){
    double media = 0;
    for (int i = 0; i < alunos; i++)
    {
        media += aluno[i].nota;
    }
    media = media/alunos;
    return media;
}