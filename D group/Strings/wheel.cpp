#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int n, k;
string wheel;

void init()
{
    cin >> n >> k;
    for (int i = 0 ; i < n ; i++)
    {
        wheel.push_back('?');
    }
}

void solve()
{
    int cnt;
    char letter;
    for (int i = 0 ; i < k ; i++)
    {
        cin >> cnt >> letter;

        for (int j = 1 ; j <= cnt ; j++)
        {
            wheel.push_back(wheel[0]);
            wheel.erase(wheel.begin());
        }

        //cout << wheel << endl;

        if (wheel[0] == letter) continue;

        else if (wheel[0] == '?') 
        {
            wheel[0] = letter;
            continue;
        }

        else 
        {
            cout << '!' << endl;
            return;
        }

        
    }

    string ans;

    ans.push_back(wheel[0]);
    ans.push_back(wheel[n - 1]);
    for (int i = n - 2 ; i >= 1 ; i--) ans.push_back(wheel[i]);

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
    init();
    solve();
}