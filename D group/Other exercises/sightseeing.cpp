#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e5 + 7;

int n;
int a[MAXN];
set <int> cnt;

void solve()
{
    int ans = 0;
    for (int l = 1 ; l <= n ; l++)
    {
        for (int r = l ; r <= n ; r++)
        {
            int MaxL = 0, MaxR = 0;
            for (int i = l, j = r ; i <= j ; i++, j--)
            {
                if (a[i] > MaxL)
                {
                    cnt.insert(i);
                    MaxL = a[i];
                }

                if (a[j] > MaxR)
                {
                    cnt.insert(j);
                    MaxR = a[j];
                }
            }

            ans += cnt.size();

            // cout << "l: " << l << " r: " << r << ":" << endl;
            // for (int i : cnt) cout << i << " ";
            // cout << endl;

            cnt.clear();
        }
    }

    cout << ans << endl;
}

void read()
{
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
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