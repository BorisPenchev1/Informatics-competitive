#include<bits/stdc++.h>

using namespace std ;

int god ;
bool fl = false ;

int main(){
	
	cin >> god ;
	
	if (god % 4 == 0){
		fl = true ;
		if (god % 100 == 0){
			fl = false ;
			if (god % 400 == 0){
				fl = true ;
			}
		}
	}
	else{
		fl = false ;
	}
	
	if (fl == true) cout << "YES" << endl ;
	else
	if(fl == false){
		cout << "NO" << endl ;
	}
	
	
    
	return 0 ;
}
