#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 1e6 + 2;

int n;
int a[MAXN];
int res[MAXN];
stack <int> st;

void read()
{
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
}

void solve()
{
    for (int i = n ; i >= 1 ; i--)
    {
        if (!st.empty())
        {
            while (a[i] > st.top() && i != n && !st.empty())
            {
                st.pop();
            }
            
            if (st.empty()) res[i] = 0;
            else res[i] = st.top();
            st.push(a[i]);
        }
        else 
        {
            res[i] = 0;
            st.push(a[i]);
        }
    }

    for (int i = 1 ; i <= n ; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
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