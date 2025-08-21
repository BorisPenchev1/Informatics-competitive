#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

stack <char> st;
string s;
string reversed;

void solve()
{
    st.pop();
    while (!st.empty())
    {
        reversed.push_back(st.top());
        st.pop();
    }

    if (reversed == s)
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    }
}

void read()
{
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

//is palindrome