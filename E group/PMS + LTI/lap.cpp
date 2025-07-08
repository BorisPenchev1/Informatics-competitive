#include<bits/stdc++.h>

using namespace std ;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long curr, previ ;
    cin >> previ ;
    long long nok = 0 ;
    for (int i = 2 ; i <= 4 ; i++){
        cin >> curr ;
        nok = (curr * previ) / __gcd(previ, curr);
        previ = nok ;
    }

    cout << nok << endl ;


    return 0;

}