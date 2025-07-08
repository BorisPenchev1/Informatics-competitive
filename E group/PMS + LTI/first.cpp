#include<bits/stdc++.h>

using namespace std ;

int main(){

    string n ; cin >> n ;

    int sum = 0;
    for (int i = 0 ; i <= n.length() ; i++){
        sum += n[i] - '0';
    }

    int pow_2 = pow(sum, 2);
    if (pow_2 % 10 == 0) cout << "YES" << endl ;
    else cout << "NO" << endl ;

    return 0 ;
}