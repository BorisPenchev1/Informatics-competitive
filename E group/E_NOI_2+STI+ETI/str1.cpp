#include<bits/stdc++.h>

using namespace std ;

int d, i, code;
string s;
char c;

int main(){
	
	cin >> s ;
	//cout << s << endl ;
	
	d = s.size();
	
	//cout << d << endl;
	
	for(i = 0; i < d ; i++){
		c = s[i];
		
		if('a' <= c and c <= 'z'){
			c = c - 32;
		}
		else
		if('A' <= c and c <= 'Z'){
			c = c + 32;
		}
		
		cout << c;
	}
	
	return 0;
}
