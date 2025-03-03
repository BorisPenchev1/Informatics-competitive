#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll a1, b1, T;

    cin >> T;

    for (int i = 1; i <= T; i++) {
        cin >> a1 >> b1;

        ll gcd = __gcd(a1, b1);
        a1 /= gcd;
        b1 /= gcd;

        if (a1 == 0) {
            cout << 0 << endl;
        }
        else if (a1 == b1) {
            cout << 1 << endl;
        }
        else if (a1 > b1) {
            if (a1 % b1 == 0) {
                cout << a1 / b1 << endl;
            }
            else {
                cout << a1 / b1 << " " << a1 % b1 << "/" << b1 << endl;
            }
        } 
        else {
            cout << a1 << "/" << b1 << endl;
        }
    }

    return 0;
}