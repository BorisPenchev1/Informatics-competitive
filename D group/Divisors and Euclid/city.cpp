#include <bits/stdc++.h>
#define ll long long
#define __ std::

using namespace std;

vector<ll> horizontal;
vector<ll> vertical;

vector<ll> divisors(ll n){
    vector<ll> ans;
    for (ll i = 1; i * i <= n; i++){
        if (n % i == 0){
            ans.push_back(i);
            if (n != i * i) ans.push_back(n / i);
        }
    }
    return ans;
}

int main(){
    ll n, m, h, v;
    cin >> n >> m >> h >> v;

    ll curr;
    for (ll i = 0; i < h; i++) {
        cin >> curr;
        horizontal.push_back(--curr);      // make 0-based
    }
    horizontal.push_back(0);               // include left edge
    horizontal.push_back(n);               // include right edge
    sort(horizontal.begin(), horizontal.end());

    for (ll i = 0; i < v; i++) {
        cin >> curr;
        vertical.push_back(--curr);       
    }
    vertical.push_back(0);               
    vertical.push_back(m);               
    sort(vertical.begin(), vertical.end());

    ll g = 0;
    for (size_t i = 1; i < horizontal.size(); i++){
        g = __gcd(g, horizontal[i] - horizontal[i-1]);
    }
    for (size_t i = 1; i < vertical.size(); i++){
        g = __gcd(g, vertical[i] - vertical[i-1]);
    }

    auto divs = divisors(g);
    sort(divs.begin(), divs.end());

    cout << divs.size() << "\n";
    for (ll d : divs) cout << d << " ";
    cout << "\n";
    return 0;
}
