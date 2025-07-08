#include<bits/stdc++.h>

using namespace std ;

int mes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, d, g, pd, m, i;
bool fl = false ;

int main(){
	
	cin >> d >> m >> g ;
	
	if (g % 4 == 0){
		fl = true ;
		if (g % 100 == 0){
			fl = false ;
			if (g % 400 == 0){
				fl = true ;
			}
		}
	}
	else{
		fl = false ;
	}
	
	pd = mes[m];
	
	if (m == 2 and fl == true){
		pd = 29 ;
	}
    
    if (d == pd and m != 12){
    	d = 1 ;
    	m++ ;
	}
	else
	if(d != pd){
		d++;
	}
	
	if (d == 31 and m == 12){
		d = 1;
		m = 1;
		g++;
	}
	
	if (d < 10){
		 cout << 0 << d << " " ;
	}
	else {
		cout << d << " ";
	}
	if (m < 10){
		 cout << 0 << m << " ";
	}
	else{
		cout << m << " ";
	}
	if (g < 1000 and g >= 100) {
		cout << " " << 0 << g ;
	}
	else
	if (g < 100 and g >= 10){
		cout << " " << "00" << g ;
	} 
	else
	if (g < 10) {
		cout << " " << "000" << g ;
	}
	else{
		cout << g << endl ;
	}
	
	
    
	return 0 ;
}
