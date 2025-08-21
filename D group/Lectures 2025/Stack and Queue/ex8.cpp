#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

string s;
stack <char> st;

void solve()
{
    cin >> s;

    for (int i = 0 ; i < s.size() ; i++)
    {
        if (s[i] != s[i - 1]) st.push(s[i]);
    }

    string ans;

    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(), ans.end());
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
    solve();
}