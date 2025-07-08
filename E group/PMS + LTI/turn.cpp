#include<bits/stdc++.h>

using namespace std ;

void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){

    string s; cin >> s ;

    int br = 0;
    long long res = 0; 
    for (int i = (int)s.size(); i >= 0 ; i--){
        if (s[i] == '0'){
            br++ ;
        }
        else {
            
            res += br ;
        }
   }

    cout << res << '\n' ;

    return 0;
}