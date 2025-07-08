#include<bits/stdc++.h>

using namespace std ;

void decomposition(int num){
    int i = 2, m = num, br = 0;
    while (i <= num / 2){
        if (m % i == 0){
            cout << i << " " ;
            while (m % i == 0){
                m /= i ;
                br++ ;
            }
            cout << br << endl ;
        }
        i++ ;
        br = 0 ;
    }
}

int main(){

    int n = 2 * 2 * 2 * 3 * 3 * 4 * 5 * 7 * 11 * 17 * 23 ;

    // cin >> n ;

    decomposition(n) ;

    return 0;
}