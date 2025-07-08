#include<bits/stdc++.h>

using namespace std;

int main(){

    int h, m ; cin >> h >> m ;
    int m_add ; cin >> m_add ;

    m += m_add ;

    if (m >= 60){
        h += m / 60;
        m %= 60 ;
    }

    h %= 24 ;

    if (h < 10 and m < 10) cout << "0" << h << ":0" << m << endl ;
    else if (h < 10 and m > 10) cout << "0" << h << ":" << m << endl ;
    else if (h > 10 and m < 10) cout << h << ":0" << m << endl ;
    else cout << h << ":" << m << endl ;

    // cout << h << " " << m << endl ;

    return 0;
}