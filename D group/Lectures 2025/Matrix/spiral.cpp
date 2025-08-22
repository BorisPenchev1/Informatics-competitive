#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e3 + 7;

int first, n1, line;
int table[MAXN][MAXN];

void solve()
{
    int sum = 0;
    for (int j = 1 ; j <= n1 ; j++)
    {
        sum += table[line][j];
    }

    cout << sum << endl;
}

void read()
{
    cin >> first;
    cin >> n1;
    cin >> line;

    int n = n1;

    for (int i = 1 ; i <= n ; i++)
    {
        if (table[i][i] == 0)
        {
            for (int j = i ; j <= n ; j++)
            {
                table[i][j] = first;
                first++;
            }
            for (int j = i + 1 ; j <= n ; j++)
            {
                table[j][n] = first;
                first++;
            }
            for (int j = n - 1 ; j >= i ; j--)
            {
                table[n][j] = first;
                first++; 
            }
            for (int j = n - 1 ; j >= i + 1 ; j--)
            {
                table[j][i] = first;
                first++; 
            }
            n--;
        }
        else break;
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
    solve();
}