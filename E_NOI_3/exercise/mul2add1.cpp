#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, decomp[1000000]; 

int main() {
    cin >> n;
    ll i = 0;

    decomp[i++] = n;

    while (n > 1) {
        n /= 2;
        decomp[i++] = n;
    }

    ll d = i; 

    ll br = d;
    cout << br << endl;

    for (i = 0; i < d; i++) {
        if (decomp[i] == decomp[i - 1] / 2) {
            cout << 1 << " ";
        }
        else {
            cout << 2 << " ";
        }
    }
    cout << endl;

    return 0;
}