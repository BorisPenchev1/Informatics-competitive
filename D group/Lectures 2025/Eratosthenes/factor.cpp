#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 1;

int n;
int min_div[MAXN];
vector <int> f(MAXN);

void sieve()
{
    for (int i = 2 ; i <= n ; i++)
    {
        for (int j = i ; j <= n ; j += i) // j е съставно
        {
           if (min_div[j] == 0) min_div[j] = i;
        }
    }
}

void solve()
{

    cin >> n;

    sieve();

    for (int i = 2 ; i <= n ; i++)
    {
        f[i] = f[i / min_div[i]] + 1;
    }

    for (int i = 2 ; i <= n ; i++)
    {
        cout << i << ":" << min_div[i] << " "; 
    }
    cout << endl;

    for (int i = 2 ; i <= n ; i++)
    {
        cout << i << ":" << f[i] << " ";
    }
    cout << endl;
}

void read()
{

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

// пролетен 2025 - D група