#include<bits/stdc++.h>
#define ll long long

using namespace std ;

ll n, curr, a[100001] = {0}, res, sum, br;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n ;

    a[0] = 0 ;

    for (ll i = 1 ; i <= n ; i++){
        cin >> a[i] ;
    }

    for (ll i = 1 ; i <= n ; i++){
        for (ll j = i + 1; j < n ; j++){
            if (a[j] <= a[i]) br++ ;
        }
        sum = a[i] + br ;
        res = max(sum, res) ;
    }
    
    cout << res << endl ;

}

/*
12
56 61 14 7 61 9 61 64 25 66 61 55 
*/