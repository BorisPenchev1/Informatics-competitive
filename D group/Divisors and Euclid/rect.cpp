#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5001;

int c[MAXN];

int main() {
    
    int n; cin >> n;

    int j = 0;
    for (int i = 1 ; i <= n ; i++){
        if (n % i == 0){
            c[j] = i;
            j++;
        }
    }

    int Min = __INT_MAX__;
    int a, b;
    int curr;
    int br = 0;
    int m = j / 2;

    if (j % 2 == 1) m++;

    for (int i = 0; i < m; i++){
        a = c[i];
        b = c[j - 1 - i];

        curr = a + b;
        Min = min(Min, curr);

        br++;
    }

    cout << br << " " << Min * 2 << endl;

    return 0;
}