#include<bits/stdc++.h>

using namespace std ;

int num, sum, a, b, c, num1, num2, num3, num4, num5, num6 ;

int main(){
	
	cin >> num ;
	
	c = num % 10;
	b = num % 100 / 10 ;
	a = num % 1000 / 100 ;
	
	num1 = a * 100 + b * 10 + c ;
	num2 = b * 100 + a * 10 + c ;
	num3 = b * 100 + c * 10 + a ;
	num4 = a * 100 + c * 10 + b ;
	num5 = c * 100 + b * 10 + a ;
	num6 = c * 100 + a * 10 + b ;
	
	sum = num1 + num2 + num3 + num4 + num5 + num6 ;
	
	cout << sum << endl ;
	
	
	return 0 ;
}
