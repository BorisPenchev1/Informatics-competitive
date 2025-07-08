#include<bits/stdc++.h>

using namespace std ;

long long n, res = 1, sum1, sum2, sum, curr, pre, k;

int main(){

    cin >> n >> k;

    int br = k ;

    for (int i = 1 ; i <= n ; i++){
        for (int j = br ; j <= n - i ; j++){
            if (j % 2 == 0){
                sum += pre + j ;
            }
            pre = j ;
            br++;
        }
    }

    cout << sum << endl ;

    return 0 ;
}