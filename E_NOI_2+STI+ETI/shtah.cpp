#include<bits/stdc++.h>

using namespace std ;

int h1, v1, h2, v2, res; 

int main(){
	
	cin >> h1 >> v1 ;
	cin >> h2 >> v2 ;
	
	if (h1 < h2){
		cout << "NEVER" << endl ;
		return 0 ;
	}
	
	if (abs(v1 - v2) != 1){
		cout << "NEVER" << endl ;
		return 0 ;
	}
	
	res = h1 - h2 - 1 ;
	
	cout << res << endl ;
	
	return 0 ;
}
