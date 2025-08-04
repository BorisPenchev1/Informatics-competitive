#include<bits/stdc++.h>
#define int long long 

using namespace std;

const int MAXN = 1e6 + 7;

int n, k;
int a[MAXN];

void read(){
    cin >> n >> k;
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
}

void solve(){
    int cnt = 0;
    int Max = 0;
    bool fl = false;
    bool startZero = false;
    bool isThereWay = false;

    if (a[0] == 0) fl = true;
    else cnt++;

    for (int i = 1 ; i < n ; i++){
        if (a[i - 1] == 0) {
            startZero = true;
            isThereWay = true;
        }
        if (a[i] == a[i - 1] + 1 and startZero){
            if (cnt != 0) cnt++;
        }
        else {
            if (a[i] == 0) cnt = 1;
            startZero = false;
            
        }

        
        Max = max(Max, cnt);

        if (Max > k){
            fl = false;
        }
    }

    if (!isThereWay){
        cout << "No " << 0 << endl;
        return;
    }

    if (fl){
        cout << "Yes " << Max << endl;
    }
    else{
        cout << "No " << Max << endl;
    }
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