#include<bits/stdc++.h>

using namespace std ;

int a, b ;

int main(){

    cin >> a >> b ;

    string s_a = to_string(a), s1_a = to_string(a);
    string s_b = to_string(b), s1_b = to_string(b) ;

    for (int i = 0 ; i < s_a.size() ; i++){
        if (s_a[i] == '5') s_a[i] = '6' ;
    }

    for (int i = 0 ; i < s_b.size() ; i++){
        if (s_b[i] == '5') s_b[i] = '6' ;
    }

    int Max = stoi(s_a) + stoi(s_b) ;

    for (int i = 0 ; i < s1_a.size() ; i++){
        if (s1_a[i] == '6') s1_a[i] = '5' ;
    }

    for (int i = 0 ; i < s1_b.size() ; i++){
        if (s1_b[i] == '6') s1_b[i] = '5' ;
    }

    int Min = stoi(s1_a) + stoi(s1_b) ;

    cout << Min << " " << Max << endl ;

    

    return 0 ;
}