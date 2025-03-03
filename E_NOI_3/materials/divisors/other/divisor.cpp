#include<bits/stdc++.h>

using namespace std ;

int a, b, br = 0;

int main(){

    cin >> a >> b ;

    for (int i = a ; i <= b ; i++){
        for (int j = 2 ; j <= i - 1 ; j++){
            if (i % j == 0)continue;
            if (i / j == i % j) br++ ;
        }
    }

    cout << br << endl ;

    return 0 ;
}