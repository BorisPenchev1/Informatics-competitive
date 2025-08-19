#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

int n;
vector <int> is_comp;
vector <int> primes;

void sieve()
{
    for (int i = 2 ; i <= n ; i++)
    {
        if (is_comp[i] == 0) // i е просто
        {
            for (int j = 2 * i ; j <= n ; j += i) // j е съставно
            {
                is_comp[j] = 1;
            }
        }
    }
}

void solve()
{
    cin >> n;
    is_comp.assign(n + 1, 0); // за вектора
    is_comp[0] = is_comp[1] = 1; // 0 и 1 не са прости

    sieve();

    for (int i = 2 ; i <= n ; i++)
    {
        if (is_comp[i] == 0)
        {
            primes.push_back(i);
        }
    }

    cout << primes.size() << endl;
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