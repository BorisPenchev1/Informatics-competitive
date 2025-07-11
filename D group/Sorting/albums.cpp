#include<bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 2;

int a[MAX];
int b[MAX];
int c[MAX];
int common[MAX];

int main(){

    int n, m;
    cin >> n >> m;

    for (int i = 1 ; i <= n ; i++) cin >> a[i];
    for (int i = 1 ; i <= m ; i++) cin >> b[i];

    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);

    int u = 1, d = 1, i = 1;
    while (u <= n and d <= m) {
        if (a[u] < b[d]){
            c[i] = a[u];
            u++; i++;
        }
        else {
            c[i] = b[d];
            d++; i++;
        }
    }

    while (u <= n){
        c[i] = a[u];
        u++; i++;
    }
    while (d <= m){
        c[i] = b[d];
        d++; i++;
    }

    // for (int j = 1 ; j <= i ; j++){
    //     cout << c[j] << " ";
    // }
    // cout << endl;

    int br = 0;
    int k = 1;
    for (int j = 2 ; j <= i ; j++){
        if (c[j] == c[j - 1]){
            br++;
            common[k] = c[j];
            k++;
        }
    }

    cout << br << endl;
    for (int i = 1 ; i <= br ; i++){
        cout << common[i] << " ";
    }
    cout << endl;

    return 0;
}