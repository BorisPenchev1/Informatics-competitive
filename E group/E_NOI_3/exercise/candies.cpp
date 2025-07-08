#include<bits/stdc++.h>
#define ll long long

using namespace std ;

int n, nums[5001], Max = 0, br, brc;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n ;

    for (int i = 0 ; i < n ; i++){
        cin >> nums[i] ;

        if (nums[i] > Max) Max = nums[i] ;

    }

    for (int i = 0 ; i < n ; i++){
        brc += Max - nums[i] ;
        if (nums[i] != Max) br++ ;
    }

    cout << brc << " " << br << endl ;

    return 0;
}
