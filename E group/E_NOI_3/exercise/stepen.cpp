#include<bits/stdc++.h>

using namespace std;

int st(int p, int k){
    int n = p ;
    for (int i = 2 ; i <= k ; i++){
        p = p * n ;
    }
    return p ;
}

int main(){

    int n, k ;

    cin >> n >> k;

    cout << st(n, k) << endl ;

}