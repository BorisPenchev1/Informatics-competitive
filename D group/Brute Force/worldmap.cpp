#include <bits/stdc++.h>
#define ll long long

using namespace std;

int k;
deque <int> balls;
deque <int> correct;

stack <int> H;
stack <int> M;
stack <int> S;

int h, m, s;

void solve()
{
    cin >> k;
    cin >> h >> m >> s;

    for (int i = 1 ; i <= k ; i++)
    {
        balls.push_back(i);
    }
    correct = balls;

    int cnt = 0;
    while (1)
    {
        while (H.size() < h)
        {
            while (M.size() < m)
            {
                while (S.size() < s)
                {
                    S.push(balls.back());
                }
                M.push(S.top());
                S.pop();
                while (!S.empty()) 
                {
                    balls.push_front(S.top());
                    S.pop();
                }
            }
            H.push(M.top());
            M.pop();
            while (!M.empty()) 
            {
                balls.push_front(M.top());
                M.pop();
            }
        }
        while (!H.empty())
        {
            balls.push_front(H.top());
            H.pop();
        } 

        cnt++;

        if (balls == correct)
        {
            cout << cnt << endl;
            break;
        }
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
    solve();
}