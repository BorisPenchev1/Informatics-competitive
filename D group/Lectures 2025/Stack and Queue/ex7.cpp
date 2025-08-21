#include<bits/stdc++.h>

#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

int n;
priority_queue <string> q;

void solve()
{
    for (int i = 1 ; i <= n ; i++)
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

void read()
{
    cin >> n;

    string curr;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> curr;
        q.push(curr);
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

//priority queue - outputed by priority (decreasing order#include <bits/stdc++.h>