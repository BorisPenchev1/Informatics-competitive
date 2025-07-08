#include<bits/stdc++.h>
using namespace std ;

int Sum(int n){
    int i = 1, sum = 0;
    while (i <= n / 2){
        if (n % i == 0){
            sum += i;
        }
        i++;
    }
    return sum ;
}

int main(){

    int x ;
    cin >> x ;

    int i = x ;
    while ((Sum(i) + i ) % 7 != 0){
        i++ ;
    }
    
    cout << i << endl ;

    return 0;
}