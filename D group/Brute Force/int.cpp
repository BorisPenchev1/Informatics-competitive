#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 1e6 + 7;

int l, r;

ll newProduct(ll n)
{
    string s = to_string(n);
    int d = s.size();

    ll product = 1;

    for (int i = 0 ; i < d ; i++)
    {
        product *= (s[i] - '0');
    }

    return product;
}

void solve()
{
    cin >> l >> r;

    ll product;
    int cnt = 0;
    for (ll i = l ; i <= r ; i++)
    {
        product = newProduct(i);
        //cout << product << endl;
        if (product == 0) continue;
        if (i % product == 0) cnt++;
    }

    cout << cnt << endl;
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fastIO();
    solve();
}