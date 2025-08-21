#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

int n;
stack <int> st;

void solve()
{
    cin >> n;

    int curr;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> curr;
        st.push(curr);
    }

    cout << "Top: " << st.top() << endl;

    st.pop();
    st.pop();

    cout << "Top: " << st.top() << endl;

    st.pop();

    st.push(4);
    st.push(8);

    st.pop();
    st.pop();
    st.pop();
    st.pop();

    cout << "Top: " << st.top() << endl;
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