#include<bits/stdc++.h>

using namespace std;

int main(){

    string n ; cin >> n ;

    string original = n;

    bool fl = false ;
    for (int i = 0 ; i < n.size() ; i++){

        if ((n[i] - '0') % 2 == 0 and !fl and n[i] != '0'){
            continue;
        } 

        if (!fl and n[i] != '0') {
            n[i]--;
            fl = true ;
        }
        else if (fl and n[i] != '0') {
            n[i] = '8';
        }
        else {
            if (n == original){
                n[i] = '8';
                n[i - 1] -= 2 ;
            }
            else {
                n[i] = '8';
            }
        }
    }

    int i = 0;
    while (n[i] == '0') n.erase(i, 1), i++;

    if (original == n){
        if ((n[n.size() - 1] - '0') % 2 == 0) n[n.size() - 1] -= 2 ;
        else n[n.size() - 1]--;
    }

    cout << n << endl ;

    return 0;
}