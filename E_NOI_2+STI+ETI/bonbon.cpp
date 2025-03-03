#include<bits/stdc++.h>

using namespace std ;

int N, P, s1, s2, s3, res;

int main() {
	
	cin >> N >> P;
	cin >> s1 >> s2 >> s3 ;
	
	if (P < s1){
		res = s1 - P ;
	}
	
	else
	if (P > s1 and P < s2){
		res = s2 - P;
	}
	
	else
	if (P > s2 and P < s3){
		res = s3 - P ;
	}
	
	else
	if (P > s1, s2, s3){
		res = (N - P) + s1;
	}
	
	cout << res << endl;
				
	return 0;
}
