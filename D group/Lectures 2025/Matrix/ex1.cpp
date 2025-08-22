#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a[15][15];
int b[15][15];
int n, m;

void solve()
{
    int sum = 0;
    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 1 ; j <= m ; j++)
        {
            sum += a[i][j] * b[i][j];
        }
    }

    cout << sum << endl;
}

void read()
{
    cin >> n >> m;

    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 1 ; j <= m ; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 1 ; j <= m ; j++)
        {
            cin >> b[i][j];
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
    read();
    solve();
}