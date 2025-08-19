#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

int n;
vector <int> divisors;

void solve()
{
    cin >> n;

    int dmax = sqrt(n);

    int d = 1;
    while (d * d < n)
    {
        if (n % d == 0)
        {
            divisors.push_back(d);
            divisors.push_back(n / d);
        }
        d++;
    }

    if (n % dmax == 0)
    {
        divisors.push_back(dmax);
    }

    sort (divisors.begin(), divisors.end());

    for (int i : divisors)
    {
        cout << i << " ";
    }
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