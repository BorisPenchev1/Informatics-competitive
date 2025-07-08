#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t ; cin >> t ;

    const int m = 1e9 + 1 ;
    int n, k ;    
    for (int i = 1 ; i <= t ; i++){
        cin >> n >> k;
        int sum = 0;
        for (int j = 1 ; j <= n - 1; j++){
            sum = k * 2 + pow(2, j - 1);
            sum %= m ;
            k = sum ;
        }
        cout << sum % m << endl ;
    }

    return 0;
}