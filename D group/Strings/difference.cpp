#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

bool cmp1(int a, int b){
    return a < b;
}

int main() {
    
    string s;
    cin >> s;

    sort(s.begin(), s.end(), cmp);

    long long a = stoi(s);

    sort(s.begin(), s.end(), cmp1);

    if (s[0] == '0') swap(s[0], s[1]);

    long long b = stoi(s); 

    cout << a - b << endl;

    return 0;
}