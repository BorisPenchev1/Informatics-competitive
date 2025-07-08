#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll n, a[100001] = {0}, br = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1); 

    for (ll i = 1; i <= n; i++) {
        ll count = 1;
        while (i < n && a[i] == a[i + 1]) {
            count++;
            i++;
        }
        if (count % 2 != 0) {
            br++;
        }
    }

    if (br % 2 == 0) {
        cout << 1 << endl;
    } else {
        cout << 2 << endl;
    }

    return 0;
}