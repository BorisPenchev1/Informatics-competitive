#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n ;

    int a[100001];
    a[0] = 0;
    for (int i = 1 ; i <= n ; i++){
        cin >> a[i] ;
    }

    int br = 0, Max = 0, Min = INT_MAX;
    for (int i = 1 ; i <= n ; i++){
        int j = i + 1;
        Max = 0 ;
        Min = INT_MAX;
        while(j <= n){
            Max = max(Max, a[j]);
            Min = min(Min, a[j]);
            if ((a[i] < Max and a[j] < Max) or (a[i] > Min and a[j] > Min)) break;
            else br += 2 ;
            // cout << "br: " << br << " | j: " << j << " | i: " << i << " | Max: " << Max << " | Min: " << Min << endl ; 
            j++;
        }
    }

    cout << br << endl ;

    return 0;
}