#include<bits/stdc++.h>

#define ull unsigned long long 
#define endl '\n'

using namespace std ;

ull method(ull n, ull m){

    ull res ;
    ull ost = n % m, raz = n / m ;

    if (n == 1) return res = 0 ;
    
    if (n < m) return res = 1 ;

    if (ost == 1) return res = raz * 2 ;

    if (m == n) return res = 2 ;

    if (m % 2 == 0 and ost % 2 != 0) return res = raz * 2 + 1 ;
    else if (m % 2 != 0 and ost % 2 != 0) return res = raz * 2 + 1 ;
    else if (m % 2 == 0 and ost % 2 == 0) return res = raz * 2 + 1 ; 
    else if (m % 2 != 0 and ost % 2 == 0) return res = raz * 2 + 1 ;
}

int main(){

    ull n1, m1, n2, m2 ;

    cin >> n1 >> m1 ;
    cin >> n2 >> m2 ;

    cout << method(n1, m1) << endl ;
    cout << method(n2, m2) << endl ;

    return 0;
}