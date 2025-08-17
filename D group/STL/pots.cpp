#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e5 + 7;

int n, m;
vector <int> pots;
vector <int> lids;

void solve()
{
    int cnt = 0;
    while (!pots.empty() and !lids.empty())
    {
        if (pots.back() <= lids.back())
        {
            pots.pop_back();
            lids.pop_back();
            cnt++;
        }
        else
        {
            lids.pop_back();
        }
    }

    cout << cnt << endl;
}

void read()
{
    cin >> n >> m;

    int curr;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> curr;
        pots.push_back(curr);
    }

    for (int i = 1 ; i <= m ; i++)
    {
        cin >> curr;
        lids.push_back(curr);
    }

    sort (pots.begin(), pots.end(), greater<>());
    sort (lids.begin(), lids.end(), greater<>());

    // for (int i : pots) cout << i << " ";
    // cout << endl;
    // for (int i : lids) cout << i << " ";
    // cout << endl;
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