#include<bits/stdc++.h>

using namespace std ;

int L, R, K, i, br = 0, n, j;

int main() {
	
	cin >> n ;
	
	for (i = 1; i <= n; i++){
		br = 0 ;
		cin >> L >> R >> K ;
		for (j = L ; j <= R ; j++){
			if (j % K == 0) {
				br++ ;
			}
		}
		cout << br << endl;
	}
				
	return 0;
}
