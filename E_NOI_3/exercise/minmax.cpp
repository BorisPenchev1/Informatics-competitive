#include<bits/stdc++.h>

using namespace std ;

string Sum(string s1, string s2){

    int d = s1.size(), ost = 0;
    string s = "" ;

    if (d > s2.size()){
        for (int i = 1 ; i <= d - s2.size() ; i++ ){
            s2.insert(s2.begin(), '0');
        }
    }

    for (int i = d - 1 ; i >= 0 ; i--){

        int c1 = s1[i] - '0' ;
        int c2 = s2[i] - '0' ;
        int sum = c1 + c2 + ost;

        s.push_back((sum % 10) + '0');
        if (sum >= 10 and i == 0){
            sum /= 10 ;
            s.push_back(sum + '0');
        }
        ost = sum / 10 ;
    }

    reverse(s.begin(), s.end());

    return s ;

}

int main(){

    string s = "";
    
    cin >> s ;

    int d = s.size() ;

    sort(s.begin(), s.end());
    string sb = s ;
    reverse(sb.begin(), sb.end());

    int i = 0 ;

    while (s[i] == '0') i++ ;

    swap(s[i], s[0]);

    string sa = s ;

    cout << sa << endl ;
    cout << sb << endl ;
    cout << Sum(sa, sb) << endl ;
    
    return 0 ;
}

/*
0009324862790015176
*/