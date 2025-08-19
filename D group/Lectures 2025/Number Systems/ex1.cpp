#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

int n, p;
string q;

void solve()
{
    cin >> n >> p;

    int curr;
    while (n > 0)
    {
        curr = n % p;
        n /= p;

        q.push_back(curr + '0');
    }

    reverse(q.begin(), q.end());

    cout << q << endl;
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