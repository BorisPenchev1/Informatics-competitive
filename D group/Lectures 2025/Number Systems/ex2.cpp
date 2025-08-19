#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

string n;
int p, q;

void solve()
{
    cin >> n >> p;

    int curr;
    char last;
    int i = 0;
    while (!n.empty())
    {
        last = n.back();

        if (last > '9')
        {
            last -= 'A' - 10;
        }
        else last -= '0';

        curr = last * pow(p, i);
        q += curr;
        n.pop_back();

        i++;
    }

    cout << q << endl;
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