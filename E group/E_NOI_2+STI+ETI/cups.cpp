#include<bits/stdc++.h>

using namespace std ;

int main(){
	
	int d1, c1; cin >> d1 >> c1 ;
	int d2, c2; cin >> d2 >> c2 ;
	int d3, c3; cin >> d3 >> c3 ;
	
	int sum = d1 + d2 + d3 ;

	if (d1 > d2) swap(d2, d1);
	if (d2 > d3) swap(d2, d3);
	if (d1 > d2) swap(d2, d1);

	if (d1 <= d2 - c2 * 2){
		sum -= d1 ;
	}

	else if (d2 <= d3 - c3 * 2){
		sum -= d2 ;
	}

	else if (d2 <= d1 - c1 * 2){
		sum -= d2 ;
	}

	else if (d1 <= d3 - c3 * 2){
		sum -= d1 ;
	}

	cout << sum << endl ;
	
	return 0;
}

