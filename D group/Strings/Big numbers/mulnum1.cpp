#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector <int> to_vec(string s)
{   
    reverse(s.begin(), s.end());

    vector <int> v;

    for (int i = 0 ; i < s.size() ; i++)
    {
        v.push_back(s[i] - '0');
    }

    return v;
}

vector <int> mul(vector <int> a, vector <int> b)
{
    int n = a.size();
    int m = b.size();

    vector <int> x(n + m);

    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < m ; j++)
        {
            x[i + j] += a[i] * b[j];
        }
    }

    int carry = 0;
    for (int i = 0 ; i < n + m ; i++)
    {
        x[i] += carry;

        carry = x[i] / 10;
        x[i] %= 10;
    }

    while (carry > 0)
    {
        x.push_back(carry % 10);
        
        carry /= 10;
    }

    while (x.back() == 0 and !x.empty())
    {
        x.pop_back();
    }

    return x;
}

string toString(vector <int> v)
{
    string s;
    for (int i = 0 ; i < v.size() ; i++)
    {
        s.push_back(v[i] + '0');
    }

    reverse(s.begin(), s.end());

    return s;
}

void solve()
{
    string a_in;
    string b_in;

    cin >> a_in;
    cin >> b_in;

    vector <int> a = to_vec(a_in);
    vector <int> b = to_vec(b_in);

    vector <int> res_vec = mul(a, b);
    string res = toString(res_vec);

    cout << res << endl;
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