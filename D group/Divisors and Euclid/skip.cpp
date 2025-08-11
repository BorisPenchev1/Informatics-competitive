#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 1e5 + 7;

bool is_comp[MAXN];

int n;

void sieve()
{
    for (int i = 2 ; i <= n ; i++)
    {
        if (is_comp[i]) continue;
        for (int j = i * 2 ; j <= n ; j += i)
        {
            is_comp[j] = true;
        }
    }
}

void solve()
{
    cin >> n;

    sieve();

    // for (int i = 2 ; i <= n ; i++) cout << is_comp[i] << " ";
    // cout << endl;

    for (int i = n ; i >= 1 ; i--)
    {
        if (!is_comp[i])
        {
            cout << i << endl;
            exit(0);
        }
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