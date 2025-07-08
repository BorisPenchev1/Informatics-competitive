#include <bits/stdc++.h>

using namespace std;

int n, w, i, nums[10000001], i1 = 0, i2 = 0 , diff = n + 1;
long long sum = 0;

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	cin >> n >> w ;
	
	for (i = 0 ; i < n ; i++){
	    cin >> nums[i] ;
	}
	
	while (i2 < n){
	    
    	while (i2 < n and sum <= w){
    	    sum = sum + nums[i2];
    	    i2++;
    	}
    	
    	while (sum > w and i1 < n){
    	    diff = min(diff, i2 - i1);
    	    sum = sum - nums[i1];
    	    i1++;
    	}
	}
	
	if (diff == n + 1) cout << 0 << endl ;
	else
	   cout << diff << endl;
	   
    return 0 ;

}
