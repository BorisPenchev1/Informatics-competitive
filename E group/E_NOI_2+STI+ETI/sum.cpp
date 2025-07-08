#include<bits/stdc++.h>

using namespace std;

int s, n, p = 0, curr_num = 0 , curr_sum = 0;

int main() {
	
	cin >> s ;
	
	while (s > curr_sum ) {
	
		curr_num += 1;
		
		curr_sum += curr_num;
		
		cout << curr_num << " " << curr_sum << endl ;
		
	}
		
	p = s - n ;
	n = s - p;
	
	cout << n << " " << p << endl ;
	
		
	
	return 0;
}
