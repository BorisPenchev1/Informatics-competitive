#include<bits/stdc++.h>
#define ull unsigned long long 
#define ll long long

using namespace std;

const int MAXN = 1e7 + 7;

int n, k;
ull A;
ull B, C, D;
ull a[MAXN];

void solve()
{

    int T;
    cin >> T;

    for (ull i = 0; i < T ; i++)
    {
        cin >> n >> k >> A >> B >> C >> D;

        a[1] = A;
        for (ull j = 2 ; j <= n ; j++)
        {
            a[j] =  (B * a[j - 1] + C) % D;
        }

        sort(a + 1, a + n + 1);

        cout << a[k] << endl;
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