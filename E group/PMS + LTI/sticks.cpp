#include<bits/stdc++.h>

using namespace std;

int main(){

    int n ; cin >> n ;

    int res = 0;
    int i = 1 ;
    while (true){
        int a = 4 + (i - 1) * 3 ;   
        int b = n - a ;

        if (a >= n) break;

        int r = a - i;

        if (b % r == 0){
            int c = b / r + 1;
            if (c < i) break;
            res++ ;
        }

        i++;
    }

    cout << res << endl ;

    return 0;
}
