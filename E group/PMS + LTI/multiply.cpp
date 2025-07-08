#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m ; cin >> n >> m;

    int p ;
    int res[10] = {0};
    for (int i = 1 ; i <= n ; i++)
        for (int j = 1 ; j <= m ; j++)
            p = i * j;
            while (p > 0){
                res[p % 10]++;
                p /= 10 ;
            }

    int Max = res[0] ;
    int Max_s = 0 ;
    for (int i = 1 ; i <= 9 ; i++){
        if (Max < res[i]){
            Max = res[i];
            Max_s = i ;
        }
    }

    cout << Max_s << " " << Max << endl ;

    return 0;
}