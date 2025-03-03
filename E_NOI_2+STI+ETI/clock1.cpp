#include<bits/stdc++.h>

using namespace std ;

int n, a, b, c, d, hn, mn, minn, hs, ms, mins, summ, h, m ; 

int main(){
	
	cin >> n ;
	
	d = n % 10 ;
	c = n / 10 % 10 ;
	b = n / 100 % 10 ;
	a = n / 1000 ;
	
	hs = a * 10 + b ;
	ms = c * 10	+ d ;
	
	hn = d * 10 + c ;
	mn = b * 10 + a ;
	
	mins = hs * 60 + ms ;
	minn = hn * 60 + mn ;
	
	summ = mins + minn ;
	summ =summ % 1440;
	
	h = summ / 60 ;
	m = summ % 60 ;

	if (h < 10) cout << 0;
	cout << h;
	if (m < 10) cout << 0;
	cout << m << endl ;
	
	
	
	
	
	
	return 0 ;
}
