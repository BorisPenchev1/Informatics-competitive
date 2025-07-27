#include<bits/stdc++.h>
#define ll long long

using namespace std;

const ll MAXN = 1e6 + 10;

ll x[MAXN];
ll y[MAXN];

int main(){

    int n;
    cin >> n;

    for (int i = 1 ; i <= n; i ++){
        cin >> x[i];
    }

    for (int i = 1 ; i <= n; i ++){
        cin >> y[i];

    }

    int i = 1, j = 1;
    int Max = 0;
    while (i <= n and j <= n){
        if (y[j] >= x[i] and j >= i){
            Max = max(Max, j - i);
            j++;
        }
        else i++;
    }

    cout << Max << endl;

    return 0;
}