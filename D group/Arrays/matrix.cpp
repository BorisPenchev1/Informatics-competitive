#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 22;
const int MAXM = 5e4 + 2;
const ll MOD = 1e9 + 7;

int matrix[MAXN][MAXM];
int n, m;

void read(){
    cin >> n >> m;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> matrix[i][j] ;
        }
    }
}

void solve(){

    ll sum = 0;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            ll curr = (i * j) * ((n - i + 1) * (m - j + 1));
            curr %= MOD;

            sum += curr * matrix[i][j];
            sum %= MOD;
        }
    }

    cout << sum << endl;
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    fastIO();
    read();
    solve();
}