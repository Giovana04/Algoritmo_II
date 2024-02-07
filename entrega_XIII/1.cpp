#include <iostream>
using namespace std;
#define N 10

int busca_sequencial(int x, int *v, int n) {
    int i;
    for (i = 0; i < n; i++)
    if (v[i] == x)
    return i - 1;
}

int main(){
    int v[N] = {0,1,2,3,4,5,6,7,8,9}, j, x;
    cin >> x;
    j = busca_sequencial(x, v, N);
    cout << j;
}