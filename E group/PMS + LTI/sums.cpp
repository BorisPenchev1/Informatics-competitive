#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
	
    long long n, l, step; 
    cin >> n >> l >> step;

    long long sum = l, diff;
    long long step1 = step ;
    long long sum1 = l;
	    
    for (int i = 1; i < n; i++) {
        sum = (sum1 * 2 % MOD + step1) % MOD;
        sum1 = sum ;
        step1 = (step1 * 2) % MOD;
    }

    cout << sum << endl;
}
