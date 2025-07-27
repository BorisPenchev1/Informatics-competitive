#include<bits/stdc++.h>

using namespace std;

const int MAX = 200001 * 50;

int a[MAX];
int n, m;

void read(){
    cin >> n >> m;

    int w, h;
    int curr = 0;
    for (int i = 1 ; i <= n ; i++){
        cin >> w >> h;

        for (int j = curr ; j <= curr + w ; j++){
            a[j] = max(a[j], h);
        }

        curr += w;
    }
}

void solve(){
    int x, y;
    int cnt = 0;
    for (int i = 1 ; i <= m ; i++){
        cin >> x >> y;

        if (a[x] >= y) cnt++;
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