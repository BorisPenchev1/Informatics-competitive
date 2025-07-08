#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n ; cin >> n ; string s ; cin >> s ;


    int a[10] = {0};

    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        a[s[i] - '0']++; 
        sum += s[i] - '0';
    }

    int br = 0;
    for (int i = 0 ; i <= 9 ; i++){
        if (a[i] == 0) continue;

        if (a[i] % 2 == 1 ) br++ ;
        
        if (br == 2){
            cout << "no" << endl ;
            return 0;
        }
    }
    
    cout << "yes " << sum << endl ;

    return 0;
}