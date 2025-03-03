#include <bits/stdc++.h>

using namespace std ;

int Min, Max, i , n, brmax = 0;
int a[111];

int main() {
	
	srand(time(NULL));
	
	n = 10 ;
	cout << n << endl;
	for (i = 1 ; i <= n ; i++) {
		a[i] = rand()%5+1;
	}
	for (i = 1 ; i <= n ; i++) {
		cout << a[i] << " ";		
	}
	cout << endl;
// ===================================	
	for (i = 1 ; i <= n ; i ++){
		if (Max < a[i]){
			Max = a[i];
			brmax=1;
		}
		else
		if (Max == a[i]){
			brmax++;
		} 
	}
	
	
	cout << Max << " " << brmax << endl;
	
	return 0;
}
