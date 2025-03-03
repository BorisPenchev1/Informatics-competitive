#include<bits/stdc++.h>

using namespace std ;

int d1, d2, d3, c1, c2, c3, res ;
bool fl1 = false, fl2 = false, fl3 = false;

int main(){
	
	cin >> d1 >> c1 ;
	cin >> d2 >> c2 ;
	cin >> d3 >> c3 ;
	
	res = d1 + d2 + d3 ;
	
	if (d1 <= d2 - c2 * 2){
	   res -= d1 ;
	   fl1 = true ;
	}
	if(d1 <= d3 - c3 * 2){
		res -= d1 ;
		fl1 = true ;
	}
	
	if (d2 <= d1 - c1 * 2 and fl1 == f){
		res -= d2 ;
		fl2 = true ;
	}
	if (d2 <= d3 - c3 * 2){
		res -= d2 ;
		fl2 = true ;
	}
	
	
	return 0;
}
