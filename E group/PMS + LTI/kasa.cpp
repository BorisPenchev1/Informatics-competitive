#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    int a1, b1, c1, a2, b2, c2, a3, b3, c3;
    int Min = INT_MAX, Min1 = INT_MAX;
    int res = 0;

    for (int i = 1 ; i <= n ; i++){
        if (i % 3 == 0){
            cin >> a3 >> b3 >> c3 ;
            if (i == 1){   
                Min = min(a1 + a2 + a3, b2 + a3);
                Min = min(Min, c1);
                res += Min;
            }
            else {
                Min = min(a1 + a2 + a3, b2 + a3);
                Min = min(Min, c1);
                res += min(Min, Min1);
            }
        }

        if (i % 3 == 1){
            cin >> a1 >> b1 >> c1 ;
            if (i != 1){
                Min1 = min(a3 + a2 + a1, b3 + a1);
                Min1 = min(Min, c3);
            }
        }

        if (i % 3 == 2){
            cin >> a2 >> b2 >> c2;
        }
    }

    if (n == 1){
        cout << a1 << endl;
        return 0;  
    }
    else if (n == 2){
        cout << min(b1, a1 + a2) << endl ;
        return 0;
    }
    else
        cout << res << endl ;

    return 0;
}