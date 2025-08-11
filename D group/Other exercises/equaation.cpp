#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 1e5 + 4;

int a, b, l;
int isPossible[MAXN];

void read()
{
    cin >> a >> b >> l;
}

void solve()
{
    for (int i = 1 ; i <= l ; i++)
    {
        for (int x = 1 ; i - x * a > 0 ; x++)
        {
            if ((i - x * a) % b == 0) isPossible[i] = 1;
        }
    }

    int cnt = 0;
    for (int i = 1 ; i <= l ; i++)
    {
        if (isPossible[i] == 0) cnt++;
    }

    cout << cnt << endl;
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