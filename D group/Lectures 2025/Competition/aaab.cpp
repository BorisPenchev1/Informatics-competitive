#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;

string getNext(string curr, int idx, int idx1, bool fl)
{
    if (fl == true)
    {
        for (int i = 1 ; i <= idx ; i++)
        {
            curr.push_back('0');
        }

        return curr;
    }

    string res;
    idx1++;
    int r;
    while (idx1 > 0)
    {
        r = idx1 % 2;
        idx1 /= 2;

        res.push_back(r + '0');
    }

    while (res.size() < idx)
    {
        res.push_back('0');
    }

    reverse(res.begin(), res.end());

    return res;
}

int check(string s)
{
    int ans = 0;
    for (int i = 1 ; i < s.size() ; i++)
    {
        if ((s[i] == '0' and s[i - 1] == '0') or (s[i] == '1' and s[i - 1] == '0')) ans++;
    }

    return ans;
}

bool finish(string s)
{
    for (int i = 0 ; i < s.size() ; i++)
    {
        if (s[i] == '0') return false;
    }
    return true;
}

void solve()
{
    cin >> n;

    int cnt = 0;
    string curr = "";
    for (int i = 2 ; i <= n ; i++)
    {
        getNext(0, 0, 0, 1);
        int j = 0;
        while (true){
            curr = getNext(curr, i, j, 0);
            int a = check(curr);
            if (a % 3 == 0) cnt++;

            if (finish(curr)) break;
            j++;
        }
    }

    cout << cnt << endl;
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