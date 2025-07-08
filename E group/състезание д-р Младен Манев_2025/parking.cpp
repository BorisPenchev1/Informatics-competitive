#include<bits/stdc++.h>

using namespace std ;

int t, in, out, i, min_in, br = 0, min_out ;

int main(){
	
	cin >> t ;
	cin >> in ;
	
	for (i = 1 ; i <= in ; i++){
		cin >> min_in ;
		if (min_in <= t) br++;
	}
	
	cin >> out ;
	
	for (i = 1 ; i <= out ; i++){
		cin >> min_out ;
		if (min_out <= t) br--;
	}
	
	cout << br << endl ;
	
	return 0 ;
}
