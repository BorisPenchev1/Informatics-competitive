#include<bits/stdc++.h>

using namespace std;

int main(){

    long long a1, b1, c1;
    cin >> a1 >> b1 >> c1;

    long long a2, b2, c2;
    cin >> a2 >> b2 >> c2;

    if (a1 < b1) swap(a1, b1);
    if (b1 < c1) swap(b1, c1);
    if (a1 < b1) swap(a1, b1);

    if (a2 < b2) swap(a2, b2);
    if (b2 < c2) swap(b2, c2);
    if (a2 < b2) swap(a2, b2);

    // cout << a1 << " " << b1 << " " << c1 << endl;
    // cout << a2 << " " << b2 << " " << c2 << endl ;

    long long diff = abs(a1 - a2);

    long long res = diff + b1 + c1 + c2 + b2;

    cout << res << endl ;
    

    return 0;
}