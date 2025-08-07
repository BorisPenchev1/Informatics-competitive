#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'

using namespace std;

const ll MAXN = 1e7 + 7;

ll n, k;
ll  X, Y, Z, M;
ll a[MAXN];
ll prefix[MAXN];

void generate()
{
    for (ll i = 3 ; i <= n ; i++)
    {
        a[i] = (a[i - 2] * X + a[i - 1] * Y + Z) % M;
    }
}

ll calcSum(ll l, ll r)
{
    return prefix[r] - prefix[l - 1];
}

ll binary(ll l, ll r)
{
    ll lPtr = l - 1, rPtr = r + 1;
    ll mid;

    while (lPtr < rPtr - 1)
    {
        mid = (rPtr + lPtr) / 2;

        ll left = calcSum(l, mid);
        ll right = calcSum(mid + 1, r);

        if (left < right)
        {
            lPtr = mid;
        }
        else
        {
            rPtr = mid;
        }
    }

    return max(calcSum(l, lPtr), calcSum(lPtr + 2, r));
}

void read()
{
    cin >> n >> k;
    cin >> a[1] >> a[2] >> X >> Y >> Z >> M;

    generate();

    for (ll i = 1 ; i <= n ; i++){
        prefix[i] = prefix[i - 1] + a[i];
    }
}

void solve()
{
    ll res = 0;

    for (ll l = 1 ; l <= n ; ++l)
    {
        for (ll r = l ; r <= n ; ++r)
        {
            if (binary(l, r) >= k) res++;
        }
    }
    
    cout << res << endl;
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
    read();
    solve();
}

// binary search and prefix sums