#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 4;

int n;
int a[MAXN];
int cnt[10][10];

void read(){
    cin >> n;

    for (int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
}

void solve(){
    for (int i = 1 ; i <= n ; i++){
        int j = 1;
        while (a[i] > 0){
            cnt[j][a[i] % 10]++;

            j++;
            a[i] /= 10;
        }
    }

    // for (int i = 0 ; i <= 9 ; i++){
    //     for (int j = 0 ; j <= 9 ; j++){
    //         cout << cnt[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    long long sum = 0;
    for (int i = 0 ; i < 10 ; i++){
        for (int j = 0 ; j <= 9 ; j++){
            sum += 1LL * cnt[i][j] * (cnt[i][j] - 1) / 2;
        }
    }

    cout << sum << endl;
}

int main(){
    read();
    solve();
}