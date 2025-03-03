#include<bits/stdc++.h>

using namespace std ;

int n, i, l, r, l_s = 0, r_s = 0 , bl ;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin.tie(0);
	
	cin >> n ;
	
	bl = n ;
	
		for (i = 1 ; i <= n ; i++){
		cin >> l >> r ;
		
		if (r_s >= l){
			bl--;
		}
		
		l_s = l ;
		
		if (r_s > r){
			continue ;
		}
		else{
			r_s = r ;
		}
		
		
		
	}
	
	cout << bl << endl ;
	
	return 0 ;
}



