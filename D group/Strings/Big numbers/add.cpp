#include<bits/stdc++.h>

using namespace std;

vector <int> to_vec(string s){
    reverse(s.begin(), s.end());
    vector <int> vec;
    int n = s.size();

    for (int i = 0 ; i < n ; i++){
        vec.push_back(s[i] - '0');
    }

    return vec;
}

vector <int> Sum(vector <int> a, vector <int> b){
    int n = a.size(), m = b.size();
    vector <int> x(n + m);

    for (int i = 0; i < n; i++) {
        x[i] += a[i];
    }

    for (int i = 0; i < m; i++) {
        x[i] += b[i];
    }

    int c = 0;
    for (int i = 0 ; i < n + m ; i++){
        x[i] += c;

        c = x[i] / 10;
        x[i] %= 10;
    }

    while (c > 0){
        x.push_back(c % 10);
        c /= 10;
    }

    while (x.size() > 1 and x.back() == 0){
        x.pop_back();
    }

    return x;

}

string toString(vector <int> v){
    string s;
    for (int i : v){
        s.push_back(i + '0');
    }
    reverse(s.begin(), s.end());

    return s;
}

int main(){

    string s;

    cin >> s;
    vector <int> a = to_vec(s);

    cin >> s;
    vector <int> b = to_vec(s);

    vector <int> result_vec = Sum(a, b);
    string res = toString(result_vec);

    cout << res << endl;

    return 0;
}