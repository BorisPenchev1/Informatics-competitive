#include<bits/stdc++.h>

using namespace std;

int palindrome(int n){
    string num = to_string(n);
    reverse(num.begin(), num.end());

    if (num[0] == '0') return -1;

    return stoi(num);
}

int main(){

    int n, d; cin >> n >> d;

    int Min = 1, Max;
    for (int i = 1 ; i <= n ; i++){
        Min *= 10 ;
    }

    Max = Min - 1;
    Min /= 10;

    Min -= Min % d;
    Min += d;

    Max -= Max % d;

    // cout << Min << " " << Max << endl ;

    int br = 0;
    for (int i = Min ; i <= Max ; i += d){
        if (palindrome(i) % d == 0 and palindrome(i) != i and palindrome(i) != -1){
            // cout << i << endl ;
            br++ ;
        } 
    }

    cout << br / 2 << endl ;

    return 0;
}