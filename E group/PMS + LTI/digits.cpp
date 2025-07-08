#include<bits/stdc++.h>

using namespace std;

int main(){

    string a, b; cin >> a >> b;

    string digits[10] = {"111101111001111", "111101111101111", "111001001001001", "111100111101111", "111100111001111", "101101111001001", "111001111001111", "111001111100111", "001001001001001", "111101101101111"};

    int ff = a[0] - '0';
    int fs = a[1] - '0';
    int sf = b[0] - '0';
    int ss = b[1] - '0';

    int br = 0 ;
    for (int i = 0 ; i < 15 ; i++){
        if (digits[ff][i] != digits[sf][i]) br++ ;
    }

    for (int i = 0 ; i < 15 ; i++){
        if (digits[fs][i] != digits[ss][i]) br++ ;
    }

    cout << br << endl ;

    return 0;
}