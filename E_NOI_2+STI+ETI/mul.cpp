#include<bits/stdc++.h>

using namespace std ;

int a, n, i, curr_res, next_a, a1, a2, a3 ;

int main() {
	
	cin >> a >> n ;
	
	for (i = 1 ; i <= n ; i++){
		a = (a*a) % 1000;
	}	
	
	cout << curr_res << endl ;
	
	return 0;
}
