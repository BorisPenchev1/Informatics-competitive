#include<bits/stdc++.h>

using namespace std;

void Square(int k){
    int k1 = k;
    for (int i = 1 ; i <= k1 ; i++){
        for (int j = i ; j <= k ; j++){
            cout << j << " " ;
        }
        cout << endl ;
        k++;
    }
}

void Tringle1(int k){
    int k1 = k, j = 0;
    for (int i = 1 ; i <= k1 ; i++){
        for (int s = 1 ; s < i * 2 - 1 ; s++) cout << " ";
        for (j = i + j ; j <= k ; j++){
            cout << j << " " ;
        }
        cout << endl ;
        k++;
    }
}

int main(){

    int n, k; cin >> n >> k ;

    // Square(k);
    Tringle1(k);

    return 0;
}