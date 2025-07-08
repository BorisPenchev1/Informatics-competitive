#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n ; cin >> n ;

    int x = 0, y = 0, r = 1, previous = 0, br = 0, Max = 0, pr = 0;
    for (int i = 1 ; i <= n ; i++){
        int curr ;
        cin >> curr ;

        if (curr == 1) x++ ;
        else y++ ;

        if (x == y) r++ ;

        if (curr == previous) br++;
        else br = 0;

        if (x > y and (pr == 2 or pr == 0)){
            Max = max(br, Max);
            pr = 1;
        }
        else if (y > x and (pr == 1 or pr == 0)){
            Max = max(br, Max);
            // if (Max == br) Max++ ;
            pr = 2;
        }
        previous = curr ;
    }

    cout << x << " " << y << endl ;
    cout << r << endl ;
    cout << Max << endl ;

    return 0;
}

// 50 points