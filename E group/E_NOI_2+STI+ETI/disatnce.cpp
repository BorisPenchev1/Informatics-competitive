#include<bits/stdc++.h>

using namespace std ;

int k1, k2, k3, m1, m2, m3, c1, c2, c3, res, resm, resk, resc, kmc1, kmc2, kmc3, j ;

int main(){
	
	cin >> k1 >> m1 >> c1 >> k2 >> m2 >> c2 >> k3 >> m3 >> c3 ;
	
	kmc1 = k1 * 100000 + m1 * 1000 + c1 ;
	kmc2 = k2 * 100000 + m2 * 1000 + c2 ;
	kmc3 = k3 * 100000 + m3 * 1000 + c3 ;
	
	res = max(kmc2 + kmc1, kmc3 + kmc1) ;
	
	if (res == kmc2 + kmc1){
		resk = res / 100000 ;
		resm = res - (100000 * resk) / 1000 ;
		resc = res - (100000 * resk + 1000 * resm) ;
	}
	if(res == kmc3 + kmc1){
		resk = res / 100000 ;
		resm = res - (100000 * resk) / 1000 ;
		resc = res - (100000 * resk + 1000 * resm) ;
	} 
	
	cout << resk << " " << resm << " " << resc << endl ;
	
	return 0 ;
}
