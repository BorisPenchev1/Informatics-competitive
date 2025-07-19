#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5e5 + 2;

string a[MAXN];

vector <int> toVec(string s){
    vector <int> vec;
    int curr;
    for (int i = 0; i < s.size(); i++){
        curr = s[i] - '0';
        vec.push_back(curr);
    }
    return vec;
}

bool cmp(string& a, string& b){
    if (a.size() == b.size()){
        vector <int> a1 = toVec(a);
        vector <int> b1 = toVec(b);

        for (int i = 0; i < a1.size() ; i++){
            if (a1[i] != b1[i]){
                return a1[i] > b1[i];
            }
        }
        return true;
    }
    return a.size() > b.size();
}

int main() {

    int n; 
    cin >> n;

    for (int i = 0; i < n ; i++){
        cin >> a[i];
    }

    sort(a, a + n, cmp);

    for (int i = 1 ; i < n ; i++){
        if (a[i] != a[i - 1]) {
            cout << a[i] << endl;
            return 0;
        }
    }

    return 0;
}