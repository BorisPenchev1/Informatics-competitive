
#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, d; cin >> a >> b >> c >> d;

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (c > d) swap(c, d);
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    cout << 1 + b + c + d << endl ;

    return 0;
}