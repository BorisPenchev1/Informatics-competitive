#include<bits/stdc++.h>

using namespace std;

const int MAXN = 3e5 + 2;

int a[MAXN];
int n, m;

void read(){
    cin >> n >> m;

    for (int i = 1; i <= n ; i++){
        cin >> a[i];
    }
}

void solve(){
    int l = 0, r = 0;
    int diff = 0;
    long long cnt = 0;

    for (int r = 0; r < n; r++) {
        while (a[r] - a[l] > m) l++;
        cnt += l;
    }

    cout << cnt << endl;
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fastIO();
    read();
    solve();
}