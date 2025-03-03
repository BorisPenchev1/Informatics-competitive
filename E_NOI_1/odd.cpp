#include<bits/stdc++.h>

using namespace std ;

int a, b, i, br, res, n;

int main(){

    cin >> a >> b ;

    for (i = a ; i <= b ; i++){
        if (int (sqrt(i)) * int (sqrt(i)) == i) br++ ;
    }

    cout << br << endl ;

    return 0 ;
}