#include<bits/stdc++.h>

using namespace std ;

int a, b, c, d, ab, cd, ac, bd, ad, bc, abc, abd, cbd, diff1, diff2, diff3, diff4, diff5, diff6, Min;  

int main(){
	
	cin >> a >> b >> c >> d;
	
	ab = a + b;
	cd = c + d;
	diff1 = abs(ab - cd);
	
	ac = a + c;
	bd = b + d;
	diff2 = abs(ac - bd);
	
	ad = a + d;
	bc = c + b;
	diff3 = abs(ad - bc);
	
	abc = a + b + c;
	diff4 = abs(abc - d);
	
	abd = a + b + d;
	diff5 = abs(abd - c);
	
	cbd = c + b + d;
	diff6 = abs(cbd - a);
	
	Min = min(diff1, diff2);
	Min = min(Min, diff3);
	Min = min(Min, diff4);
	Min = min(Min, diff5);
	Min = min(Min, diff6);
	
	if (Min == diff1){
		cout << diff1 << endl ;
	}
	else
	if (Min == diff2){
		cout << diff2 << endl ;
	}
	else
	if (Min == diff3){
		cout << diff3 << endl ;
	}
	else
	if (Min == diff6){
		cout << diff6 << endl ;
	}
	else
	if (Min == diff4){
		cout << diff4 << endl ;
	}
	else
	if (Min == diff5){
		cout << diff5 << endl ;
	}
		  
	return 0 ;
}
