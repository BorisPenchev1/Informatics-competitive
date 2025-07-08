#include<bits/stdc++.h>

using namespace std ;

int n, res, sq ;

int main(){
	
	cin >> n ;
	
	sq = (n - 1) / 3 ;
	
	if (n % 3 == 1){	
		res++ ;				
	}
	else{
		cout << 0 << endl ;
	}
	
	return 0 ;
}
