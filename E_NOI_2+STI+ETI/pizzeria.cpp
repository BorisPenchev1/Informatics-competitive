#include<bits/stdc++.h>

using namespace std ;

int total_price, n, l, s, price , i, total_s, total_l;

int main(){
	
	cin >> n >> l >> s ; // 4 8 50 | 3 6 50
	
	total_price = 0;
	
	for (i = 1 ; i <= n ; i++){
		
		price = l*100 + s ; // 850
		
		if (i == 1){
			total_price += price ; // 850
		}
		
		cout << total_price << endl ;
		
		if (i % 4 == 0 and price < 899){
			total_price += price ;
		}
		
		if (total_price > 3000 and price < 899 ){
			total_price -= 899 ;
			cout << total_price << endl ;
		}
		
		
		if(i % 3 == 0 and price < 899){
			price -= 450 ;
		}
		
		
		if(i % 4 == 0 and price > 899){
			price = 0 ;
		}
		
		
		if (i > 1 and i % 4 != 0 and price < 899){
			total_price += price ;
			cout << "a" << endl ;
		}
	}
	
	if (total_price < 2000){
		total_price = 2000;
	}
	
	total_s = total_price % 100 ;
	total_l = (total_price - total_s) / 100 ;
	
	if (total_s < 10){
		cout << total_l << ".0" << total_s << endl ;
	}	
	else{
		cout << total_l << "." << total_s << endl ;
	}
	
	return 0 ;
}
