#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e5 + 7;
const int MAXQ = 1e4 + 7;

int n, q;
int a[MAXN];
int queries[MAXQ];
int cnt[MAXN];

void solve()
{
    cin >> n >> q;

    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    for (int i = 1 ; i <= q ; i++)
    {
        cin >> queries[i];

        if (n - queries[i] + 1 < queries[i])
        {
            int loc_cnt = 0;
            for (int j = queries[i] + 1 ; j <= n ; j++)
            {
                if (a[j] == a[queries[i]]) loc_cnt++;
            }

            cout << cnt[a[queries[i]]] - loc_cnt - 1 << " " << loc_cnt << endl;
        }
        else
        {
            int loc_cnt = 0;
            for (int j = queries[i] - 1 ; j >= 1 ; j--)
            {
                if (a[j] == a[queries[i]]) loc_cnt++;
            }

            cout << loc_cnt << " " << cnt[a[queries[i]]] - loc_cnt - 1 << endl;
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
    solve();
}