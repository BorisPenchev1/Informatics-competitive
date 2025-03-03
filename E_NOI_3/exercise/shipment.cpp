#include<bits/stdc++.h>
#define ll long long

using namespace std;

const ll MAXN = 10e6 ;
ll n, a[MAXN], m, k, i ;

int main(){
     
    cin >> n >> m >> k;

    for (i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }

    sort(a, a + i) ;

    ll br = 1, res = 0 ;
    i = 0 ;
    while (i <= n){
        if (a[i] == a[i - 1]) br++ ;
        else if (br > k){
            if (br - k <= k - 1) res++ ;
            else if (br >= m and br % (m + k) == 0){
                res += br / m ;
                br %= m ;
                res += br / k ;
            } 
            else if (br == m) res += 1 ;
            br = 1 ;
        }
        else br = 1 ;
        i++ ;
    }

    cout << res + 1 << endl ;
    

}