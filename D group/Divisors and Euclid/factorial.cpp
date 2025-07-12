#include<bits/stdc++.h>
#define ull unsigned long long int

using namespace std;

int findFactorial(int n){
    int product = 1;
    for (int i = 1 ; i <= n ; i++){
        product *= i;
    }

    return product;
}

vector <int> findPowers(int n){
    int i = 2;
    vector <int> powers;
    while (i * i <= n){
        if (n % i == 0){
            int br = 0;
            while (n % i == 0){
                br++;
                n /= i;
            }
            powers.push_back(br);
        }
        i++;
    }

    if (n > 1) powers.push_back(1);

    return powers;
}

int main(){

    int q; cin >> q;

    int curr;
    for (int i = 1 ; i <= q ; i++){
        cin >> curr;

        ull n = findFactorial(curr);
        vector <int> pows = findPowers(n);
        int sum = 0;

        for (int i : pows) sum += i;

        cout << sum  << " ";
    }
    cout << endl;

    return 0;
}