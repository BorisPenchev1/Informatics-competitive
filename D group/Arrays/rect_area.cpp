#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2002;

int a[MAXN][MAXN];
int b[MAXN][MAXN];

int main(){

    int n, m; cin >> n >> m;
    int ul, dr; cin >> ul >> dr;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> a[i][j];

            b[i][j] = a[i - 1][j] + a[i][j] + b[i][j - 1];
            
        }
    }

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    

    return 0;
}