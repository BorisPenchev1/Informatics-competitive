#include<bits/stdc++.h>

using namespace std;

int n, a[100001] ;

void MinMax(int l, int r, int& Max, int& Min){
    Min = INT_MAX;
    Max = 0 ;
    for (int i = l - 1 ; i < r ; i++){
        Min = min(a[i], Min) ;
        Max = max(a[i], Max) ;
    }
}

int main(){
    
    cin >> n ;

    for (int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }

    int T, l, r, Min, Max ;
    cin >> T ;

    for (int i = 1 ; i <= T ; i++){
        cin >> l >> r ;
        MinMax(l, r, Max, Min) ;
        cout << Min << " " << Max << endl ;
    }

}