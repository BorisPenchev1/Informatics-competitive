#include<bits/stdc++.h>

using namespace std;

int a, b, c, s ;

int main(){

    cin >> a >> b >> c ;

    if (a > b){
        s = b ;
        b = a ;
        a = s ;
    } 
    
    if (b > c){
        s = c ;
        c = b ;
        b = s ;
    } 

    // cout << a << " " << b << " " << c ;

    int res = max(c - b, b - a);
    char st ;

    if (res == c - b){
        st = 'c' ;
    }
    else st = 'a' ;

    // cout << res << " " << st << endl ;

    if (res > a and res < c and st == 'c') cout << c -  res << endl ;
    else if (res > a and res < c and st == 'a') cout << b + res << endl ;
    else{
        if (a - res > 0) cout << a - res << " " << c + res << endl ;
        else cout << c + res << endl ;
    }

    return 0;
}