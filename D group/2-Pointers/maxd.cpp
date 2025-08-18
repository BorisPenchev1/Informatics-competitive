#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 2 * 1e5;
const int MAXEL = 1e5;

int n;
int a[MAXN];
int cnt[MAXEL];

bool check()
{
    for (int i = 0 ; i <= MAXEL ; i++)
    {
        if (cnt[i] > 1) return false;
    }

    return true;
}

void solve()
{
    int lPtr = 1, rPtr = 1;
    int Max = 0;
    deque <int> ans;

    while (rPtr <= n)
    {
        cnt[a[rPtr]]++;

        if(!check())
        {
            while (!check())
            {
                cnt[a[lPtr]]--;
                lPtr++;
            }
        }

        if (rPtr - lPtr + 1 > Max)
        {
            Max = rPtr - lPtr + 1;
            ans.clear();
            for (int i = lPtr ; i <= rPtr ; i++)
            {
                ans.push_back(a[i]);
            }
        }

        rPtr++;
    }

    cout << Max << endl;
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
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