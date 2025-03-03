#include<bits/stdc++.h>

using namespace std ;

int x, y, z, t, ma, mb, m  ;

int main(){
	
	cin >> x >> y ; // 5 4
	cin >> z >> t ; // 6 2
	cin >> m ; // 10
	
	cout << "Hello " << endl ;
	
	ma = (m / x - 1) * y + m ; 
	mb = (m / z - 1) * t + m ; 
	
	if (ma < mb) cout << "A " << ma << endl ;
	if (ma > mb) cout << "B " << mb << endl ;
	if (ma == mb) cout << "AB " << ma << endl ;
    
	return 0 ;
}
