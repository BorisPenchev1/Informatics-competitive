#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2000 + 2; 

int a[MAXN][MAXN];
int b[MAXN][MAXN];

int main() {

    int n; cin >> n;
    
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= i ; j++){
            cin >> a[i][j];
        }
    }
    
    b[1][1] = a[1][1];
    
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= i; j++){
            b[i + 1][j - 1] = max(b[i][j] + a[i + 1][j - 1], b[i + 1][j - 1]);
            b[i + 1][j] = max(b[i][j] + a[i + 1][j], b[i + 1][j]);
            b[i + 1][j + 1] = max(b[i][j] + a[i + 1][j + 1], b[i + 1][j + 1]);
        }
    }
    
    int sum = 0;
    
    for (int j = 1 ; j <= n ; j++){
        sum = max(b[n][j], sum);
    }
    
    cout << sum << endl ;

}