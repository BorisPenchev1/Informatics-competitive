#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    string s;
    string num = "";
    int k = 4;
    bool fl = false;
    for (int i = 1 ; i <= k ; i++){
        cin >> s[i];

        while (s[i] >= '0' and s[i] <= '9' and i <= 4){
            num += s[i]; i++;
            if (i < 4) cin >> s[i];
            fl = true;
        }

        if (num != "") cout << stoi(num) * n << endl ;

        num = "";

        // if (i == 4) break;
    }

    if (!fl) cout << "N/A" << endl ;

    return 0;
}