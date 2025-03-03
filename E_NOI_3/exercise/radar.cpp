#include<bits/stdc++.h>
#define ll long long

using namespace std ;

 ll n, a[100001], product[1000001], res = 1;

int main(){

    cin >> n ;

    for ( ll i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }

    sort(a, a + n) ;

    for ( ll i = n - 1 ; i >= 0 ; i--){
        product[n - 1 - i] = a[i] - a[i - 1] ;
    }

    for ( ll i = 0 ; i < n - 1 ; i++){
        res *= product[i] ;
    }

    if (res == 1) res = n - 1 ;

    cout << res << endl ; 

}
