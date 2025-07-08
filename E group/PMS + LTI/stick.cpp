#include<bits/stdc++.h>

using namespace std;

int main(){

    int l1, r1 ; cin >> l1 >> r1 ;
    int l2, r2 ; cin >> l2 >> r2 ;
    int l3, r3 ; cin >> l3 >> r3 ;

    int Min = INT_MAX;
    Min = min(r1 - l1, r2 - l2);
    Min = min(Min, r3 - l3);

    int Max = 0;
    Max = max(r1 - l1, r2 - l2);
    Max = max(Max, r3 - l3);

    if (r1 >= l2 and r2 >= l3) {
        cout << 1 << endl ;
        cout << Min << " " << Max << endl ;
    }

    else if (r1 >= l2 and r2 < l3){
        cout << 2 << endl ;
        cout << Min << " " << Max << endl ;
    }

    else if (r1 < l2 and r2 < l3){
        cout << 3 << endl ;
        cout << Min << " " << Max << endl ;
    }

    else{
        cout << 2 << endl ;
        cout << Min << " " << Max << endl ;
    }

    return 0;
}