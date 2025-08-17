#include <bits/stdc++.h>
#define ll int

using namespace std;

const int MAXN = 1e6 + 7;

int N;
ll X, Y;
ll A, B, C, D;

void solve()
{
    cin >> N;
    cin >> X >> Y;
    cin >> A >> B >> C >> D;
    
    ll Sum = X + Y;
    ll curr;
    ll tmp_X = X;
    ll tmp_Y = Y;

    for (int i = 3 ; i <= N ; i++)
    {
        curr = (1LL * tmp_X * A + 1LL * tmp_Y * B + C) % D;
        Sum += curr;

        tmp_X = tmp_Y;
        tmp_Y = curr;
    }   
    Sum++;


    ll half    = ceil(Sum / 2);
    int Min     = __INT_MAX__;
    int MinL    = 0, MinR    = 0;
    int lPtr    = 1, rPtr  = 1;
    ll left    = X, right = Y;
    ll currSum = 0;
    ll X_r     = X;
    ll X_l     = X;
    ll Y_r     = Y;
    ll Y_l     = Y;


    while (rPtr <= N)
    {
        currSum = (1LL * right * (right + 1) / 2) - (1LL * (left - 1) * left / 2); 

        if (currSum < half) 
        {
            rPtr++;
            if (rPtr == 2) right = Y_r;
            else right = (X_r * A + Y_r * B + C) % D;
            X_r = Y_r;
            Y_r = right;
        }
        else
        {
            if (rPtr - lPtr + 1 < Min)
            {
                Min = rPtr - lPtr + 1;
                MinL = lPtr;
                MinR = rPtr;
            }
            
            while (currSum >= half)
            {
                lPtr++;
                if (lPtr == 2) left = Y_l;
                else left = (X_l * A + Y_l * B + C) % D;
                currSum = (1LL * right * (right + 1) / 2) - (1LL * (left - 1) * left / 2);
                X_l = Y_l;
                Y_l = left;
            }
        }
    }   

    cout << MinL << " " << MinR << endl;
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