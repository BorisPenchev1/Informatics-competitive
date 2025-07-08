#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 2 ;

int a[MAXN];
int b[MAXN];
int res[MAXN];

int main(){

    int n; cin >> n;
    for (int i = 1 ; i <= n ; i++){
        cin >> a[i] ;
    }

    int br = 0;
    for (int i = 1 ; i <= n ; i++){
        b[a[i]]++;
        if (b[a[i]] > 2){
            br++ ;
            continue;
        } 
        res[i - br] = a[i];
    }

    for (int i = 1 ; i <= n - br; i++){
        cout << res[i] << " " ; 
    }
    cout << endl ;

    return 0;
}