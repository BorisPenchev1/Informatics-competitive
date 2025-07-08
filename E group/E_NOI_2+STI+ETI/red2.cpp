#include <bits/stdc++.h>

using namespace std;

int br, d, i, Max,bri ;
string s ;

int main() {
	
	cin >> s ;
	
	d = s.size();
	
	for (i = 0 ; i < d ; i++){
	    if (s[i] == '0') br-- ;
	    else
	        br++;
	    if (br > Max){
	        Max = br ; 
	        bri = 1 ;
	    } 
	    else
	    if (Max == br) bri++;
	}
	
	cout << Max << " " << bri << endl ;

}

