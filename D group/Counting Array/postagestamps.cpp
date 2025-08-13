#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 1e6 + 7;
const int MAX_NUM = 1e3;

int m, n, p, q;
int a[MAXN];
int cnt[MAX_NUM];

void read()
{
    cin >> n >> m >> p >> q;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
}

void solve()
{
    for (int i = 1 ; i <= n ; i++)
    {
        cnt[a[i]]++;
    } 

    int pq = p * q;

    int total = 0;
    
    for (int i = 1 ; i <= MAX_NUM ; i++)
    {
        if (cnt[i] == 0) continue;

        int pages_ocup = cnt[i] / pq;
        if (pages_ocup == 0) pages_ocup++;
        else if (cnt[i] % pq > 0) pages_ocup++;

        total += pages_ocup;
    }

    int ans = total / (m * 2);
    if (total % (m * 2) > 0) ans++;

    cout << ans << endl;
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