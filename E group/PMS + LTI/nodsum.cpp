#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int n ; cin >> n ;
	
	int i = 2 ;
	int sd = -1;
	while (i * i <= n){
	    if (n % i == 0){
	        sd = i ;
	        break ;
	    }
	    i++ ;
	}
	
	if (sd == -1) sd = n ;
	
	cout << n / sd << endl ;
	
	return 0; 

}
