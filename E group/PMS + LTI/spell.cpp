#include<bits/stdc++.h>

using namespace std ;

string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
string numbers[27] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26"};

int main(){

    int n ; cin >> n ;

    string decoded = "";
    for (int i = 0 ; i < n ; i++){
        decoded.push_back(alphabet[i]) ;
    }

    string indeces = "";
    for (int i = 0 ; i < n / 2 ; i++){
        if (i == 0) {
            if (n % 2 == 0) indeces.push_back(n + '0') ;
            else indeces.push_back(n - 1 + '0');
        }
        else indeces.push_back(n - (i* 2) + '0') ; 
    }
    for (int i = 1 ; i <= n / 2 + 2; i += 2){
        if (i == 1) indeces.push_back('1');
        else indeces.push_back(i + '0');
    }

    cout << decoded << endl ;
    cout << indeces << endl ;

    char encoded[n] = {0};
    for (int i = 0 ; i < n ; i++){
        encoded[indeces[i] - 48 - 1] = decoded[i];
    }

    cout << encoded << endl ;

    return 0 ;
}


/*
ABCDEF
FBCDEA
FBDCEA
DBFCEA
DBECFA
*/