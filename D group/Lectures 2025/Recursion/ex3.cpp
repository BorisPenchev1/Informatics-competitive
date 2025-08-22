#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

int k;
int a[MAXN];

int f(int n)
{
    if (n == 1) return a[1];
    return max(f(n - 1), a[n]);
}

void solve()
{
    cout << f(k) << endl;
}

void read()
{   
    cin >> k;
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