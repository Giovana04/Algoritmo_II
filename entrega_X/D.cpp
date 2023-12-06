#include <iostream>
using namespace std;

void Alunos (int N, double *A);
double Nota (double *Notas, int alunos);

int main(){
    int alunos;
    cout << "Quantidade de alunos: ";
    cin >> alunos;
    double *p = new double[alunos];
    if (p == nullptr){
        cout << "Falha de alocacao de memoria" << endl;
        return -1;
    }
    Alunos(alunos, p);
    cout << "A media da turma e: "<< Nota(p, alunos);
    delete p;
    p = NULL;
}

void Alunos (int N, double *A){
    for (int i = 0; i < N; i++)
    {
        cout << "Nota do aluno " << i << ": ";
        cin >> *(A+i);
    }
}
double Nota (double *Notas, int alunos){
    double media = 0;
    for (int i = 0; i < alunos; i++)
    {
        media += *(Notas+i);
    }
    media = media/alunos;
    return media;
}