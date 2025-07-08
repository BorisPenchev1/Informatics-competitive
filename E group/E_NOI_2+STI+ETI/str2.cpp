#include<bits/stdc++.h>

using namespace std ;

int d, i, code, sum;
string s;
char c;

int main(){
	
	cin >> s ;
	
	d = s.size();
	
	for(i = 0; i < d ; i++){
		code = s[i] - 48 ;
		sum = sum + code ;
	}
	
	cout << sum << endl ;
	
	return 0;
}
