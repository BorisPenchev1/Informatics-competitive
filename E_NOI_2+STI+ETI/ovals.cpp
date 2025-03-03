#include<bits/stdc++.h>

using namespace std ;

int num, e, d, s, h, br;

int main(){
	
	cin >> num ;
	
	e = num % 10 ; 
	d = num / 10 % 10 ; 
	s = num / 100 % 10 ; 
	h = num / 1000 % 10 ;
	
	if (e == 0 or e == 6 or e == 8 or e == 9) br++ ; 
	if (d == 0 or d == 6 or d == 8 or d == 9) br++ ; 
	if (s == 0 or s == 6 or s == 8 or s == 9) br++ ;
	if (h == 0 or h == 6 or h == 8 or h == 9) br++ ;
	
	if (e == 8) br++; 
	if (d == 8) br++;
	if (s == 8) br++;
	if (h == 8) br++;
	
	if (e != 0 and d == 0 and s == 0 and h == 0) br = br - 3 ;
	if (e != 0 and d != 0 and s == 0 and h == 0) br = br - 2 ;
	if (e != 0 and d != 0 and s != 0 and h == 0) br = br - 1 ; 
	if (e != 0 and d == 0 and s != 0 and h == 0) br = br - 1 ;
	
	if (e == 0 and d == 0 and s == 0 and h == 0) br = 1 ;
	
	cout << br << endl;
	
	
	
	return 0;
}
