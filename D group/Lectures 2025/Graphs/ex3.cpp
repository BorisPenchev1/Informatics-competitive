#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

int n;
int visited[MAXN];
vector <int> v[MAXN];

void dfs(int ver)
{
    visited[ver] = 1;
    cout << ver << " ";
    for (int i = 0 ; i < v[ver].size() ; i++)
    {
        int nb = v[ver][i];
        if (!visited[nb])
        {
            dfs(nb);
        }
    }
}

void solve()
{
    int cnt = 0;
    for (int i = 1 ; i <= n ; i++)
    {
        if (!visited[i])
        {
            cout << "vers: ";
            dfs(i);
            cnt++;
            cout << endl;
        }
    }

    cout << "count of components: " << cnt << endl;
}

void read()
{
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        int cnt_nei; cin >> cnt_nei;
        while (cnt_nei)
        {
            int curr; cin >> curr;
            v[i].push_back(curr);
            cnt_nei--;
        } 
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