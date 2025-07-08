#include<bits/stdc++.h>

using namespace std ;

int from, to, code, lv, st, total_st, br, T1, T2, T3, T4 ;

int main(){
	
	cin >> from >> to >> code;
	cin >> lv >> st >> br ;
	cin >> T1 >> T2 >> T3 >> T4 ;
	
	total_st = (lv * 100 + st) * br ;
	
	if (code == 1){
		total_st = total_st + 998 ;
	} 
	
	if (from == to){
		lv = total_st / 100 ;
		st = total_st % 100 ;
		cout << lv << " " << st << endl ;
	}
	
	if (from == 1 and to == 2){
		total_st += T1 ;
	}
	if (from == 2 and to == 1){
		total_st += T2 + T3 + T4;
	}
	
	if (from == 1 and to == 3){
		total_st += T1 + T2;
	}
	if (from == 3 and to == 1){
		total_st += T3 + T4;
	}
	
	if (from == 1 and to == 4){
		total_st += T1 + T2 + T3 ;
	}
	if (from == 4 and to == 1){
		total_st += T4 ;
	}
	
	if (from == 2 and to == 3){
		total_st += T2 ;
	}
	if (from == 3 and to == 2){
		total_st += T3 + T4 + T1 ;
	}
	
	if (from == 2 and to == 4){
		total_st += T2 + T3 ;
	}
	if (from == 4 and to == 2){
		total_st += T4 + T1 ;
	}
	
	if (from == 3 and to == 4){
		total_st += T3 ;
	}
	if (from == 4 and to == 3){
		total_st += T4 + T1 + T2;
	}
	
	if (from != to){
		lv = total_st / 100 ;
		st = total_st % 100 ;
		cout << lv << " " << st << endl ;
	}
	
	return 0;
}
