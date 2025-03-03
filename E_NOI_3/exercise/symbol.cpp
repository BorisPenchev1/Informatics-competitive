#include<bits/stdc++.h>

using namespace std ;

int main(){

    string s ;
    int i = 0, br = 0, brMax = 0, brMin = 0;
    char Max, Min ;

    while (true){
        cin >> s[i] ;
        if (s[i] == '.') break ;
        else if (s[i] == s[i - 1]) {
            br++ ;
            if (br > brMax) {
                brMax = br ;
                Max = s[i] ;
            }
        }
        else{
            brMin = min(brMin, )
        }
    }

    return 0 ;
}