#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, m ; cin >> n >> m;
	
	int a[10001];
	for (int i = 0 ; i < n ; i++){
	    cin >> a[i] ;
	}
	
	int l = 0, r = 0, br = 0;
	int sum = 0;
	while (r < n) {
	    sum += a[r];
	    while (sum > m) {
	        sum -= a[l];
	        l++;
	    }
	    if (sum == m) {
	        br++;
	    }
	    r++;
	}

    cout << br << endl ;

    return 0 ;
}
