#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXT = 5;
const int MAXN = 1e7 + 7;

struct Test
{
    int n;
    vector<int> v;
};

int T;
Test tests[MAXT];
int min_div[MAXN];
int cnt[MAXN / 2];

void sieve()
{
    for (int i = 2 ; i <= MAXN ; i++)
    {
        for (int j = i * i ; j <= MAXN ; j++)
        {
            if (min_div[j] == 0) min_div[j] = i;
        }
    }
}

void solve()
{
    sieve();

    for (int i = 1 ; i <= T ; i++)
    {
        for (int j = 0 ; j < tests[i].n ; j++)
        {
            int curr = tests[i].v[i];
            while (curr > 1)
            {
                cnt[min_div[curr]]++;
                curr /= min_div[curr];
            }
        }
    }
}

void read()
{
    cin >> T;
    for (int i = 1 ; i <= T ; i++)
    {
        cin >> tests[i].n;
        for (int j = 1 ; j <= tests[i].n ; j++)
        {
            int curr;
            cin >> curr;
            tests[i].v.push_back(curr);
        }
    }
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