#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 1e5 + 7;

int n;
bool is_comp[MAXN];
vector <int> nums;

bool check()
{
    for (int i = 0 ; i < nums.size() ; i++)
    {
        if (is_comp[nums[i]]) return false;
    }
    return true;
}

void sieve()
{
    for (int i = 2 ; i <= n ; i++)
    {
        if (is_comp[i]) continue;
        for (int j = i * 2 ; j <= n ; j += i)
        {
            is_comp[j] = true;
            nums.erase(nums.begin() + j);
        }

        if (check()) return;
    }
}

void solve()
{
    cin >> n;
    for (int i = 2 ; i <= n ; i++) nums.push_back(i);

    sieve();
    cout << nums.back() << endl;
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