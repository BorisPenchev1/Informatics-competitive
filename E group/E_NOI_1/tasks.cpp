#include<bits/stdc++.h>

using namespace std ;

int n, h, m, p, q, d ;

int main(){

    cin >> n >> h >> m >> p >> q ;

    while (n > 0){
        m += p ;
        n-- ;
        if (m > 59){
            m = m % 60 ;
            h++ ;
            n += q ;
        } 
    }

    if (h > 23){
        d = h / 24 ;
        h = h % 24 ;
    }

    cout << d << " " << h << " " << m << endl ;

    return 0 ;
}