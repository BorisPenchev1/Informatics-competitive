#include<bits/stdc++.h>
#define ll unsigned long long

using namespace std;

int main(){

    ll x1, y1, x2, y2; cin >> y1 >> x1 >> y2 >> x2 ;

    ll n; cin >> n;
    char d, p;
    ll r;
    for (ll i = 1 ; i <= n ; i++){
        cin >> d >> r >> p;

        
        if (d == 'V'){

            if (p == 'L'){
                y1 = y1 + r - 1;
            }
            else {
                y2 -= r;
            }
        }
        else{

            if (p == 'T'){
                x2 -= (x2 - r); 
            }
            else{
                x1 += r;
            }
        }
    }

    ll S = (y2 - y1) * (x2 - x1);

    cout << S << endl;

    return 0;
}