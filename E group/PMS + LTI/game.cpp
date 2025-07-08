#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b ; cin >> a >> b ;

    if (a == 1 and b == 1){
        cout << 1 << endl ;
        cout << 1 << endl ;
        return 0;
    }

    if (a % 2 == b % 2){
        if (a % 2 == 0){
            cout << 2 << endl ;
        }
        else{
            cout << 1 << endl ;
            cout << a  << endl ;
        } 
    }
    else{
        if (a % 2 == 1){
            cout << 1 << endl ;
            cout << a  << endl ;
        }
        else {
            cout << 1 << endl ;
            cout << b << endl ;
        }
        
        
        
    }

    return 0;
}