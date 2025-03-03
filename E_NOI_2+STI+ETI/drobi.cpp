#include <bits/stdc++.h>

using namespace std;

int i, j, ai, bi, aj, bj, n, br = 0;

int main() {

    cin >> n;
    cin >> ai >>  bi ;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            cin >> aj >> bj ;
            if (((ai * bj) + (aj * bi) % bi * bj) == 0){
              br++;
            } 
        }
    }
    
    cout << br << endl  ;

}
