#include<bits/stdc++.h>

using namespace std;

int main(){

    int s ; cin >> s ;  

    if ((s - 1) / 2 < 10 ) {
        cout << 0 << " " << 0 << " " << 0 << endl ;
        return 0;
    }
    
    int s1 = s - 1 ;

    int x = (s - 1) / 2 ;

    string a = to_string(x) ;
    string b = to_string(x) ;

    if (x < 100){
        a += "0" ;
        b.insert(1, 1, '0');
    }
    cout << s1 << " " << a << " " << b << endl ;

    return 0;

}

