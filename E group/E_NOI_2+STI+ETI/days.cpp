#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    ll p, n; cin >> p >> n ;

    ll weeks = n /  7 ;
    ll last_day = ((n % 7 - 1) + p) % 7 ;
    ll times_s = weeks * 2;

    if (p == 3) times_s++ ;
    if (last_day == 0) last_day = p ;

    cout << weeks << endl ;
    cout << last_day << endl ;
    cout << times_s << endl;

    return 0;
}