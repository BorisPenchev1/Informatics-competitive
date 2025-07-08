#include <bits/stdc++.h>

using namespace std ;

int Min, Max, i , n, brmin = 1, brmax ;
int a[111];

int main() {
	
	srand(time(NULL));
	
	n = 10 ;
	
	for (i = 1 ; i <= n ; i++) {
		a[i] = rand()%10+1;
	}
	for (i = 1 ; i <= n ; i++) {
		cout << a[i] << " ";		
	}
	cout << endl;
// ===================================	
	Min=2222;
	for (i = 1 ; i <= n ; i++) {
		if (Min > a[i]){
			Min = a[i];
			brmin = i;
		}		
		if (Max < a[i]){
			Max = a[i];
			brmax = i;
		}		
	}
	cout << Min << " " << brmin << endl;
	cout << Max << " " << brmax << endl;
	
	return 0;
}
