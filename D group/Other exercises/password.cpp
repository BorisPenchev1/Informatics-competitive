#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

string encoded;

void solve()
{
    int n; cin >> n;
    cin >> encoded;

    char c = encoded[0];

    if (n > (c - 'a' + 1) * 2)
    {
        n -= (c - 'a' + 1);
    }
    else
    {
        n /= 2;
    }

    for (int i = 0 ; i < n ; i++) cout << encoded[i];
    cout << endl;
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

//bbccdcdbbbcccdd
//       |