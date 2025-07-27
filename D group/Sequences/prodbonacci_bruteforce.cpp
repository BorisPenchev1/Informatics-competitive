#include<bits/stdc++.h>
#define int long long

using namespace std;

int a, b;
int n;

int f(int n){
    string s;
    s = to_string(n);

    for (int i = 0 ; i < s.size() ; i++){
        if (s[i] != '0') s[i] -= 1;
        else s[i] = '9';
    }

    int res = stoi(s);

    return res;
}

void solve(){
    cin >> n >> a >> b;

    int curr = 0;
    for (int i = 3 ; i <= n ; i++){
        curr = a * b;
        curr = f(curr);
        curr %= 1000;

        a = b;
        b = curr;
    }

    if (n == 1) {
        cout << a << endl;
    }
    else if (n == 2){
        cout << b << endl;
    }
    else cout << curr << endl;
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

signed main(){
    fastIO();
    solve();
}