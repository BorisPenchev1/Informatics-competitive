#include <bits/stdc++.h>

using namespace std;

string to_baseK(int k, int n){
    string k_based;
    int i = 0;
    while (n > 0){
        int curr = n % k;
        k_based.push_back(curr + '0');

        n /= k;

    }

    reverse(k_based.begin(), k_based.end());

    return k_based;
}

int main() {

    int n, k; cin >> n >> k;
    
    cout << to_baseK(k, n) << endl;

    return 0;
}