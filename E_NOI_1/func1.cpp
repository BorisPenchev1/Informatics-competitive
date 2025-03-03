#include<bits/stdc++.h>

using namespace std;

int n, a[100001] ;

int Min(int l, int r){
    int Min = INT_MAX;
    for (int i = l - 1 ; i < r ; i++){
        Min = min(a[i], Min) ;
    }
    return Min ;
}

int Max(int l, int r){
    int Max = 0;
    for (int i = l - 1 ; i < r ; i++){
        Max = max(a[i], Max) ;
    }
    return Max ;
}

int main(){
    
    cin >> n ;

    for (int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }

    int T, l, r ;
    cin >> T ;

    for (int i = 1 ; i <= T ; i++){
        cin >> l >> r ;
        cout << Min(l, r) << " " << Max(l, r) << endl ;
    }

}