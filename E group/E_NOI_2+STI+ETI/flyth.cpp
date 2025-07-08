// недовършена

#include<bits/stdc++.h>

using namespace std ;

int h1, h2, m1, m2, m3, hm1, hm2, hm4, po, obvr, res, resm, resh;

int main(){
	
	cin >> h1 >> m1 >> h2 >> m2 >> m3 ; // 6 15 20 20 45
	
	hm1 = h1 * 60 + m1 ; // 375
	hm2 = h2 * 60 + m2 ; // 1200
	hm4 = hm1 - m3 ; // 330
	
	po = abs(1020 - hm4); // 228
	
	obvr = hm1 + hm2 + po ; 
	
	res = abs(1020 - obvr); // 1701
	
	resm = res % 60 ; // 21
	resh = (res - resm) / 60 ; // 28
	
	if (resh > 24 or resm > 60){ // true
		while (resh > 24 or resm > 60){
			if (resh > 24){ // true
				resh = resh - 24 ; // 4
			}
			if (resm > 60){ // false
				resm = resm - 60 ;
				resh += 1 ;
			}
		}
	}	
	
	// resh = 4 ; resm = 21
	
	// 4:21
	cout << resm << ":" << resh << endl ;
	
	return 0 ;
}

// h1 часа и m1 минути полет
// престой - h2 часа и m2 минути
// обратният полет е по-кратък с m3 минути 
// изведи момента на тръгване към баба й


