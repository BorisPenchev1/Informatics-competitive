#include<bits/stdc++.h>

using namespace std;

vector <int> to_vec(string s){
    vector <int> vec;

    reverse(s.begin(), s.end());
    for (int i = 0 ; i < s.size() ; i++){
        vec.push_back(s[i] - '0');
    }

    return vec;
}

vector <int> mul(vector <int> a, vector <int> b){
    int n = a.size(), m = b.size();
    vector <int> x(m + n);
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            x[i + j] += a[i] * b[j];
        }
    }

    int c = 0;
    for (int i = 0 ; i < n + m ; i++){
        x[i] += c;
        
        c = x[i] / 10;
        x[i] %= 10;
    }

    while (c > 0){
        x.push_back(c);
        c /= 10;
    }

    while (x.back() == 0 and x.size() > 1){
        x.pop_back();
    }   

    return x;
}

string toString(vector <int> v){
    string s;
    int n = v.size();

    for (int i = 0 ; i < n ; i++){
        s.push_back(v[i] + '0');
    }

    reverse(s.begin(), s.end());

    return s;
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
}

int main(){

    fastIO();

    string s;

    cin >> s;
    vector <int> a = to_vec(s);

    cin >> s;
    vector <int> b = to_vec(s);
    
    vector <int> res_vec = mul(a, b);
    string res = toString(res_vec);

    cout << res << endl;

    return 0;
}