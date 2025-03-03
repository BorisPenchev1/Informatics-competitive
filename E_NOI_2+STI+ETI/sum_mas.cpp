#include <bits/stdc++.h>

using namespace std;

int n, a[20], t, l, r, i, b[20];

int main() {
	
	cin >> n;
	
	for (i = 1 ; i <= n ; i++){
	    cin >> a[i] ;
	    b[i] = b[i - 1] + a[i] ;
	}
	
	cin >> t ;
	
	for (i = 1 ; i <= t ; i++){
	    cin >> l >> r ;
	    cout << b[r] - b[l-1] << endl ;
	}

}

