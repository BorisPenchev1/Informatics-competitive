#include<bits/stdc++.h>

using  namespace std ;

#define ll long long

bool PrimeNum(ll m){

    ll i ;
    bool fl = true ;

    i = 2 ;

    while (i * i <= m){
        if (m % i == 0){
            while (m % i == 0) m /= i ;
            fl = false ;
            break;
        }
        i++ ;
    }
    return fl ;
}

int main(){

    ll n = 1000000001 ;

    if( PrimeNum(n) ) cout << "Yes" << endl ;
    else cout << "No" << endl ;

    return 0 ;
}