#include<bits/stdc++.h>

using namespace std ;

string s ;
char c ;
int k ;

int main(){
	
	cin >> s ;
	
	c = s[0] ;
	
	if ('a' <= c and 'z' <= c){
		c = c - 32 ; 
	}
	else
	if ('A' <= c and 'Z' <= c){
		c = c + 32 ;
	}
	
	cout << c << endl ;
	
	return 0  ;
}
