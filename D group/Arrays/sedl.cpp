#include<bits/stdc++.h>

using namespace std;

const int MAXN = 100;

int a[MAXN][MAXN];
int Max_r[MAXN];
int Min_c[MAXN];

int main(){

    int n, m; cin >> n >> m;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> a[i][j];
        }
    }

    int Max = 0;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            Max = max(Max, a[i][j]);
        }
        Max_r[i] = Max;
        Max = 0;
    }

    int Min = __INT_MAX__;
    
    for (int j = 1 ; j <= m ; j++){
        for (int i = 1 ; i <= n ; i++){
            Min = min(Min, a[i][j]);
        }
        Min_c[j] = Min;
        Min = __INT_MAX__;
    }

    int res = -1;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            if (a[i][j] == Max_r[i] and a[i][j] == Min_c[j]){
                res = a[i][j];
            }
        }
    }

    cout << res << endl;

    return 0;
}