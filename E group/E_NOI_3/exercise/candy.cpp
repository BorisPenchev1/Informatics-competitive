#include <iostream>

using namespace std;

int a[100000], t[10001];


int sum (int k){
    int s = 0;
    for (int i = 0; i <= k; i++) s += t[i];
    return s;
}

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) cin >> a[i];

    int Max = 0, candy;
    for (int i = n - 1; i >= 0; i--){
        int p = sum(a[i]);
        if (p > 0) candy = p + a[i];
        else candy = 0;

        if (candy > Max){
            Max = candy;
        }

        t[a[i]]++;

    }

    if (Max == 0) cout << n << endl;
    else cout << Max << endl;

    return 0;
}