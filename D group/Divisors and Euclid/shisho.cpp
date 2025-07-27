#include<bits/stdc++.h>

using namespace std;

const int MAXN = 5e4 + 10;

int n;
string a[MAXN];

bool isPrime(int n){
    int i = 2;
    while (i * i <= n){
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

void read(){
    cin >> n;

    string s;
    for (int i = 1 ; i <= n ; i++){
        cin >> s;
        reverse(s.begin(), s.end());
        
        a[i] = s;
    }
}

void solve(){
    int cnt = 0;
    for (int i = 1 ; i <= n ; i++){
        int curr = stoi(a[i]);
        if (isPrime(curr)) cnt++;
    }

    cout << cnt << endl;
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(){
    fastIO();
    read();
    solve();
}