#include<bits/stdc++.h>

using namespace std ;

const int MAXN = 1e7 + 5 ;

int main(){

    int n, m ; cin >> n >> m ;

    int a[MAXN] ;
    for (int i = 0 ; i <= n ; i++){
        cin >> a[i] ;
    }

    int l = 0, sum = 0, br = 0 ;
    for (int r = 0 ; r < n ; r++){
        sum += a[r];

        if (sum == m){
            br++ ;
            l++ ;
            r++ ;
        }

        while (sum > m){
            sum -= a[l] ;
            l++ ;
        }

        if (sum < m) r++ ;
    }

    cout << br << endl ;

    return 0 ;
}