#include<bits/stdc++.h>

using namespace std;

const int MAXN = 100 + 2;

int a[MAXN];

int main(){

    int n ; cin >> n ;

    for (int i = 1 ; i <= n ; i++) cin >> a[i] ;

    int res = -1, l, r ;
    for (int i = 1 ; i <= n ; i++){
        for (int j = i + 1; j <= n ; j++){
            if (a[i] == a[j]){
                res = a[i];
                l = i ;
                r = j ;
            }
        }
    }

    if (res == -1) cout << "No" << endl; 
    else {
        cout << res << endl ;
        cout << l << " " << r << endl ;
    }

    return 0;
}