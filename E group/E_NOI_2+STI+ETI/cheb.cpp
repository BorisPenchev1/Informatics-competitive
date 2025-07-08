#include<bits/stdc++.h>

using namespace std ;

int k, sum = 0, i ;

int main(){
	
	cin >> k ;
	
	for(i = 1 ; i <= k ; i++){
		sum = sum + i + 1;
	}
	
	cout << sum << endl ;
    
	return 0 ;
}
