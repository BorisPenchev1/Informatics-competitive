#include<bits/stdc++.h>

using namespace std;

int fromAto10(int a, int n){
    int res = 0;
    int i = 0;
    while (n > 0){
        int curr;
        curr = n % 10;
        n /= 10;

        res += curr * pow(a, i);

        i++;
    }

    return res;
}

string solve(int a, int b, int n_in_A){
    
    int res = 0;
    int i = 0;

    int n = fromAto10(a, n_in_A);

    string b_based;
    while (n > 0){
        int curr = n % b;
        b_based.push_back(curr + '0');

        n /= b;

    }

    reverse(b_based.begin(), b_based.end());

    return b_based;

}

int main(){

    int a, b, n;
    cin >> n >> a;
    cin >> b;

    cout << solve(a, b, n) << endl;

    return 0;
}