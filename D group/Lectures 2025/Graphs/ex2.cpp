#include <bits/stdc++.h>
#define ll long long

using namespace std;

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
        for (int j = 1 ; j <= n ; j++)
        {
            int curr; cin >> curr;
            if (curr == 1)
            {
                v[i].push_back(j);
            }
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