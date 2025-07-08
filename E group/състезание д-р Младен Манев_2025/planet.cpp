#include<bits/stdc++.h>

using namespace std ;

int a, b, c, k, e, dn, mes, g = 0, mes_os ;

int main(){
	
	cin >> a >> b ;
	cin >> c ;
	
	mes = c / a ;
	dn = c % a ;
	
	int i = 4 ;
	
	int m = mes ;
	
	while (mes > 0){
		mes -= (11 - i + 1 );
		if (mes < 0){
			e++;
			break ;
		} 
		i = 1 ;
		g++;
	}

	e = m - g - 1;

	if (dn > a / 2) e++ ;
	
	cout << e << " " << g << endl ;
	
	return 0 ;
}
