#include <iostream>
using namespace std;
#define N 10

int recursivo_sequencial(int x, int *v, int n) {
    if (v[n-1] == x)
    {
        return n-1;
    }
    else{
        recursivo_sequencial(x, v, n - 1);
    }
    return -1;
}

int main(){
    int v[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, j, x;
    cin >> x;
    j = recursivo_sequencial(x, v, N);
    cout << j;
}