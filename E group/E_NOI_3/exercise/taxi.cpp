#include<bits/stdc++.h>

using namespace std ;

bool cmp(int a, int b){
    return a > b ;
}

int main(){

    int pr[100001]; pr[0] = 0 ;
    int taxi[100001] ; taxi[0] = 0 ;
    int nums[100001]; nums[0] = 0 ;

    int n ;
    cin >> n ;
    for (int i = 1 ; i <= n ; i++) cin >> pr[i] ;
    for (int i = 1 ; i <= n ; i++) cin >> taxi[i] ;

    int k ;
    cin >> k ;
    for (int i = 1 ; i <= k ; i++) cin >> nums[i] ;
    sort(nums + 1, nums + k + 1) ;

    for (int i = 1 ; i <= k ; i++) pr[nums[i]] = 0 ;
    sort(pr + 1, pr + n + 1, cmp) ;

    sort(taxi + 1, taxi + n + 1) ;
    for (int i = n ; i > n - k ; i--) taxi[i] = 0 ;

    int res = 0;
    for (int i = 1 ; i <= n - k ; i++) res += pr[i] * taxi[i] ;
    cout << res << endl ;
  
    return 0 ;
}