#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n, a[1000001], k ;

int main(){
     
    cin >> n >> k;

    int i, res = 0 ;
    for (i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }

    sort(a, a + i) ;

    for (int i = 0 ; i < n ; i++){
        if (a[i] == a[i - 1]) res = a[i] ;
    }

    cout << res << endl ;

}