#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; cin >> n ;

    int curr, previ ;
    cin >> previ ;
    int nok = 0 ;
    for (int i = 2 ; i <= n ; i++){
        cin >> curr ;
        nok = (curr * previ) / __gcd(previ, curr);
        previ = nok ;
    }

    cout << nok << endl ;


    return 0;
}