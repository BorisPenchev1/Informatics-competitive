#include<bits/stdc++.h>

using namespace std ;

bool prime(int n){
    int i = 2 ;
    bool res = true ;
    while (i * i <= n){
        if (n % i == 0){
            res = false ;
            break;
        }
        i++;
    }
    return res ;
}

int main(){

    int nums[5001], d, br = 0, Max = 0 ;

    cin >> d ;

    for (int i = 0 ; i < d ; i++){
        cin >> nums[i] ;
        if (!prime(nums[i])) br = 0 ;
        else {
            br++;
            if (br > Max) Max = br ;
        }   
    }

    cout << Max << endl ;

    return 0 ;
}