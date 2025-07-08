#include<bits/stdc++.h>

using namespace std ;

int n, k, i, curr, previ, br ;
string number ;

int main(){

    cin >> n >> k ;
    cin >> number ;

    i = 0 ;

    while (i <= n - 1){
        curr = number[i];

        if (curr == previ) br++, curr = k + 1 ;

        previ = curr ;
        i++ ;
    }

    cout << br << endl ;

    return 0 ;
}

// 67 points