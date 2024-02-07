#include <iostream>
using namespace std;
#define N 10

void soma(int t, int *v, int n, int *s){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (v[i]+v[j] == t)
            {
                s[0] = i;
                s[1] = j;
            }
            
        }
        
    }
    
}

int main(){
    int v[N] = {0,1,2,3,4,5,6,7,8,9}, t, s[2] = {0};
    cin >> t;
    soma(t, v, N, s);
    cout << s[0] << " " << s[1];
}