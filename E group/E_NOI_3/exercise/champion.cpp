#include<bits/stdc++.h>

using namespace std ;

string s, i, p ;

int main(){

    int i = 0 ;
    while (true){
        cin >> s[i] ;
        if (s[i] == '.') break;
        i++;
    }

    for (i = 0 ; i < s.size(); i++){
        p[i] = i ;
    }

    int d = p.size() ;

    for (i = 0 ; d > 1 ; i++){
        if (i + 1 > d) continue;
        if (s[i] == '+'){
            if (p[i] > p[i+1]) p.erase(i);
            else p.erase(i+1);
        }
        else {
            if (p[i] > p[i+1]) p.erase(i+1);
            else p.erase(i);
        }
        d = p.size() ;
    }

    cout << stoi(p) + 1 << endl ;


    return 0 ;
}