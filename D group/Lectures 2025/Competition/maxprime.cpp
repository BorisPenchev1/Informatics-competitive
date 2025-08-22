#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e7 + 7;

int n;
bool is_comp[MAXN];

void sieve()
{
    for (int i = 2 ; i * i <= n + 1 ; i++)
    {
        if (!is_comp[i])
        {
            for (int j = i * i ; j <= n + 1 ; j += i)
            {
                is_comp[j] = true;
            }
        }
    }
}

void solve()
{
    cin >> n;

    sieve();

    // for (int i = 2 ; i <= n ; i++) cout << is_comp[i] << " ";
    // cout << endl;

    int p = 2, m = 0, s = 0;
    for (int i = 2 ; i < n ; i++)
    {
        if (!is_comp[i])
        {
            m++;
            p = i;

            s += to_string(i).size();
        } 
    }

    int d = 0;
    int p1 = p - 1;

    int i = 2;
    while (i * i <= p1)
    {
        if (p1 % i == 0)
        {
            if (!is_comp[i])
            {
                d = max(i, d);
                d = max(p1 / i, d);
            }
            while (p1 % i == 0) p1 /= i;
        }
        i++;
    }

    cout << p << " " << m << " " << s << " " << d << endl;
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