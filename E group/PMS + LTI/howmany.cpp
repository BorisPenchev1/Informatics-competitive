#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m, r, k ; cin >> n >> m >> r >> k ;
    int q; cin >> q ;

    if (q == 1){
        if (r <= m){
            cout << r << endl ;
            return 0;
        }
        else {
            cout << m << endl ;
            return 0;
        }
    }
    else if (q == 2){
        cout << abs(k - n) << endl ;
        return 0 ;
    }
    else {
        cout << abs((k + r) - n);
        return 0;
    }
    

    return 0;
}