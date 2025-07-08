#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 2;

int a[MAXN];

int f_gcd(int l, int r) {
	int curr = a[l];
	for(int i = l; i < r; i ++){
		curr = __gcd(curr, a[i + 1]);
	}
	return curr;
}

int f_gcpd(int n){

    if(n == 1) return 1;

	int d = 2;

	while(n > 1){
		if(n % d == 0) n /= d;
		else d ++;
	}

	return d;
}

int main(){

    int n, k; cin >> n >> k;

    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    int gcd;
    int gcpd;
    int Max = 1;
    for (int i = 0; i < n - k + 1; i++){
        gcd = f_gcd(i, i + k - 1);
        gcpd = f_gcpd(gcd);
        Max = max(Max, gcpd);
    }

    cout << Max << endl;

    return 0;
}