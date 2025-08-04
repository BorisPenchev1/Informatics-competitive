#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 1e6 + 2;

int n, q;
int div_count[MAXN];

void sieve(){
    for (int i = 1 ; i <= n ; i++){
        for (int j = i ; j <= MAXN - n; j += i){
            div_count[j]++;
        }
    }
}

void solve(){
    cin >> n >> q;

    sieve();
    
    int curr;
    for (int i = 1 ; i <= q ; i++){
        cin >> curr;
        cout << div_count[curr - n] << "\n";
    }
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fastIO();
    solve();
}