#include <bits/stdc++.h>

using namespace std;

int main() {

    string s; cin >> s;
    int p; cin >> p;

    string sum = 0;
    int j = 0;
    for (int i = s.size() - 1; i >= 0 ; i--){
        sum += (s[i] - '0') * pow(p, j);
        j++;
    }

    cout << sum << endl;

    return 0;
}