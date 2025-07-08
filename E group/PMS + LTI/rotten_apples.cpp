#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, t, m ; cin >> n >> t >> m ;
    
    int a[3], cnt = 0;    
    for (int i = 0 ; i < m ; i++){
        cin >> a[i] ;

        if (a[i] - t >= 1 and a[i] + t <= n){
            cnt += t * 2 + 1 ;
        }
        else if (a[i] - t < 1 and a[i] + t <= n){
            cnt += a[i] + t + 1 ;
        }
        else if (a[i] - t >= 1 and a[i] + t > n){
            cnt += (n - a[i]) + t + 1 ; 
        }
        else {
            cnt += a[i] + (n - a[i]) + 1 ;
        }
    }

    int res = n - cnt ;     

    cout << res << endl ;

    return 0;
}