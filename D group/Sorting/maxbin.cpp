#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main() {
    
    string s; cin >> s;

    sort(s.begin(), s.end(), cmp);

    cout << s << endl ;

    return 0;
}