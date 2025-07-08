#include <bits/stdc++.h>
using namespace std;

int a, el[1001];

int main() {
	
	int n, m ; cin >> n >> m ;
	
	for (int i = 1 ; i <= m ; i++){
	    cin >> a;
	    el[a]++;
	}
	
	for (int i = 1 ; i <= n ; i++){
	    double t = 100 * el[i] ;
	    cout << fixed ;
	    cout << setprecision(2) << t / m << "%" << endl ;
	}

}
