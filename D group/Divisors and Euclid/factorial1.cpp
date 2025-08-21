#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;
const int MAXQ = 1e5 + 7;

int Q;
vector <pair <int, int>> queries;
int min_div[MAXN];
int ans[MAXQ];

void sieve()
{
    for (int i = 2 ; i <= MAXN ; i++)
    {
        for (int j = i ; j <= MAXN ; j += i)
        {
            if (min_div[j] != 0) min_div[j] = i;
        }
    }
}  

void solve()
{
    sort (queries.begin(), queries.end());

    sieve();

    int mult = 0, cnt = 0;
    for (auto [x, i] : queries)
    {
        while (mult < x)
        {
            mult++;
            int tmp = mult;
            while (tmp != 1)
            {
                cnt++;
                tmp /= min_div[tmp];
            }
        }
        ans[i] = cnt;
    }

    for (int i = 1 ; i <= Q ; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

void read()
{
    cin >> Q;
    for (int i = 1 ; i <= Q ; i++)  
    {
        int x;
        cin >> x;

        queries.push_back({x, i});
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