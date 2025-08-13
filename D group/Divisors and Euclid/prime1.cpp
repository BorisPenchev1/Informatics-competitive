#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 50000;

string s;
int is_comp[MAXN + 1];

void sieve()
{
    for (int i = 2 ; i < MAXN ; i++)
    {
        if (is_comp[i]) continue;
        for (int j = i * 2 ; j < MAXN ; j += i)
        {
            is_comp[j] = true;
        }
    }
}

int nextPrime(int curr)
{
    if (curr == 1) return 2;
    if (curr == 2) return 3;
    if (curr == 3) return 5;
    if (curr == 5) return 7;

    for (int i = curr + 1 ; ; i++)
    {
        if (!is_comp[i]) return i;
    }
}

void solve()
{
    sieve();

    cin >> s;
    int d = s.size();

    int ans = 0;
    int curr_prime = 1;
    for (int i = 0 ; i < d ; i++)
    {
        curr_prime = nextPrime(curr_prime);

        if (s[i] == '0') continue;

        ans += curr_prime;
    }

    cout << ans << endl;
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