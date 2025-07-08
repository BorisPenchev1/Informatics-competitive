#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n + 1];
    int Sum[n + 1];

    a[0] = 0;
    Sum[0] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        Sum[i] = Sum[i - 1] + a[i];
    }

    int t;
    cin >> t;

    int l, r;
    for (int i = 1; i <= t; i++) {
        cin >> l >> r;
        cout << Sum[r] - Sum[l - 1] << endl;
    }

    return 0;
}