#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
int ans;

void recursion(string s)
{
    if (s.size() == n)
    {
        int cnt;
        for (int i = 1 ; i < s.size() - 1 ; i++)
        {
            string curr = "";
            curr += s[i];
            curr += s[i] - 1;

            if (curr == "aa" or curr == "ab") cnt++;
        }

        
        return;
    }
    
    recursion(s + 'a');
    recursion(s + 'b');
}

void solve()
{
    cin >> n;
    recursion("");

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