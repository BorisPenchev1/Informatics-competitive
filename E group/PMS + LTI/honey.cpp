#include<bits/stdc++.h>

using namespace std;

int main(){

    unsigned long long a, b, c ; cin >> a >> b >> c ;
    unsigned long long a1, b1, c1 ; cin >> a1 >> b1 >> c1 ;

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    if (a1 > b1) swap(a1, b1);
    if (b1 > c1) swap(b1, c1);
    if (a1 > b1) swap(a1, b1);

    // cout << a << " " << a1 << endl ;
    // cout << b << " " << b1 << endl ;
    // cout << c << " " << c1 << endl ;

    cout << (a * a1) + (b * b1) + (c * c1) << endl ;

    return 0;
}