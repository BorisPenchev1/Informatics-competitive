#include <bits/stdc++.h>
#define int unsigned long long

using namespace std;

const int MAXN = 1e6 + 7;

int n, p, m, d;

void solve()
{
    cin >> n >> p >> m >> d;

    int digit = 0;
    for (int i = n ; ; i++)
    {
        string s = to_string(i);

        for (int j = 0 ; j < s.size() ; j++)
        {
            digit++;
            if (digit > p - n + 1) break;

            cout << s[j];
        } 

        if (digit > p - n + 1) break;
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