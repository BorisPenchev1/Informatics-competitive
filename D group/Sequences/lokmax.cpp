#include<bits/stdc++.h>
#define int long long 

using namespace std;

const int MAXN = 1e5 + 7;
const int INF = -1e9 + 2;

int n;
int a[MAXN];

void read()
{
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
}

void solve()
{
    int d = __INT_MAX__;
    int prev = INF, curr = INF;

    int i = 1;
    while (a[i] != 0)
    {
        if (a[i] > a[i - 1] and a[i] > a[i + 1])
        {
            if (prev == INF) prev = i;
            else if (curr == INF and prev != INF) curr = i;
            else 
            {
                prev = curr;
                curr = i;
            }
        }

        if (prev != INF and curr != INF) d = min(d, curr - prev - 1);

        i++;
    }

    if (prev == INF or (prev != INF and curr == INF)) cout << 0 << endl;
    else cout << d << endl;
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
    read();
    solve();
}