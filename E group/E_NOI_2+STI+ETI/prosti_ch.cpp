#include<bits/stdc++.h>

using namespace std ;

int n1, n, i, br ;

int main(){
	
	cin >> n ;
	
	n1 = n ;
	
	for (i = 2 ; i * i <= n ; i++){
		br = 0 ;
		while (n1 % i == 0){
			br++;
			n1 = n1 / i ;
		}
		if (br > 0) cout << i << " " <<br << endl ;
		if (n1 == i) break ;
	}
	
	return 0 ;
}



