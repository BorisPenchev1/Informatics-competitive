#include<bits/stdc++.h>
#define ll long long 

using namespace std;

string s;
string v;

void solve()
{
    cin >> s;

    if (s.size() == 2) 
    {
        cout << s << endl;
        exit(0);
    }
    while (s.size() != 2)
    {
        int i = 2;
        int n = s.size();
        while (i < n){
            s[i] = '0';
            i += 3;
        }

        i = 0;
        while (i < n){
            if (s[i] != '0') v.push_back(s[i]);
        }

        reverse(v.begin(), v.end());

        s.swap(v);

        v = "";
    }

    cout << s << endl;
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