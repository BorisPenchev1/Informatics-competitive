#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e4 + 2;

int a[MAXN];

int main(){

    int n; cin >> n;

    for (int i = 0 ; i < n ; i++) cin >> a[i] ;

    int i;
    for (int k = 1 ; k <= n ; k++){
        for (i = 0 ; i < n - i ; i++){
            if (a[i] == a[i + 1]){
                a[i] = 1 ;
            }
            else {
                a[i] = 0;
            }
            cout << a[i] << " " ;
        }
        cout << endl ;
    }

    return 0;
}

// 1 0 0 0 0 1
//  0 1 1 1 0
//   0 1 1 0
//    0 1 0
//     0 0
//      1