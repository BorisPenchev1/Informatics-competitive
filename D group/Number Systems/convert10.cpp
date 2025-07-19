#include<bits/stdc++.h>

using namespace std;

int k_10(int k, int n){
    int res = 0;
    int i = 0;
    while (n > 0){
        int curr;
        curr = n % 10;
        n /= 10;

        res += curr * pow(k, i);

        //cout << curr << " " << res << endl;

        i++;
    }

    return res;
}

int main(){

    int n, k; cin >> n >> k;

    cout << k_10(k, n) << endl;

    return 0;
}