#include<bits/stdc++.h>

using namespace std ;

long long a[1000001], n, Max1, Max;

int main(){

    cin >> n ;

    long long  i ;
    for (i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }

    // for (i = 0 ; i < n ; i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl ;

    long long sum = 0 ;
    for (i = 1 ; i < n ; i++){
        sum = a[i] + a[i - 1] ;
        if (sum > Max){
            Max1 = Max ;
            Max = sum ;
        }
        else if (sum > Max1 and sum <= Max){
            Max1 = sum ;
        }
    }

    if (n == 4){
        Max = a[0] + a[1] ;
        Max1 = a[2] + a[3] ;
    }

    cout << Max + Max1 << endl ;

    return 0 ;
}