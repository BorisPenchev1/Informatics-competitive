#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e3 + 7;

int k, n, m;
int a[MAXN];
int table[MAXN][MAXN];

void solve()
{
    for (int i = 1 ; i <= k ; i++)
    {
        table[i / m][i % m] = a[i];
    }

    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 1 ; j <= m ; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void read()
{
    cin >> k >> n >> m;
    for (int i = 1 ; i <= k ; i++)
    {
        cin >> a[i];
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
    read();
    solve();
}