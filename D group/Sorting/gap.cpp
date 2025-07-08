#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 2;

int a[MAXN];

int main() {
    
    int n ; cin >> n ;

    for (int i = 1; i <= n ; i++) cin >> a[i];

    sort(a + 1, a + n + 1);

    int curr;
    int Max = 0;

    for (int i = 2 ; i <= n ; i++){
        curr = a[i] - a[i - 1];

        Max = max(Max, curr);
    }

    cout << Max << endl ;

    return 0;
}