#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b; cin >> a >> b;
    int c, d; cin >> c >> d;

    if (a < b) swap(a, b);
    if (c < d) swap(c, d); 

    int Min = a + c + abs(a - c) + 2 * (b + d);
    int Max = b + d + abs(b - d) + 2 * (a + c);

    cout << Min << " " << Max << endl ;

    return 0;
}