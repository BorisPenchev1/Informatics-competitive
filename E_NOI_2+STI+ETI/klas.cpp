#include<bits/stdc++.h>

using namespace std ;

string s ;
int d, z, r, br_m = 0, br_mm = 0 ;

int main(){
	
	cin >> s ;
	
	d = s.size();
	
	for (int i = 0 ; i < d ; i++){
		
		if (s[i] == '+'){
			z += i + 1;
			if(i == 0) z--;
			br_mm++ ;
		}
		else{
			r += br_m ;
			z += br_mm * 2 ;
			br_m++;
		}
	}
	
	cout << r << " " << z ;
	
	return 0 ;
}



