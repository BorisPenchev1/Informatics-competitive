#include<bits/stdc++.h>

using namespace std ;

int main(){

    string l ; cin >> l ;
    string r ; cin >> r ;

    if (l.size() > r.size()) swap(l, r);

    reverse(l.begin(), l.end());
    string c = l + r ;
    int k ; cin >> k ;

    int pos = l.size()  ;
    for (int i = 0 ; i < k + 1; i++){
        c.insert(pos - k + i, 1, c[pos]);
        c.erase(pos + 1, 1);
        pos++ ;
    }

    cout << c << endl ;

    return 0 ;

}

/*
JLA
CRUO
3

ALJCRUO
ALCJRUO
ACLRJUO
CARLUJO

CARLUJO
*/