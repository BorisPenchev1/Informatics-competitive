#include<bits/stdc++.h>
#define int unsigned long long 

using namespace std;

const int MAXN = 1e7 + 2;

int n, k;
int a[MAXN];

int check(int l, int r)
{
    int sum = 0;
    for (int i = l ; i <= r ; )
    {
        int j;
        for (j = i + 1 ; j <= r ; j++)
        {
            sum += a[i] * a[j];
        }
        i = j - r + i;
    }

    return sum;
}

void read()
{  
    cin >> n >> k;

    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
}

void solve()
{
    int res = 0;
    for (int l = 1 ; l <= n ;)
    {
        // cout << "l: " << l << endl;
        // cout << "r: " << r << endl;

        int r;
        for (r = l + 1 ; r <= n ; r++)
        {
            //cout << check(l, r) << endl;
            if (check(l, r) >= k) res++;
        }
        l = r - n + l;
    }

    cout << res << endl;
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