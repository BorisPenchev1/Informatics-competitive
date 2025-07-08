#include<bits/stdc++.h>
#define ll long long

using namespace std ;

const int MAXN = 100001;

struct Telephone{
    ll p, r ;
};

Telephone t[MAXN] ;

bool cmp(Telephone& a, Telephone& b){
    return a.p < b.p;
}

int main(){

    ll n, m ; cin >> n >> m ;

    for (int i = 1; i <= n ; i++){
        cin >> t[i].p >> t[i].r ;
    }

    sort(t + 1, t + n + 1, cmp) ;
    
    ll br = 0 ;
    for(int i = 1; i <= n; i++ ){
        if (t[i].r > t[i - 1].r ){
            br += t[i].r - t[i - 1].r;
        }         
    }

    cout << br << endl ;

    return 0 ;
}