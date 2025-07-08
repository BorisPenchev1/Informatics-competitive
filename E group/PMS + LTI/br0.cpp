#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 2;

int prefix[MAXN];

void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){

    speed();

    ll n; cin >> n;
    
    string a; cin >> a;

    int br0 = 0;
    for (int i = 0 ; i < n ; i++){
        if (a[i] == '0') br0++;
        prefix[i] = br0;
    }
    
    for (int i = 0 ; i < n ; i++){
        cout << prefix[i] << endl;
    }
    
    int T; cin >> T;

    int L, R;
    for (int i = 1 ; i <= T ; i++){
        cin >> L >> R;
        cout << prefix[R - 1] - prefix[L - 2] << endl;
    }

    return 0;
}