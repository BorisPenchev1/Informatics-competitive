#include<bits/stdc++.h>
#define int long long 

using namespace std;

const int MAXN = 1e9 + 7;

int n;
bool is_comp[MAXN];
vector <int> ans;

void sieve()
{
    is_comp[1] = true;
    for (int i = 2 ; i <= n ; i++)
    {
        if (is_comp[i]) continue;
        for (int j = i * 2 ; j <= n ; j += i)
        {
            is_comp[j] = true;
        }
    }
}

vector <int> findDivs()
{
    vector <int> res;
    res.push_back(1);

    int i = 2;
    int m = n;
    while (i * i <= n)
    {
        if (m % i == 0)
        {
            res.push_back(i);
            while (m % i == 0) m /= i;
        }

        i++;
    }

    res.push_back(n);

    return res;
}

void removeDuplicates()
{
    for (int i = 1 ; i < ans.size() ; i++)
    {
        if (ans[i] == ans[i - 1]) ans.erase(ans.begin() + i);
    }
}

void solve()
{
    cin >> n;

    sieve();
    vector <int> divs = findDivs();

    for (int curr = 1 ; curr < divs.size() ; curr++)
    {
        int a = max(divs[curr], divs[curr - 1]);
        int b = min(divs[curr], divs[curr - 1]);

        if (!is_comp[a] and is_comp[b])
        {
            if (b == 1)
            {
                ans.push_back(divs[curr - 1]);
                ans.push_back(divs[curr]);
            }
            else
            {
                continue;
            }
        }
        else if (is_comp[a] and !is_comp[b])
        {
            ans.push_back(divs[curr - 1]);
            ans.push_back(divs[curr]);
        }
        else if (is_comp[a] and is_comp[b])
        {
            int q = a / b;

            if (!is_comp[q]) 
            {
                ans.push_back(divs[curr - 1]);
                ans.push_back(divs[curr]);
            }
            else 
            {
                continue;
            }
        }
        else 
        {
            continue;
        }
    }

    removeDuplicates();

    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

signed main()
{
    fastIO();
    solve();
}