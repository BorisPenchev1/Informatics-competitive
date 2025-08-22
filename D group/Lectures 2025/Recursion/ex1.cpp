#include <bits/stdc++.h>
#define ll long long

using namespace std;

int f(int n)
{
    if (n == 1) return 1;
    return n + f(n - 1);
}

void solve()
{
    int k;
    cin >> k;

    cout << f(k) << endl;
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