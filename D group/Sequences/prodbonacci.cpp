#include<bits/stdc++.h>

using namespace std;

const int MAXNUM = 1e3 + 10;
const int MAXN = 1e6 + 2;
const int MOD = 1000;

int p[MAXN];
int first[MAXNUM][MAXNUM];
int n;
int a, b;

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

    p[1] = a;
    p[2] = b;
    first[a][b] = 2;


    for (int i = 3 ; i <= n ; i++){
        int curr = a * b;
        curr = f(curr);
        curr %= MOD;

        p[i] = curr;

        a = b;
        b = curr;

        if (first[a][b] != 0){
            cout << p[first[a][b] + (n - first[a][b]) % (i - first[a][b])] << endl;
            return;
        }

        first[a][b] = i;
    }

    cout << a << endl;
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(){
    fastIO();
    solve();
}