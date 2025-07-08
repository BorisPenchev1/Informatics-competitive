#include<bits/stdc++.h>

using namespace std;

int mes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool one_dig(int n){
    if (n < 10) return true ;
    else return false ;
}

bool pal(string s){
    string s1 = s;
    reverse(s1.begin(), s1.end());
    if (s1 == s){
        return true ;
    }
    else return false ;
}

bool solve(int y, int m, int d){

    string d1, m1, y1, s ;

    d1 = to_string(d) ;
    if (one_dig(d)){
        d1 = '0' + d1 ;
    }

    m1 = to_string(m);
    if (one_dig(m)){
        m1 = '0' + m1 ;
    }

    y1 = to_string(y) ;

    s = d1 + m1 + y1 ;

    if (pal(s)) return true ;
    else return false ;

}

int main(){

    int d, m, y, br = 0, g1, g2 ;

    cin >> g1 >> g2 ;
    
    for (y = g1 ; y <= g2 ; y++){
        if (y % 10 >= 4) continue ;
        if (y / 100 % 10 > 1) continue ;
        if (y == 2092) mes[2] = 29 ;
        for(m = 1 ; m <= 12 ; m++){  
            for(d = 1 ; d <= mes[m] ; d++){
                if (solve(y, m, d)) br++ ;
            }
        }
    }
    
    cout << br << endl ;
}