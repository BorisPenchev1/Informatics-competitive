#include<bits/stdc++.h>

using namespace std ;

const int MAXN  = 1e5 + 2;

int a[MAXN];

int main(){

    int n ; cin >> n ;

    for (int i = 0 ; i < n ; i++) cin >> a[i] ;
    sort(a, a + n);

    int previ = a[0], curr, res = 0, br = 1 ;
    
    int i = 1 ;
    while (i < n){
        curr = a[i];
        if (curr != previ){
            res += br / 2 ;
            br = 0;
        }
        else br++ ;

        previ = curr ;
        i++ ;
    }
    
    if (res % 2 == 1) cout << 1 << endl ;
    else cout << 2 << endl ;

    return 0;
}