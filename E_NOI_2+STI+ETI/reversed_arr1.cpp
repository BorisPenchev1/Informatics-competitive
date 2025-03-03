// reversing an array

#include<bits/stdc++.h>

using namespace std ;

int i , n , a[1001];

int main(){
	
	cin >> n ;
	
	for (i = 1 ; i <= n ; i++){
		cin >> a[i] ;
	}
	
	for (i = 1 ; i <= n ; i++){
		a[i] = a[n] - i+1 ;
		cout << a[i] << " ";
	}
	
	
	
	return 0 ;
	
}
