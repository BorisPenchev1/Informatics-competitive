#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e5 + 7;

struct Point
{
    int x, y;
};

int n, a, b;

Point points[MAXN];

void solve()
{
    
}

void read()
{
    cin >> n >> a >> b;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> points[i].x >> points[i].y;
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