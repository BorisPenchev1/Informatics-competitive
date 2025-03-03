#include<bits/stdc++.h>

using namespace std ;

int kh, km, rm, th, tm1, br, nm, total_time, res_m, res_h, total_h, total_m ;  

int main(){
	
	cin >> kh >> km >> rm >> th >> tm1 >> br >> nm ; // 18 30 | 17 | 4 23 | 11 | 13
	
	total_time = rm + (th * 60 + tm1) + (br * nm) ;
	
	total_h = total_time / 60 ; // 7
	total_m = total_time % 60 ; // 3
	
	if (km < total_m){
		kh--;
		km += 60;
	}
	
	res_m = km - total_m ; // 27
	res_h = kh - total_h ; // 11
	
	cout << res_m << " " << res_h << endl ;
		  
	return 0 ;
}
