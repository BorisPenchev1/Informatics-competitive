#include<bits/stdc++.h>

using  namespace std ;

#define ll long long

bool PrimeNum(ll m){

    ll i ;
    bool fl = true ;

    i = 2 ;

    while (i <= m / 2){
        if (m % i == 0){
            fl = false ;
            break;
        }
        i++ ;
    }
    return fl ;
}

int main(){

    ll n = 1000000007 ;

    if( PrimeNum(n) ) cout << "Yes" << endl ;
    else cout << "No" << endl ;

    return 0 ;
}