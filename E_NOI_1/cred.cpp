#include<bits/stdc++.h>

using namespace std ;

int n, m, br;

int main(){

    cin >> n ;

    cin >> m ;

   for (int i = n ; i <= m ; ){
        i = i + (i % 10) + (i / 10 % 10) + (i / 100 % 10) + (i / 1000 % 10) + (i / 10000 % 10) + (i / 100000 % 10);
        br++ ;
   }

    cout << br ;

    return 0 ;
}