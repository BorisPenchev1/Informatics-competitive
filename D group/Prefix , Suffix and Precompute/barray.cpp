#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 2;

int prefix[MAXN];

int main(){

    int n;
    cin >> n;

    for (int i = 1 ; i <= n ; i++){
        cin >> prefix[i];
        prefix[i] = prefix[i - 1] + prefix[i];
    }

    // for (int i = 0 ; i < n ; i++) cout << prefix[i] << " ";
    // cout << endl;

    for (int i = 1 ; i <= n ; i++){
        if (prefix[i] == prefix[n] - prefix[i - 1]){
            cout << i << endl;
            return 0;
        }
    }

    cout << "0" << endl;

    return 0;
}