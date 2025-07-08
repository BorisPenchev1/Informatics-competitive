#include<bits/stdc++.h>

using namespace std ;

int a, b, a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, Max, Min, MaxA, MaxB, MinA, MinB ;

int main(){
	
	cin >> a >> b ;
	
	a1 = a % 10 ;
	a2 = a / 10 % 10 ;
	a3 = a / 100 % 10 ;
	a4 = a / 1000 % 10 ;
	a5 = a / 10000 % 10 ;
	
	b1 = b % 10 ;
	b2 = b/10 % 10 ;
	b3 = b / 100 % 10 ;
	b4 = b / 1000 % 10 ;
	b5 = b / 10000 % 10 ;
	
	// za A
	// za min
	if (a1 == 8) a1 = 3 ;
	if (a2 == 8) a2 = 3 ;
	if (a3 == 8) a3 = 3 ;
	if (a4 == 8) a4 = 3 ;
	if (a5 == 8) a5 = 3 ;
	
	MinA = a5 * 10000 + a4 * 1000 + a3 * 100 + a2 * 10 + a1 ;
	
	// za max
	
	if (a1 == 3) a1 = 8 ;
	if (a1 == 3) a2 = 8 ;
	if (a1 == 3) a3 = 8 ;
	if (a1 == 3) a4 = 8 ;
	if (a1 == 3) a5 = 8 ;
	
	MaxA = a5 * 10000 + a4 * 1000 + a3 * 100 + a2 * 10 + a1 ;
	
	// za B
	// za min B
	
	if (b1 == 8) b1 = 3 ;
	if (b2 == 8) b2 = 3 ;
	if (b3 == 8) b3 = 3 ;
	if (b4 == 8) b4 = 3 ;
	if (b5 == 8) b5 = 3 ;
	
	MinB = b5 * 10000 + b4 * 1000 + b3 * 100 + b2 * 10 + b1 ;
	
	// za maxB
	
	if (b1 == 3) b1 = 8 ;
	if (b2 == 3) b2 = 8 ;
	if (b3 == 3) b3 = 8 ;
	if (b4 == 3) b4 = 8 ;
	if (b5 == 3) b5 = 8 ;
	
	MaxB = b5 * 10000 + b4 * 1000 + b3 * 100 + b2 * 10 + b1 ;
	
	cout << MinA + MinB << " " << MaxA + MaxB << endl ;
	

	
	return 0 ;
}
