#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 1e6 + 7;

ll n, k;
ll a[MAXN];

void read()
{  
    cin >> n >> k;
    for (int i = 1 ;i  <= n ; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}

void solve()
{
    int rPtr = 1;
    int Max = 0;
    int cnt = 1;

    while (rPtr < n)
    {
        if (a[rPtr + 1] - a[rPtr] == 0) 
        {
            rPtr++;
            continue; 
        }
            if (a[rPtr + 1] - a[rPtr] <= k)
        {
            cnt++;
        }
        else
        {
            Max = max(cnt, Max); 
            cnt = 1;
        } 
        rPtr++;
    }

    Max = max(cnt, Max); 

    cout << Max << endl;
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