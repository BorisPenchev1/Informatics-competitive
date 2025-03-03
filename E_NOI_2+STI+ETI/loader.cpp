#include <bits/stdc++.h>

using namespace std;

int n, l, t, a[100001], i, br, sum = 0, brtl, brl, brt, res, p, diff;

bool fff(int p1, int p2){
    return p1 > p2 ;
}

int main() {
	
	cin >> l >> t >> n ;
	
	p = n ;
	
	for (i = 0 ; i < n ; i++){
	    cin >> a[i] ;
	}
	
	sort(a + 1, a + n + 1, fff);
	
	for (i = 1 ; i < n ; i++){
	    if (a[i] > t) brtl++;
	    if (a[i] > l and a[i] <= t) brt++;
	    if (a[i] <= l) brl++;
	}
	
    res = abs(brl - brt) + min(brt, brl) + brtl;
    
    cout << res << endl  ;
    
}

