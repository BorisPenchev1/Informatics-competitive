#include<bits/stdc++.h>

using namespace std ;

int n, curr, previ = -1 , br = 1, Max = 0;

int main(){

    cin >> n ;
    cin >> previ ;
    
    for (int i = 2 ; i <= n ; i++){
        cin >> curr ;
        if (previ == curr - 1){
            br++ ;
            Max = max(br, Max);
        }
        else
            br = 1 ;

        previ = curr ;
    }

    cout << Max << endl ;

    return 0 ;
}