#include<bits/stdc++.h>

using namespace std;

int main(){

    string s ; cin >> s ;

    int n = s.size(), br, Max = 0;
    char Max_s ;
    for (int i = 0 ; i < n ; i++){
        br = 1 ;
        while (s[i] == s[i + 1]){
            i++;
            br++ ;
        }
        if (Max < br or (Max == br and Max_s < s[i])){
            Max = br ;
            Max_s = s[i];
        }
    }

    cout << Max << " " << Max_s << endl ;

    return 0;
}