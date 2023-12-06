#include <iostream>
using namespace std;
#define N 6

int main(){
    int v[N], *prt;
    prt = v;
    if (!(prt = new(nothrow) int)){
        cout << "Falha de alocacao de memoria" << endl;
        return -1;
    }
    for (int i = 0; i < N; i++)
    {
        prt[i] = i;
    }
    for (int i = 0; i < N; i++)
    {
        cout << endl << prt[i] << " ";
    }
    delete prt;
    prt = NULL;
}