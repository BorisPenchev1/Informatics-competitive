#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e6 + 7;

int a, b, c, d;
int total;

void solve()
{
   cin >> a >> b >> c >> d;

   int ab = (b - a);
   int cd = (d - c);
   total = ab + cd;

   int cnt = 1;
   
    int tmp_ab = ab;
    int tmp_cd = cd; 
    int tmp_total = total;

   while (true)
   {
        tmp_ab--;
        tmp_cd++;
        total = tmp_ab + tmp_cd;
        if (!(tmp_cd >= cd and tmp_ab <= ab and tmp_total == total)) break;
        cnt++;
   }

   tmp_ab = ab;
   tmp_cd = cd;
   tmp_total = total;

   while (true)
   {
        tmp_cd--;
        tmp_ab++;
        total = tmp_ab + tmp_cd;
        if (!(tmp_cd >= cd and tmp_ab <= ab and tmp_total == total)) break;
        cnt++;
   }

   cout << cnt << endl;
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