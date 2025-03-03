#include<bits/stdc++.h>

using namespace std ;

int n, ch, Min, lv, st, i, sum_ch = 0, sum_min = 0, prod ;

int main(){
	
	cin >> n ;
	
	for (i = 1 ; i <= n ; i++){
		cin >> ch >> Min ;
		
		sum_ch = sum_ch + ch ;
		sum_min = sum_min + Min ;
		
	}
	
	while (sum_min > 60){
		sum_ch++ ;
		sum_min = sum_min - 60 ;
	}
		
	prod = sum_ch * 60 + sum_min ;
	
	if (prod <= 180){
		lv = lv + 9 ;
		st = st + 15 ;
	}
	else
	if (prod > 180 and prod <= 240){
		lv = lv + 10 ;
		st = st + 90 ;
	}
	else
	if (prod > 240 and prod - 240 < 180 ){
		lv = lv + 2 * 9 ;
		st = st + 2 * 15 ;
	}
	else
	if (prod > 240 and prod - 240 > 180 and prod - 240 < 240){
		lv = lv + 2 * 9 ;
		st = st + 2 * 15 ;
	}
	else
	if (prod > 240 and prod - 240 > 180 and prod - 240 > 240){
		lv = lv + 2 * 10 ;
		st = st + 2 * 90 ;
	}
	
	while (st > 100){
		lv++ ;
		st =st - 100 ;
	}
	
	cout << lv << "." << st << endl ;
	
	
	return 0;
}
