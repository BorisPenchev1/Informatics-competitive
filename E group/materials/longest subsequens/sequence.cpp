#include<bits/stdc++.h>

using namespace std;

int main(){

    int a[100001] ;
    a[0] = 0;
    int n ;
    cin >> n ;

    for (int i = 1 ; i <= n ; i++){
        cin >> a[i] ;
    }

    int l = 1, r = 1, Min = INT_MAX, Max = 0 ;
    int brd = 1, Maxd = 0;
    int brr = 1;
    int diff = 0, Maxdiff = 0;
    int i ;
    for (i = 2 ; i <= n ; i++){
        if (a[i] >= a[i-1]){
            brd++ ;
            r++ ;
            Max = max(Max, a[i-1]);
            Min = min(Min, a[i-1]);
        }
        else{
            Maxd = max(brd, Maxd) ;
            Maxdiff = max(Max - Min, Maxdiff) ;
            l = r = i ;
            brr++ ;
            brd = 1 ;
            Max = 0 ;
            Min = INT_MAX ;
        }
    }

    Max = max(Max, a[i-1]);
    Maxd = max(brd, Maxd) ;
    Maxdiff = max(Max - Min, Maxdiff) ;    

    cout << brr << endl ;
    cout << Maxd << endl ;
    cout << Maxdiff << endl ;

    return 0;
}