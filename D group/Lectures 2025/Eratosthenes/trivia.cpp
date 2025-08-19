#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e5 + 7;

vector <int> s(MAXN + 1, 1);
vector <double> t(MAXN + 1);

void sieve()
{
    for (int d = 2 ; d <= MAXN ; d++)
    {
        for (int k = 2 * d ; k <= MAXN ; k += d)
        {
            s[k] += d;
        }
    }
}

void solve()
{
    sieve();

    for (int i = 2 ; i <= MAXN ; i++)
    {
        t[i] = (double) s[i] / i;
    }

    int l, r;
    cin >> l >> r;

    double Max = 0;
    double Min = INT_MAX;

    int Max_n;
    int Min_n;
    for (int i = l ; i <= r ; i++)
    {
        if (Min > t[i])
        {
            Min_n = i;
            Min = t[i];
        }

        if (Max < t[i])
        {
            Max_n = i;
            Max = t[i];
        }
    }

    cout << Min_n << " " << Max_n << endl;
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