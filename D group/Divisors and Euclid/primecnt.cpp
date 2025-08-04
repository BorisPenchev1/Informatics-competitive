#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 1e3 + 2;
const int MAXD = 1e6;

int n;
vector <pair <int, int>> queries(MAXN);
bool is_comp[MAXD] = {false};

void sieve()
{
    is_comp[0] = is_comp[1] = true;
    
    for (int j = 4; j <= MAXD; j += 2) {
        is_comp[j] = true;
    }
    
    for (int i = 3 ; i * i <= MAXD ; i += 2) {
        if (is_comp[i]) continue;            
        for (ll j = i * i ; j <= MAXD ; j += 2 * i) {
            is_comp[j] = true;
        }
    }
}

void solve()
{
    sieve();

    int cnt = 0;

    cin >> n;

    for (int i = 2 ; i <= n ; i++)
    {
        cout << is_comp[i] << " ";
    }

    for (int i = 1 ; i <= n ; i++)
    {
        cin >> queries[i].first >> queries[i].second;

        cnt = 0;

        for (int j = queries[i].first ; j <= queries[i].second ; j++){
            if (!is_comp[j]) cnt++;
        }

        cout << cnt << '\n';
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