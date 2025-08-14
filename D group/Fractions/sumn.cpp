#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct Fraction
{
    int numerator, denominator;

    Fraction operator+ (Fraction fraction);
    bool operator> (Fraction fraction);
    void simplify()
    {
        int gcd = __gcd(numerator, denominator);
        if (gcd > 1)
        {
            denominator /= gcd;
            numerator /= gcd;
        }
    }
};

Fraction Fraction::operator+ (Fraction fraction)
{
    Fraction result;
    result.numerator = numerator * fraction.denominator + denominator * fraction.numerator;
    result.denominator = denominator * fraction.denominator;
    result.simplify();
    return result;
}

bool Fraction::operator> (Fraction fraction)
{
    long long left = 1LL * numerator * fraction.denominator;
    long long right = 1LL * fraction.numerator * denominator;

    return left > right;
}

Fraction s;

void solve()
{
    int i = 1;
    Fraction curr;
    curr.numerator = 1;

    Fraction sum;
    sum.numerator = 0;
    sum.denominator = 1;

    while (true)
    {   
        curr.denominator = i;
        sum = sum + curr;

        if (sum > s)
        {
            cout << i << endl;

            sum.simplify();
            cout << sum.numerator << "/" << sum.denominator << endl;

            return;
        }

        i++;
    }
}

void read()
{
    cin >> s.numerator;
    char c; cin >> c;
    cin >> s.denominator;
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