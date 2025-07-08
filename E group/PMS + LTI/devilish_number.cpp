#include<bits/stdc++.h>

using namespace std ;

int main(){

    int n ; cin >> n ;
    string s ; cin >> s ;

    int br = 0, brs = 0, st = -1, Maxst = -1, Maxs = 0;
    for (int i = 0 ; i < s.size() ; i++){
        while (s[i] == s[i - 1]){
            br++ ;
            i++ ;
        }
        if (br >= n){
            brs += br;
            st = s[i];
        }
        if (brs > Maxs){
            if (st == Maxst) Maxst += brs;
            else {
                Maxs = brs ;
                Maxst = s[i];
            }
        }
        br = 0;
        brs = 0;
    }
    
    for (int i = 1 ; i <= n ; i++) cout << Maxst ;
    cout << " " ;
    cout << Maxs << endl ;

    return 0 ;
}