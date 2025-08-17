#include <bits/stdc++.h>
#define int long long

using namespace std;

int n, m;

void solve()
{
    cin >> n >> m;

    n = max(m, n);
    m = min(n, m);

    for (int i = n ; ; i += n + 1)
    {
        if ((i + 2) % m == 0) 
        {
            cout << i + 1 << endl;
            exit(0);
        }
        else if ((i - 2) % m == 0)
        {
            cout << i - 1 << endl;
            exit(0);
        }

        if ((i + 1) % m == 0) 
        {
            cout << i << endl;
            exit(0);
        }
        else if ((i - 1) % m == 0)
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

signed main()
{
    fastIO();
    solve();
}