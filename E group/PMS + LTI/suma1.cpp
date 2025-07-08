#include<bits/stdc++.h>
#define ll unsigned long long
#define endl '\n'

using namespace std ;

ll Gaus(int m, int n){
    ll brc = n - m + 1 ;
    if (brc % 2 == 0){
        ll brd = brc / 2 ;
        ll sum = brd * (n + m) ;
        return sum ;
    }
    else {
        ll brd = brc / 2 ;
        ll sum = brd * ((n - 1) + m) + n ;
        return sum ;
    }
    return 0 ;
}

void speed(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){

    speed();

    int T ; cin >> T ;
    ll n, m, k ;
    for (int i = 1 ; i <= T ; i++){
        cin >> m >> n >> k ;
        ll ans = k * Gaus(m, n);
        if (ans % 2 == 0) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }

    return 0 ;
}