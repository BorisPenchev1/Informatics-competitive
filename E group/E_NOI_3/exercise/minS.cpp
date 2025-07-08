#include<bits/stdc++.h>

using namespace std ;

string s, s1, s2, s3;
int i ;

int main(){

    s = "30152007" ;

    int d = s.size() ;

    sort(s.begin(), s.end());
    string sb = s ;
    reverse(sb.begin(), sb.end());

    i = 0 ;

    while (s[i] == '0') i++ ;

    s1 = s.substr(0, i) ;
    s2 = s[i];
    s3 = s.substr(i + 1, d);

    string sa = s2 + s1 + s3 ;

    cout << sa << " " << sb << endl ; 

    return 0 ; 
}