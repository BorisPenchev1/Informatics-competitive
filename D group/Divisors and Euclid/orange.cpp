#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;


int main() {
    
    ull n, m; cin >> n >> m;

    ull gcd = __gcd(n, m);
    ull lcm = n * m / gcd;
    ull res = lcm / m;

    cout << res << endl;

    return 0;
}