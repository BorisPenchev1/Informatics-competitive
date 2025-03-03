#include<bits/stdc++.h>

using namespace std ;

int bd(int n){
    int i ;
    for(i = 1 ; i * i <= n ; i++){}
    return i - 1 ;
}

int main(){

    int n ;
    cin >> n ;

    int res = (bd(n) * bd(n)) * 4 + (n - (bd(n * bd(n))));


    return 0 ;
}