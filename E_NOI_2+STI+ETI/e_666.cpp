#include <bits/stdc++.h>

using namespace std;

int i, n, br;
string s ;

int main() {
	
	cin >> n ;
	
	for (i = 0 ; i < n ; i++){
	    cin >> s[i] ;
	}
	
	for (i = 0 ; i < n ;){
	    if (s[i] == '6' and s[i+1] == '6' and s[i+2] == '6' and s[i+3] == '6'){
	        i += 3;
	        continue;
	    }
	    if (s[i] == '6' and s[i+1] == '6' and s[i+2] == '6')br++, i += 3;
	    else i++ ;
	}
	
	cout << br << endl ;

}

