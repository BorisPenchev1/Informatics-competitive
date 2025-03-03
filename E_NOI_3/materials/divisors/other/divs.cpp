#include<bits/stdc++.h>
#define ll long long

using namespace std ;

int divs(ll n){
    ll i = 1, br = 0;

    while (i * i <= n){
        if (n % i == 0) br++ ;
        i++ ;
    }
    return br ;
}

int main(){

    ll  n, k, br = 0 ; ;

    cin >> n >> k;

    

    for (ll i = 1 ; i <= n ; i++){
        for (ll j = i + 1; j <= n ; j++){
            int d_i = divs(i) ;
            int d_j = divs(j) ;
            if (d_i * d_j * k == i * j) br++ ;
        }
    }

    cout << br + 1 << endl ;

    return 0 ;
}