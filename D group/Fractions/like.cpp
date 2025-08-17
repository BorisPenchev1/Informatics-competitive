#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

string a;
string b;

struct Fraction
{
    int numerator;
    int denominator;

    void silmplify()
    {
        int gcd = __gcd(numerator, denominator);

        if (gcd > 1)
        {
            numerator /= gcd;
            denominator /= gcd;
        }
    }
};

Fraction result;

void solve()
{
    cin >> a >> b ;
    
    if (a.size() < b.size()) swap(a, b);

    int cnt = 0;
    int Max = 0;

    for (int i = 0 ; i < a.size() ; i++)
    {
        cnt = 0;
        for (int j = 0 ; j < i ; j++)
        {
            if (b[j] == a[i]) cnt++;
        } 
        Max = max(cnt, Max);
    }

    result.numerator   = 2 * Max;
    result.denominator = a.size() + b.size();
    result.silmplify();

    if (result.denominator == 1) 
    {
        cout << 1 << endl;
        return;
    }
    if (result.numerator == 0)
    {
        cout << 0 << endl;
        return;
    }

    cout << result.numerator << "/" << result.denominator << endl;

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

//strings*