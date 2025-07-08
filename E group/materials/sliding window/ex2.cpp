#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e7 + 5;

int main() {
    int n, k;
    cin >> n >> k;

    int a[MAXN];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, sum = 0, Max = 0;

    for (int i = 0; i < k; i++) {
        sum += a[i];
    }
    Max = sum;

    for (int r = k; r < n; r++) {
        sum += a[r] - a[r - k];
        Max = max(Max, sum);
    }

    cout << Max << endl;

    return 0;
}
