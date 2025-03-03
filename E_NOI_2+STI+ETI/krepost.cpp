#include<bits/stdc++.h>

using namespace std ;

int n, k, ost;

int main(){
	
	cin >> n >> k ;
	
	ost = k % n ;
	
	if (n == 3){
		if (ost == 0){
		   cout << (k / n) * 2<< endl ;
		}
		if (ost == 1){
			cout << (k / n) * 2 << endl ;
		}
		if (ost == 2){
			cout << 2 * (k / n) + 1 << endl ;
		}
	}
	if (n == 4){
		if (ost == 0){
		   cout << (k / n) * 2<< endl ;
		}
		if (ost == 1){
			cout << (k / n) * 2 << endl ;
		}
		if (ost == 2){
			cout << 2 * (k / n) + 1 << endl ;
		}
		if (ost == 3){
			cout << 2 * (k / n) + 1 << endl ;
		}
	}
	if (n == 5){
		if (ost == 0){
		   cout << (k / n)<< endl ;
		}
		if (ost == 1){
			cout << (k / n) * 2 << endl ;
		}
		if (ost == 2){
			cout << 2 * (k / n) << endl ;
		}
		if (ost == 3){
			cout << 2 * (k / n) + 1 << endl ;
		}
		if (ost == 4){
			cout << 2 * (k / n) + 1 << endl ;
		}
	}

	return 0 ;
}
