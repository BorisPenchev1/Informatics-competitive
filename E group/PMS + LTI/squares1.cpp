#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll solve(ll num) {
    ll i = 2, m = num, br, res = 1;
    
    while (i * i <= m) {
        br = 0; 
        if (m % i == 0) {
            while (m % i == 0) {
                br++;
                m /= i;
            }
            if (br % 2 != 0) br++;
            br /= 2;
            res *= pow(i, br);
        }
        i++;
    }

    if (m > 1) res *= m;

    return res;
}

ll lcm(ll a, ll b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, num;
    cin >> n;
    
    ll nok;
    cin >> nok; 

    for (ll i = 1; i < n; i++) { 
        cin >> num;
        nok = lcm(nok, num);
    }

    cout << solve(nok) << endl;
    return 0;
}
