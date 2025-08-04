#include<bits/stdc++.h>
#define ll unsigned long long 

using namespace std;

ll n;

bool isPrime(ll n)
{
    int i = 2;
    while(i * i <= n){
        if (n % i == 0){
            return false;
        }
        i++;
    }

    return true;
}

void solve()
{
    cin >> n;

    ll kSq = 1;
    if (n < 9)
        cout << n << endl;  
    else
    {
        while (kSq * kSq <= n)
            kSq += 2;

        kSq -= 2;

        while (1)
        {
            if (isPrime(kSq)){
                cout << kSq * kSq << endl;
                return;
            }
            kSq -= 2;
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