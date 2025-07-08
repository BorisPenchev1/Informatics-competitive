#include<bits/stdc++.h>

using namespace std ;

int n1, n2, k, res = 0;
char c1, c2 ;

int main(){
	
	cin >> n1 >> c1 ;
	cin >> n2 >> c2 ;
	cin >> k ;
	
	res = k - n1 ;
	
	if (c1 == 'A'){
		if (res > 0){
			cout << n1 << endl ;
		}
		else
		if(k < n1){
			cout << k << endl ;
		}
	}
	else{
		if (res > 0){
			cout << res << endl ;
		}
		else{
			cout << "0" << endl ;
		}
	}
	
	return 0 ;
}



