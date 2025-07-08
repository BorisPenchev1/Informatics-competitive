#include <bits/stdc++.h>
#define ll unsigned long long
#define endl '\n'

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll a, b ; cin >> a >> b ;

    ll gcd = __gcd(a, b);

    for (ll i = 1 ; i <= gcd ; i++){
        if (a % i == 0 and b % i == 0){
            cout << i << " " << a / i << " " <<  b / i << endl ;
        }
    }
    

    return 0;
}