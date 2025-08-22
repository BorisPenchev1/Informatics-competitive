#include <bits/stdc++.h>
#define ll long long

using namespace std;

int f(int n)
{
    if (n < 10) return n;
    return n % 10 + f(n / 10);
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