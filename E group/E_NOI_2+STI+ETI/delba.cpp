#include<bits/stdc++.h>

using namespace std ;

int a, b, c, n ;

int main(){
	
	cin >> n ;
	
	a = n / 3;
	b = n / 3;
	c = n / 3;
	
	if(n % 3 == 1){
		c += n % 3 + 1;
		a -= n % 3 ;
	}
	else
	if (n % 3 == 2){
		c += 1 ;
		a -= 1 ;
	}
	
	else{
		a -= 1 ;
		c += 1 ;
	}
	
	cout << a << " " << b << " " << c << endl;
	
	return 0;
} 
