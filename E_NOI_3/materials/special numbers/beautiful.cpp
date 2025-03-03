#include <bits/stdc++.h>

using namespace std;
 
    int main(){
	
	long long n;
	int ans = 0;  

	cin >> n; 
 	
	for (int d = 1; d <= 9; d++) {
		long long cur = d; 
		while (cur <= n) {
			ans++; 
			cur = cur * 10 + d; 
        } 
	} 
	
	cout << ans << endl;
	
 return 0;
}