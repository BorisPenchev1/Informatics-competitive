#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 1e5 + 7;

struct Card
{
    int a;
    int b;
};

int n;
Card cards[MAXN];

void read()
{
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> cards[i].a >> cards[i].b;
    }
}

void solve()
{

    int lPtr = n - 1;
    int rPtr = n;

    int Max = 0;

    while (lPtr > 1)
    {
        if ((cards[lPtr].a < cards[lPtr - 1].a) and (cards[lPtr].b < cards[lPtr - 1].b)) lPtr--;
        else if ((cards[lPtr].a == cards[lPtr - 1].a) and ( cards[lPtr].a == cards[lPtr - 1].b)) lPtr--;
        else if ((cards[lPtr].a < cards[lPtr - 1].a) and ( cards[lPtr].b == cards[lPtr - 1].b)) lPtr--;
        else if ((cards[lPtr].a == cards[lPtr - 1].a) and (cards[lPtr].b < cards[lPtr - 1].b)) lPtr--;
        else if ((cards[lPtr].b < cards[lPtr - 1].a) and (cards[lPtr].a < cards[lPtr - 1].b)) lPtr--;
        else if ((cards[lPtr].a == cards[lPtr - 1].b) and ( cards[lPtr].b == cards[lPtr - 1].a)) lPtr--;
        else if ((cards[lPtr].a == cards[lPtr - 1].b) and (cards[lPtr].b < cards[lPtr - 1].a)) lPtr--;
        else if ((cards[lPtr].b == cards[lPtr - 1].a) and (cards[lPtr].a < cards[lPtr - 1].b)) lPtr--;
        else rPtr--;

        if (lPtr == rPtr) lPtr--;

        Max = max(Max, rPtr - lPtr + 1);
    }

    cout << Max << endl;
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