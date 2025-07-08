#include<bits/stdc++.h>

using namespace std;

const int MAXNM = 1e3 + 2;

int a[MAXNM];
int b[MAXNM];

bool cmp(int a, int b){
    return a > b;
}

int main() {
    
    int n, m; cin >> n >> m;

    for (int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }

    for (int i = 1 ; i <= m ; i++){
        cin >> b[i];
    }

    sort(a + 1, a + n + 1, cmp);
    sort(b + 1, b + m + 1, cmp);

    int Min = min(n, m);

    int sum = 0;
    for (int i = 1 ; i <= Min ; i++){
        sum += a[i] * b[i];
    }

    cout << Min << " " << sum << endl ;

    return 0;
}