#include<bits/stdc++.h>

using namespace std;

int main(){

    int n ; cin >> n ;

    if (n == 0){
        cout << 0 << endl ;
        return 0 ;
    }

    int i = 1 ;
    int sum = 0 ;
    while(1){
        sum += i ;
        
        if (sum == n){
            cout << i << endl ;
            return 0 ;
        }

        i++ ;
    }

    return 0;
}