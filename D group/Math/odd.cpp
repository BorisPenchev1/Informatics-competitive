#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;

int nextSpecial(int curr)
{
    for (int i = curr + 1 ; ; i++)
    {
        bool fl = true;
        int possible_ans = i;
        int tmp = i;
        while (tmp > 0)
        {
            if ((tmp % 10) % 2 == 0) fl = false;
            tmp /= 10;
        }

        if (fl)
        {
            return possible_ans;
        }
    }
}

void solve()
{
    cin >> n;

    if (n == 1) { cout << 1 << endl; exit(0); };

    int curr = 1;
    for (int i = 1 ; i < n ; i++)
    {
        curr = nextSpecial(curr);
        //cout << curr << endl;
    }

    cout << curr << endl;
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