#include <bits/stdc++.h>

using namespace std;

char ch[101] ;
int s[101], b[101] ;
int n, m ; 
string text ;

int idx(char target){
    for (int i = 1 ; i <= n ; i++){
        if (ch[i] == target or ch[i] - 32 == target ) return i ;
    }
    return 0 ;
}

int main() {
    
    cin >> n >> m ;
    
    for (int i = 1 ; i <= n ; i++){
        cin >> ch[i] >> s[i] >> b[i] ;
    }

    int sum = 0 ;
    for (int i = 1 ; i <= m ; i++){

        cin >> text[i] ;
        if (text[i] == ' ') continue;

        int indx = idx(text[i]);

        if (text[i] > 'A' and text[i] < 'Z') {
            sum += b[indx];
        }
        else sum += s[indx];
    }

    cout << sum << endl ;

    return 0;
}