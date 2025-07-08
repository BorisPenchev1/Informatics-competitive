#include<bits/stdc++.h>

using namespace std ;

long long n, res = 1;

int main(){

    cin >> n ;

    for (int i = 1 ; i <= n ; i++){
        res = res * 2 + 1 ;
    }

    cout << res << endl ;

    return 0 ;
}