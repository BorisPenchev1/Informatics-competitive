#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int banana = 0, qbalka = 0, krushi = 0 ;
    bool daliqbalka = false ; 
    bool dalibanana = false ;
    for (int i = 0 ; i <= s.length() ; i += banana + qbalka){
        if (s[i] == 'a'){
            int j = i ;
            while(s[j] == 'a') banana++, j++;
            dalibanana = true ;
        }
        else{
            int j = i ;
            while (s[j] == 'b' ) qbalka++, j++;
            daliqbalka = true ;
        }
        if (daliqbalka == true and dalibanana == true ) krushi++, daliqbalka = false, dalibanana = false, banana = 0, qbalka = 0  ;
    }

    cout << krushi << endl ;

    return 0;
}