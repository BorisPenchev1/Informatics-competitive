#include<bits/stdc++.h>

using namespace std;

int main(){

    int l, n; cin >> l >> n;

    int Max = 0;
    int br = 0;
    int curr;
    int res = 0;
    bool fl = false;
    bool fl1 = false;
    for (int i = 1 ; i <= n ; i++){
        cin >> curr;
        if (curr >= Max){
            Max = curr;
            br = 0;
            fl1 = false;
        }    
        else br++;

        if (br >= l and fl1 == false) {
            cout << i - br << endl ;
            fl = true;
            fl1 = true;
        }
    }

    if (fl == false) cout << "NO" << endl ;

    return 0;
}