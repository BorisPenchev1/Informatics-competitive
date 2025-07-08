#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, k, Max, pre_m, pre_k, Max_s ;

int main(){
     
    cin >> n ;

    for(int i = 1 ; i <= n ; i++){
        cin >> m >> k ;
        if (abs(m - pre_m - pre_k) > Max) {
            Max = abs(m - pre_m - pre_k) ;
            Max_s = i ;
        }
        pre_m = m ;
        pre_k = k ;
    }

    cout << Max_s << " " << Max << endl ;

}