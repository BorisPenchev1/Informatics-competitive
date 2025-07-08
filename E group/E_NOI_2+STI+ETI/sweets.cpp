#include<bits/stdc++.h>

using namespace std ;

int e, k, br_2_e, br_1_e, br_2_k, br_1_k , br_boxes_2k,br_boxes_2e, sum ;

int main(){
	
	cin >> k >> e ;
	
	br_2_e = e / 2 ;
	br_1_e = e % 2 ;
	
	br_2_k = k / 2 
	br_1_k = k % 2 ;
	
	if (k + e % 3 != 0){
		cout << "-1" << endl; 
	}
	else
	if (k + e % 3 == 0){
		if (k <= (2 * e) and e <= (2 * k)) {
		   	br_boxes_2k = br_1_e ;
			br_boxes_2e = br_1_k ;
            cout << br_boxes_2k << " " << br_boxes_2e << endl ;
		}
		else{
			cout << "-1" << endl ;
		}
	}
	

	return 0;
}
