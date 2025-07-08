#include <bits/stdc++.h>
#define ll long long

using namespace std ;

ll lcm(int a, int b){
    int gcd = __gcd(a, b);
    int lcm = a * b / gcd;

    return lcm;
}

int main(){

    int n; cin >> n;

    int previ, curr ;
    cin >> previ;
    cin >> curr;

    ll lcmr = lcm(previ, curr);

    for (int i = 3 ;i <= n ; i++){
        cin >> curr;

        lcmr = lcm(lcmr, curr); 
    }

    ll sqrtr;
    ll k = lcmr;
    while (1){
        sqrtr = sqrt(k);
        if (sqrtr * sqrtr == k) break;
        k += lcmr;
    }

    cout << sqrtr << endl;

    return 0;
}

