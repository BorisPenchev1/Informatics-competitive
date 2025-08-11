#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 5e3 + 7;

struct fraction
{
    int numerator, denominator ;
    fraction operator+(fraction Fraction);
};

int n;
fraction a[MAXN];
set <int> s;

fraction fraction::operator+(fraction Fraction)
{
    fraction res;

    res.numerator = numerator * Fraction.denominator + Fraction.numerator * denominator;
    res.denominator = denominator * Fraction.denominator;

    int gcd = __gcd(res.numerator, res.denominator);
    if (gcd > 1) 
    {
        res.numerator /= gcd;
        res.denominator /= gcd;
    }

    return res;
}

void solve()
{
    int cnt = 0;
    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = i + 1 ; j <= n ; j++)
        {
            fraction sum = a[i] + a[j];

            if (sum.denominator == 1)
            {
                s.insert(sum.numerator);
            }
        }
    }

    cout << s.size() << endl;
}

void read()
{
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i].numerator >> a[i].denominator;
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