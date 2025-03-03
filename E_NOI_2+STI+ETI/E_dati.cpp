#include<bits/stdc++.h>

using namespace std ;

int d, m, g, nd, nm, ng ;

int main(){
	
	cin >> d >> m >> g ;
	
	if (d == 31 and m != 12){
		d = 1 ;
		m++ ;
	}
	
	if (d == 30 and m % 2 == 0 and m != 12){
		  d = 1 ;
		  m++ ;
	}
	
	if (d == 31 and m % 2 == 0 and m != 12){
		  d = 1 ;
		  m++ ;
	}
	
	if (d != 31 and m % 2 == 0 and d != 30 and m != 8){
		d++ ;
	}
	
	if(m % 2 == 0 and d == 30 and m != 8) {
		d = 1 ;
	}
	
	 if(d == 31 and m == 12){
	 	d = 1;
		m = 1;
		g++;
    }
	
	cout << d << " " << m << " " << g << endl ;
	
	return 0 ;
}
