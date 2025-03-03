#include<bits/stdc++.h>

using namespace std ;

int n, i = 1, a[1001], da = 0;

int main(){
	
	cin >> n ;
	
	while(i * i < n){
		if(n % i == 0){
			da++; a[da] = i ;
			da++; a[da] = n / i ;
		}
		i++;
	}
	if(i * i == n){
		da++;
		a[da] = i ;
	}
	sort(a + 1, a + da + 1);
	for (i = 1 ; i <= da ; i++){
		cout << a[i] << " " << endl;
	}
	cout << endl ;

	
	return 0 ;
}



