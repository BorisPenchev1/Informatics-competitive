#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e7;

int a[MAXN];
int cnt[MAXN];
int n, k;

void read(){
    cin >> n >> k;

    for (int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
}

void solve(){
    
    for (int i = 1 ; i <= n; i++){
        for (int j = i ; j <= n ; j += i){
            if (a[j] % a[i] == 0) cnt[a[i]]++;
        }
    }

    int Max = 0;
    int Max_val;
    for (int i = 1 ; i <= n; i++){
        if (Max < cnt[i] and Max <= k){
            Max = cnt[i];
            Max_val = i;
        }
    }

    cout << Max_val << endl;
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

// i = delitel
// j = seg chislo
// cnt = 5 3 2 2 1 1 1 1 = br na sreshtane na i kato delitel na j
//       _______________
//       2 3 4 5 6 7 8 9
//       \             /
//        ------\/-----
//             i-ta
//vseki indeks e kolko puti e naj maluk prost delitel na nqkoe j (chislo)