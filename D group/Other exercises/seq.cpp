#include<bits/stdc++.h>
#define int unsigned long long

using namespace std;

int x1, n;
vector <int> prod;
vector <int> x;

void to_vec_X(){
    string s;
    s = to_string(x1);
    reverse(s.begin(), s.end());
    x1 = stoi(s);

    while (x1 > 0){
        x.push_back(x1 % 10);
        x1 /= 10;
    }
}

vector <int> multiply(){
    vector <int> res(prod.size() + x.size());
    for (int i = prod.size() - 1 ; i >= 0 ; i--){
        for (int j = x.size() - 1 ; j >= 0 ; j--){
            res[i + j ] += prod[i] * x[j];
        }
    }

    int c = 0;
    for (int i = 0 ; i < res.size() ; i++){
        res[i] += c;
        c = res[i] / 10;
        res[i] %= 10;
    }

    while (c > 0){
        res.push_back(c);
        c /= 10;
    }

    while (res.back() == 0 and res.size() > 1){
        res.pop_back();
    }   

    return res;
}

void solve(){
    cin >> x1 >> n;

    to_vec_X();
    
    int cnt = 1;
    prod = {1};
    while (cnt <= n){
        prod = multiply();
        cnt += prod.size();
    }

    cnt -= prod.size();

    int diff = n - cnt;

    int res = prod[diff];

    cout << res << endl;
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