#include<bits/stdc++.h>

using namespace std ;

int d, br = 0;
int n, a[100001] ;
int m, b[100001] ;
int ad[100001] ;
int bd[100001] ;
int count_b[100001] = {0}; // Array to count remainders of b

int main(){

    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> d ;

    cin >> n ;

    for (int i = 0 ; i < n ; i++){
        cin >> a[i] ;
        ad[i] = a[i] % d ;
    }

    cin >> m ;

    for (int i = 0 ; i < m ; i++){
        cin >> b[i] ;
        bd[i] = b[i] % d ;
        count_b[bd[i]]++;
    }

    for (int i = 0 ; i < n ; i++){
        if (ad[i] == 0) {
            br += count_b[0];
        }
        else {
            br += count_b[(d - ad[i]) % d];
        }
    }

    cout << br << endl ;

    return 0 ;
}