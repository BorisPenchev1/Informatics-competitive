#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

int n;
vector <int> v[128];

void print()
{
    for (int i = 1 ; i <= n ; i++)
    {
        cout << i << ": ";
        for (int i : v[i])
        {
            cout << i << " ";
        }
        cout << endl;
    }
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
    print();
}