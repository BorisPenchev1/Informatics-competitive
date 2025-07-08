#include <bits/stdc++.h>

using namespace std;

string s ; 

bool isUnderscore(){
    for (int i = 0 ; i < s.length() ; i++){
        if (s[i] == '_') return true ;
    }
    
    return false ;
}

void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
	
	int n ; cin >> n ;
	cin >> s ;
	
	if(isUnderscore()){
	    for (int i = 0 ; i < s.length() ; i++){
	        if (i == 0) s[i] = toupper(s[i]);
	        
	        if (s[i] == '_') {
	            s.erase(i, 1);
	            s[i] = toupper(s[i]);
	        }
	    }
	}
	else {
	    for (int i = 0 ; i < s.length() ; i++){
            if (i == 0) s[i] = tolower(s[i]);
            
            if (s[i] > 'A' and s[i] < 'Z'){
                char udrscr = '_' ;
                s.insert(i, 1, udrscr);
                s[i + 1] = tolower(s[i + 1]);
            }
	    }
	}
	
	cout << s << endl ;

}
