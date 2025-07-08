#include<bits/stdc++.h>

using namespace std;

int first_digit(char c){
    int i = 2 ;
    while (i < 10){
        if (c - '0' < i and (c - '0') + i >= 7) return i;
        i += 2 ;
    }
    return -1;
}

int second_digit(char a, char b){
    if (a - '0' > b - '0'){
        return a - '0';
    }
    else return b - '0' ;
}

int main(){

    string a, b ; cin >> a >> b ;

    string answer = "";

    if (first_digit(a[2]) != -1){
        cout << first_digit(a[2]) << " " ;
    }
    else {
        cout << 0 << " " << 0 << " " << 0 << endl ;
        return 0;
    }

    cout << second_digit(a[1], b[1]) << " " ;

    cout << a[2] << endl ;

    return 0;
}