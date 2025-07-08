#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){

    if (n == 1) return false ;

    int i = 2 ;
    while (i * i <= n){
        if (n % i == 0){
            return false ;
        }
        i++ ;
    }
    return true ;
}

int main(){

    int n; cin >> n;

    int curr, br = 0 ;
    for (int i = 1 ; i <= n ; i++) {
        cin >> curr ;
        if (isPrime(curr)) br++ ;
    }

    cout << br << endl ;

    return 0;
}