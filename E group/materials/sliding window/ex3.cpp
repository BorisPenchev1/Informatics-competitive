#include<bits/stdc++.h>

using namespace std ;

const int MAXN = 1e7 + 5 ;

int main(){

    int n, m ; cin >> n >> m ;

    int a[MAXN] ;
    for (int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }

    int r = 0, l = 0, Max = 0, sum = a[l] ;
    while (r < n){
        sum += a[r] ;

        if (sum <= m){
            r++ ;
        }

        while (sum > m){
            l++ ;
            sum -= a[l - 1];
        }

        Max = max(r - l + 1, Max);

        r++ ;
    }

    cout << Max << endl ;

    return 0;
}