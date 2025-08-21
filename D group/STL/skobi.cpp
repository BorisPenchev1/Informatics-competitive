#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

int T;

bool is_correct(string s)
{
    stack <char> st;

    for (int i = 0 ; i < s.size() ; i++)
    {
        if (s[i] == '(' or s[i] == '[' or s[i] == '{') st.push(s[i]);
        else 
        {
            if (st.empty()) return false;
            if ((st.top() == '(' and s[i] == ')') or (st.top() == '[' and s[i] == ']') or (st.top() == '{' and s[i] == '}'))
            {
                st.pop();
            }
            else return false;
        }
    }

    if (!st.empty())
    {
        return false;
    }
    else return true;
}

void solve()
{

    string s;

    cin >> T;
    for (int i = 1 ; i <= T ; i++)
    {
        cin >> s;

        if (is_correct(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
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