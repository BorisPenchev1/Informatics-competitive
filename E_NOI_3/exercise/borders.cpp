#include<bits/stdc++.h>

using namespace std ;

int t[1000001] = {0};
int n, m, curr, br = 0;

int main(){

    cin >> n >> m ;
    t[0] = -1 ;
    t[-1] = -1 ;

    for (int i = 1 ; i <= n ; i++){
        cin >> curr ;
        t[curr]++ ;
    }

    for (int i = 1 ; i <= m ; i++){
        if (t[i - 1] == 0 and t[i] == 0){
            br++ ;
        }
    }

    cout << br << endl ;

    return 0 ;
}