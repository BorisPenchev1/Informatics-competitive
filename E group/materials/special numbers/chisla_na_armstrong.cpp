#include<bits/stdc++.h>

using namespace std ;

bool Armstrong(int num, int lenght){
    int power, sum = 0, num1 = num ;
    for(int i = 1 ; i <= lenght ; i++){
        power = pow(num % 10, lenght);
        sum += power ;
        num /= 10;
    }
    if (sum == num1) return true ;
    else return false ;
}

int main(){

    int n, l ;

    cin >> n ;

    l = to_string(n).length() ;

    if (Armstrong(n, l)) cout << "Yes" << endl ;
    else cout << "No" << endl ;
    
    return 0 ;
}