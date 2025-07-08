#include<bits/stdc++.h>

using namespace std;

int Divisors(int n){
    int br = 0;
    for (int i = 1 ; i <= n ; i++){
        if (n % i == 0) br++;
    }
    return br;
}

int main(){

    int n; cin >> n;

    int divs = Divisors(n);

    if (divs == 2){
        cout << 1 << endl;
        return 0;
    }

    int two = divs / 2;
    int three = divs / (divs / 2);
    int one = 1;

    if (divs % 2 == 1) one++;

    cout << one + two + three << endl ;

    return 0;
}