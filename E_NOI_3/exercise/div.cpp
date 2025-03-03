#include<bits/stdc++.h>

using namespace std ;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, l, r, k ;

    cin >> t >> k;

    for (int i = 1 ; i <= t ; i++){
        int res = 0 ;
        cin >> l >> r ;   
        int a = l / k ;
        int b = r / k ;
        if (l % k == 0) res = b - a + 1 ;
        else res = b - a ;
        cout << res << endl ;
    }

    return 0 ;
}   