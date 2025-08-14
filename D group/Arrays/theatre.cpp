#include <bits/stdc++.h>
#define ll unsigned int

using namespace std;

const int MAX = 2005;

int n, m;
int price[MAX][MAX];

void solve()
{
    cin >> n >> m;

    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 1 ; j <= m ; j++)
        {
            cin >> price[i][j];
        }
    }

    ll sum = 0;
    int curr;

    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 1 ; j <= m ; j++)
        {
            cin >> curr;

            if (curr == 1)
            {
                sum += price[i][j];
            }
        }
    }

    cout << sum << endl;
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

signed main()
{
    fastIO();
    solve();
}