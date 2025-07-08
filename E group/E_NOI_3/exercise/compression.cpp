#include<bits/stdc++.h>

using namespace std;

string alphabet = "abcdefghijklmnopqrstuvwxyz" ;
char curr ;
int br ;

int main(){

    while (true){
        cin >> curr ;

        if (curr == '.') break ;

        if (curr == '0') br++;
        if (curr == '1') {
            cout << alphabet[br] ;
            br = 0 ;
        } 
    }

    cout << endl ;

    return 0 ;
}