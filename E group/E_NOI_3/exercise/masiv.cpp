#include<bits/stdc++.h>

using namespace std ;

bool cmp(int a, int b){
    return a > b ;
}

int main(){

    int a[11] = {0}, n = 10;

    for (int i = 1 ; i <= n ; i++){
        a[i] = rand() % 15 + 1 ;
    }

    sort(a + 1, a + n + 1, cmp) ;

    for (int i = 1 ; i <= n ; i++) cout << a[i] << " " ;
    cout << endl ;
  
    return 0 ;
}