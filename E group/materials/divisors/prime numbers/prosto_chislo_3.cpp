#include<bits/stdc++.h>

using  namespace std ;

#define ll long long

bool PrimeNum(ll m){

    ll i, pr;
    bool fl = true ;

    i = 2 ;
    pr = 1 ;

    while (pr <= m){
        if (m % i == 0){
            pr = i * i ;
            cout << i << endl ;
            while (m % i == 0) m /= i ;
            fl = false ;
        }
        i++ ; 
    }
    return fl ;
}

int main(){

    ll n = 4 * 7 ;

    if( PrimeNum(n) ) cout << "Yes" << endl ;
    else cout << "No" << endl ;

    return 0 ;
}