#include<bits/stdc++.h>

using namespace std ;

int n, week, day;

int main(){
	
	cin >> n ;
	
	week = n / 30 ; // 239 / 30 = 7
	day = n % 6 ;
	
	if (n < 6) day = 1 ;
	if (week < 1) week = 0;
	
	if(n % 30 == 0) week -= 1 ;
	 
    if (day == 0){
    	day = n / 6 ;
	}
	else 
	if (day > 0){
		day = day + n / 6 ;
	}
	
	if (week == 9 ) week = 10 ; 
	if (day == 6 or day == 7) day = 1 ; // no
	
	week++;
	
	if (day == 1) cout << "Week " << week << " " << "Monday" << endl ;
	else
	if (day == 2) cout << "Week " << week << " " << "Tuesday" << endl ;
	else
	if (day == 3) cout << "Week " << week << " " << "Wednesday" << endl ;
	else
	if (day == 4) cout << "Week " << week << " " << "Thursday" << endl ;
	else
	if (day == 5) cout << "Week " << week << " " << "Friday" << endl ;
	 
	
	return 0 ;
}


