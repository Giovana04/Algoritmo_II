#include <iostream>
using namespace std;
#define N 5
int x=0;
int soma(int *v, int n)
{
    if (n == 1)
    {
        x += v[0];
    }
    else
    {
        x += v[n-1];
        soma(v, n - 1);
    }
    return x;
}
int main()
{
    int V[N] = {1, 2, 3, 4, 5};
    cout << soma(V, N);
}
