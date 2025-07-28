#include<bits/stdc++.h>
#define int long long 

using namespace std;

const int MAXN = 205;

int n, m, h;
int bundle[MAXN][MAXN];
int precomp[MAXN][MAXN];

void read(){
    cin >> n >> m >> h;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> bundle[i][j]; 
            if (bundle[i][j] >= h) precomp[i][j] = 1;
            else precomp[i][j] = 0;
        }
    }
}

void solve(){
    int cnt = 0;
    
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            if (precomp[i][j] == 1) cnt++;
            else {
                if (precomp[i - 1][j] == 1 and precomp[i][j - 1] == 1 and precomp[i + 1][j] == 1 and precomp[i][j + 1] == 1) cnt++;
            }
        }
    }

    cout << cnt << endl;
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

signed main(){
    fastIO();
    read();
    solve();
}

//60p