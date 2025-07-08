#include<bits/stdc++.h>

using namespace std ;

int Sum(int n){
    int i = 1, sum = 0 ;
    while (i <= n / 2){
        if (n % i == 0){
            sum += i ;
        }
        i++;
    }
    return sum ;
}

int main(){
    
    int a, b ;

    cin >> a >> b ;

    if (Sum(a) == b and  Sum(b) == a) cout << "Yes" << endl ;
    else cout << "No" << endl ;

    return 0 ;
}