#include<bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 2;

int a[MAX];
int b[MAX];
int c[MAX];

int main(){

    int n, m; cin >> n >> m;

    for (int i = 1 ; i <= n ; i++) cin >> a[i];
    for (int i = 1 ; i <= m ; i++) cin >> b[i];

    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);

    // for (int i = 1 ; i <= n ; i++) cout << a[i] << " ";
    // cout<< endl ;
    // for (int i = 1 ; i <= m ; i++) cout << b[i] << " ";
    // cout << endl ;

    int Min = min(n, m);
    int br = 0;

    for (int i = 1 ; i <= Min ; i++){
        if (a[i] == b[i]){
            c[br + 1] = a[i]; 
            br++;
        }
    }

    cout << br << endl;
    for (int i = 1 ; i <= br ; i++){
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}