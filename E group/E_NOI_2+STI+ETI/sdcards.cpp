#include<bits/stdc++.h>

using namespace std ;

int main(){
	
	int n; cin >> n ;

	int h, m, t = 0;
	for (int i = 1 ; i <= n ; i++){
		cin >> h >> m ;

		t += h * 60 + m ;
		
	}

	int lv = 0, st = 0 ;

	int x240 = t / 240; int x240r = t % 240;
	int x180 = t / 180;	int x180r = t % 180;

	int x240m = x240 * 10.90 + x240r * 9.15;
	int x180m = x180 * 9.15;

	if (x180r >= 1) x180m += 9.15;

	cout << min(x240m, x180m) << endl ;


	return 0;
}

