#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 2;

int a[MAXN];
int prefix[MAXN];

int main(){

    int n;
    cin >> n;

    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];
    }

    // for (int i = 0 ; i < n ; i++) cout << prefix[i] << " ";
    // cout << endl;

    for (int i = 0 ; i < n ; i++){
        if (prefix[i] == prefix[n - 1] - prefix[i]){
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << "-1" << endl;

    return 0;
}