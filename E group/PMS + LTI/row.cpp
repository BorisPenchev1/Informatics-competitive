#include<bits/stdc++.h>

using namespace std ;


const int MAXN = 1e3 + 2 ;

int main(){

    string s ; cin >> s ;
    int k ; cin >> k ;   

    int br_0 = 0, n = s.size() ;
    int prefix[MAXN]; prefix[0] = 0 ;
    
    for (int i = 0 ; i < n ; i++){
        if(s[i] == '0') prefix[i+1] = prefix[i] + 1;
        else prefix[i+1] = prefix[i];
    }

    int br = 0 ;
    for(int i = 1 ; i <= n ; i++)
       for(int j = i ; j <=n ; j++)
        if(prefix[j] - prefix[i-1] == k) br++;

    cout << br << endl ;

    return 0;
}

/*
11000101011100
00123344555567
21122411000000

1010
0112
121
*/