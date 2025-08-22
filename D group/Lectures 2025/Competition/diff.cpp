#include <bits/stdc++.h>
#define ull unsigned long long

using namespace std;

ull n;
int k;
string res;

void solve()
{
    cin >> n >> k;

    int curr;
    while (n > 0)
    {
        curr = n % k;
        n /= k;

        res.push_back(curr + '0');
    }

    reverse(res.begin(), res.end());

    ull prod = 1;
    ull sum = 0;
    for (int i = 0 ; i < res.size() ; i++)
    {
        prod *= (res[i] - '0');
        sum += (res[i] - '0');
    }

    cout << prod - sum << endl;
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