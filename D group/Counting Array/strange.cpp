#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 128;

string s;
int cnt[MAXN];

bool check()
{
    for (int i = 0 ; i < MAXN ; i++)
    {
        if (cnt[i] > 1) return false;
    }

    return true;
}

void solve()
{
    cin >> s;

    int l = 0, r = 0;
    string curr_best;

    int lMax = 0;
    int Max = 0;
    string sMax;

    while (r < s.size())
    {
        cnt[s[r]]++;

        if (check())
        {
            r++;
            curr_best = s.substr(l, r - l);
        }
        else
        {
            if (r - l > Max)
            {
                Max = r - l;
                lMax = l;
                sMax = curr_best;
            }
            else if (r - l == Max)
            {
                if (lMax < l){
                    lMax = l;
                    sMax = curr_best;
                }
            }

            while (!check())
            {
                cnt[s[l]]--;
                l++;
            }
            
            curr_best = "";
            
            for (int i = 0 ; i < MAXN ; i++) cnt[i] = 0;
        }
    }

    cout << Max << " " << lMax << endl;
    cout << sMax << endl;
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