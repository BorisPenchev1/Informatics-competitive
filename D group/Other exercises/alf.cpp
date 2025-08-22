#include <bits/stdc++.h>
#define ll long long

using namespace std;

int T;

void solve()
{
    cin >> T;

    unsigned ll n, k;
    for (int i = 1 ; i <= T ; i++)
    {
        cin >> n >> k;

        int last = n % 10;
        for (unsigned ll j = 1 ; j <= k ; j++)
        {
            n += last;
            last = n % 10;
        }

        cout << n << endl;
    }
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