#include<bits/stdc++.h>
#define int long long 

using namespace std;

int n, m;
int cnt[11];

void solve()
{
    cin >> m >> n;

    int curr;
    for (int i = 1 ; i <= m ; i++)
    {
        curr = i;
        for (int j = 1 ; j <= n ; j++)
        {

            string tmp = to_string(curr);
            //cout << curr << " ";
            
            cnt[tmp[0] - '0']++;

            curr += i;
        }
        //cout << endl;
    }
    //cout << endl;

    cout << cnt[1] << " ";
    for (int i = 2 ; i <= 9 ; i++){
        cout << cnt[i] << " ";
    }
    cout << endl;
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

signed main()
{
    fastIO();
    solve();
}