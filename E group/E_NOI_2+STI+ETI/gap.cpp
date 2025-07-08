#include <bits/stdc++.h>

using namespace std;

int n, diff, nums[100001], prev_diff = 100001, Max_diff;

int main() {
	
	cin >> n ;
	
	for (int i = 0 ; i < n ; i++){
	    cin >> nums[i] ;
	}
	
	sort(nums, nums + n) ;
	
	for (int i = n - 1; i > 0 ; i--){
	    
        diff = nums[i] - nums[i - 1] ;
        
        Max_diff = max(diff, Max_diff);
	}
	
	cout << Max_diff << endl ;

}

