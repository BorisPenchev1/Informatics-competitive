#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 2;

struct Articles
{
    int a, b, idx;
};

int n, k;
Articles delivery[MAXN];

bool cmp(Articles& x, Articles& y)
{
    if (abs(x.a) + abs(x.b) < abs(y.a) + abs(y.b))
    {
        return true;
    }
    else if (abs(x.a) + abs(x.b) == abs(y.a) + abs(y.b))
    {
        if (abs(x.a) < abs(y.a)) return true;
        else return x.idx < y.idx;
    }

    return false;
}

void solve()
{
    sort (delivery + 1, delivery + n + 1, cmp);
    cout << delivery[k].idx << endl;
}

void read()
{
    cin >> n >> k;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> delivery[i].a >> delivery[i].b;
        delivery[i].idx = i;
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