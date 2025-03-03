#include <bits/stdc++.h>

using namespace std;

char Maxc;
int a[200], Max = 0, i, d;
string s;

int main() {

    cin >> s;

    d = s.size();

    for (i = 0; i < d; i++) {
        a[s[i]]++;
    }

    for (i = 97; i <= 122; i++) {
        if (Max < a[i]) {
            Max = a[i];
            Maxc = i;
        }
    }

    for (i = 1; i <= Max; i++) {
        cout << Maxc << endl;
    }
    return 0;
}
