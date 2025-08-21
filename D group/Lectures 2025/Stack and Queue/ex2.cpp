#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

stack <char> st;

void solve()
{

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

void read()
{
    string s;
    cin >> s;

    for (int i = 0 ; i <= s.size() ; i++)
    {
        st.push(s[i]);
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

//cout reversed word