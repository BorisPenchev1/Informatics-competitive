#include<bits/stdc++.h>
#define ll long long

using namespace std ;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t ;
    cin >> t ;
    
    for (int i = 1 ; i <= t ; i++){
    	ll n ;
    	cin >> n ;
    	
    	int w = sqrt(n) ;	
    	int h = n / w ;
    	
    	int res = w * (h + 1) + h * (w + 1) ;
    	int ost = n - (w * h) ;
    	
    	if (ost > 0) res += ost * 2 + 1 ;
    	
    	cout << res << '\n' ;
	}

    return 0 ;
}