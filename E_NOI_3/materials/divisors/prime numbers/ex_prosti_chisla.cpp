#include<bits/stdc++.h>

using namespace std ;

bool PrimeNum(int num){
    int i = 2 ;
    bool fl = true ;
    while (i <= num / 2){
        if (num % i == 0){
            while (i <= num) num /= i ;
            fl = false ;
            break ;
        }
        i++ ;
    }
    return fl ;
}

int main(){

    int n, br ;

    cin >> n ;

    for (int i = 2 ; i <= n ; i++){
        if(PrimeNum(i)) br++ ;
    }

    cout << br << endl ;

    return 0 ;
}