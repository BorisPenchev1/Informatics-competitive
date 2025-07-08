#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    ll a, b; cin >> a >> b ; 
    ll n = a * b ;

    ll br = 1;
    while (1){

        if (a < b) swap(a, b);

        ll x = a - (a - b);

        a -= x ;
        n = a * b ;

        if (n <= 0) break;

        br++ ;
    }

    cout << br << endl ;

    return 0 ;
}