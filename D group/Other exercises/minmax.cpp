#include<bits/stdc++.h>
#define int long long 

using namespace std;

const int MAXN = 1e5 + 7;
const int MAXNUM = 1e8 + 1;

int n, s;
int a[MAXN];

void read(){
    cin >> n >> s;
    for (int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);
}

void solve(){
    int l = 1;
    int r = n;
    while (l < r){      
        if (l <= n - r + 1){
            if (s <= l * (a[l + 1] - a[l])){
                cout << a[r] - a[l] - s / l << endl;
                return;
            }
            else {
                s -= l * (a[l + 1] - a[l]);
                l++;
            }
        }
        else {
            if (s <= (n - r + 1) * (a[r] - a[r - 1])){
                cout << a[r] - a[l] - s / (n - r + 1) << endl;
                return;
            }
            else {
                s -= (n - r + 1) * (a[r] - a[r - 1]);
                r--;
            }
        }
    }

    if (l >= r) cout << 0 << endl;

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

// редица от числа
// "красиво" число - сума от цифрите е просто число
// брой редици от последователни числа със сума от елементите "красиво" число
// преимер
// 1 3 5 2 7 4 6 13

