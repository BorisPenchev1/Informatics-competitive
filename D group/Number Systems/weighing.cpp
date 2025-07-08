#include<bits/stdc++.h>

using namespace std;

int main(){

    char pos; cin >> pos;
    int n; cin >> n;

    string base3;
    string sum_base3;

    int r;
    while (true){
        r = n % 3;
        base3.push_back(r + '0');
        n /= 3;
    }



    return 0;
}