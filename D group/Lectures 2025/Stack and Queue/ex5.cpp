#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

stack <int> st;

void solve()
{
    string s;
    cin >> s;

    for (int i = 0 ; i < s.size() ; i++)
    {
        if (s[i] >= '0' and s[i] <= '9') st.push(s[i] - '0');
        else
        {
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            char oper = s[i];

            if (oper == '+')
            {
                st.push(a + b);
            }
            else if (oper == '-')
            {
                st.push(a - b);
            }
            else if (oper == '*')
            {
                st.push(a * b);
            }
            else st.push(a / b);
        }
    }

    cout << st.top() << endl;
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

//postfix