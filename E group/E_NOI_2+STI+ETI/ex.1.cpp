#include <bits/stdc++.h>

using namespace std ;

int Min, Max, i , n ;
int a[111];

int main() {
	
	srand(time(NULL));
	
	n = 10 ;
	
	for (i = 1 ; i <= n ; i++) {
		a[i] = rand()%10+1;
		Min = max(Min, a[i]);
		Max = max(Max, a[i]);
	}
	cout << n << endl;
	for (i = 1 ; i <= n ; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	
	for (i = 1 ; i <= n ; i++) {
		Min = min(Min, a[i]);
		Max = max(Max, a[i]);
	}
	cout << Min << " " << Max << endl;
	
	return 0;
}
