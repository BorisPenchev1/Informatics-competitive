#include<bits/stdc++.h>

using namespace std ;

int n, k, a[222] ;

int main(){

    cin >> n ;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j++ ;) {
            cin >> k ;
            if (k == 0) break ;
            a[k]++;
        }
    }

    int fl = false ;

    for (int i = 1 ; i <= 221 ; i++){
        if (a[i] == n){
            cout << i << " " ;
            fl = true ;
        } 
    }

    if (!fl) cout << 0 << endl ;

    cout << endl ;

    return 0 ;
}