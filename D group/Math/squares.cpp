#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 5e4 + 7;

int n;
int a[MAXN];

vector <int> findPerfectSquares(int n)
{
    vector <int> v;
    for (int i = 4 ; i <= n ; i++)
    {
        int square_root = sqrt(i);
        if (square_root * square_root == i) v.push_back(i);
    }

    return v;
}

void solve()
{
    string ans;

    cin >> n;
    for (int e = 1 ; e <= n ; e++)
    {
        cin >> a[e];

        vector <int> perfect_squares = findPerfectSquares(a[e]);

        bool fl = false;

        for (int i = 0 ; i < perfect_squares.size() ; i++)
        {
            for (int j = i ; j < perfect_squares.size() ; j++)
            {
                if (perfect_squares[i] + perfect_squares[j] == a[e])
                {
                    ans.push_back('1');
                    fl = true;
                    break;
                } 
            }
            if (fl) break;
            fl = false;
        }
        if (!fl) ans.push_back('0');
    }

    cout << ans << endl;
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