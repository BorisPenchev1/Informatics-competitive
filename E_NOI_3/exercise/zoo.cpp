#include<bits/stdc++.h>
#define ll long long

using namespace std ;

int n, h, m, p, Max, p_h, p_m, Max_m, Max_h ;

int main(){

    cin >> n ;

    for (int i = 1 ; i <= n ; i++){
        cin >> h >> m >> p ;
        m += p ;
        if (m >= 60) {
            h += m / 60 ;
            m = m % 60 ;
        }
        if (h > 24) h %= 24 ;
        if (h > Max_h){
            Max_m = m ;
            Max_h = max(h, p_h);
        }
        else if (h == Max_h){
            Max_m = max(m, p_m) ;
            Max_h = max(h, p_h);
        }
        p_h = h ;
        p_m = m ;
    }

    cout << Max_h << " " << Max_m << endl ;
 
}