#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2002;

int s[MAXN][MAXN];

int main(){

    int n, m; cin >> n >> m;
    int a, b; cin >> a >> b;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> s[i][j];
        }
    }

    

    return 0;
}