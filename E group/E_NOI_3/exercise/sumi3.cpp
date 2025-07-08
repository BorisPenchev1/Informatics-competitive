#include<bits/stdc++.h>

using namespace std ;

int main(){

    int n, k ;
    cin >> n ;
    cin >> k ;
    int a[n] ;


    int l = 0, r = 0, br = 0;
    for (int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }

    for (int i = 0 ; i < n * 2 - 2; i++){
        if (a[l] + a[r] == k and l < r){
            br++ ;
            l++ ;
            r++ ;
        }
        else if (a[l] == k and l == r){
            br++ ;
            r++ ;
        }

        else if (l < r) l++ ;
        else if (l == r) r++ ;
    }

    cout << br << endl ;

    return 0 ;
}                   dhusigbv658767