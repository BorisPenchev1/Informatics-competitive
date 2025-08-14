#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;

void solve()
{
    cin >> n;

    int k = 0;
    int i = 1;
    int j;
    for (; j <= n ; i = pow(2, i))
    {
        j += i;
    }

    cout << i << " " << k << " " << j << " " << j - i << endl;
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