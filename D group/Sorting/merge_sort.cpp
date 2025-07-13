#include<bits/stdc++.h>

using namespace std;

const int MAX = 1e6 + 2;

int a[MAX];
int b[MAX];
int c[MAX];

void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){

    speed();

    int n; cin >> n;
    for (int i = 1 ; i <= n ; i++) cin >> a[i];

    int m; cin >> m;
    for (int i = 1 ; i <= m ; i++) cin >> b[i];

    int u = 1, d = 1, i = 1;
    while (u <= n and d <= m) {
        if (a[u] < b[d]) {
            c[i] = a[u];
            i++; u++;
        }
        else {
            c[i] = b[d];
            i++; d++;
        }
    }
    
    while (u <= n){
        c[i] = a[u];
        i++; u++;
    } 
    while (d <= m){
        c[i] = b[d];
        i++; d++;
    } 

    cout << n + m << endl;
    for (int j = 1 ; j < i ; j++){
        cout << c[j] << " ";
    }
    cout << endl;

    return 0;
}