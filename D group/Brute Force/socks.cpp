#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e3 + 7;

int n, k;
int a[MAXN];
vector <pair <pair <int, int>, int> > v;

bool cmp(pair <pair <int, int>, int> a, pair <pair <int, int>, int> b)
{
    return a.second < b.second;
}

void solve()
{
    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = i + 1 ; j <= n ; j++)
        {
            v.push_back({{a[i], a[j]}, a[j] - a[i]});
        }   
    }

    sort(v.begin(), v.end(), cmp);

    cout << v[k - 1].first.first << " " << v[k - 1].first.second << endl;
} 

void read()
{
    cin >> n >> k;
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