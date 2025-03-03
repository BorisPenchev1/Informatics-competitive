#include<bits/stdc++.h>

using namespace std;

int n, a, b, c ;

int main(){
	
	cin >> n ;
	
	a = 1; 
	b = 1;
	
	for (int i = 3 ; i <= n ; i++){
		c = a + b;
		a = b;
		b = c;
	}
	
	cout << c << endl ;
	
	return 0;
}
