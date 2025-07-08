#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int MAXN = 1e9;
ll n;

int afterDecimal(){
    ll m = n;
    ll cnt2 = 0, cnt5 = 0;
    while (m % 2 == 0){
        m /= 2;
        cnt2++;
    }

    while (m % 5 == 0){
        m /= 5;
        cnt5++;
    }

    if (m == 1)
        return max(cnt2, cnt5);
    else return -1;
}

int main(){

    cin >> n;

    if (afterDecimal() == -1){
        cout << "NO" << endl;
        return 0;
    }
    else {
        cout << afterDecimal() << endl;
        return 0;
    }

    return 0;
}