#include<bits/stdc++.h>

using namespace std ;

void decomposition(int num){
    int i = 2, m = num;
    while (i <= num / 2){
        while (m % i == 0){
            cout << i << endl ;
            m /= i ;
        }
        i++ ;

    }
}

int main(){

    int n ;

    cin >> n ;

    decomposition(n) ;

    return 0;
}