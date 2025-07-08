#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m; cin >> n >> m;
    int chairs = 0;

    int n3 = n / 3;
    int n3r = n % 3 ;

    int m3 = m / 3 ;
    int m3r = m % 3 ;

    if (n3r > 0) n3++ ;
    if (m3r > 0) m3++ ;

    chairs = (n * m) - (n3 * m3) ;

    cout << chairs << endl;

    return 0;
}