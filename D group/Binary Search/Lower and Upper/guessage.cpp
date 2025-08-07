#include<bits/stdc++.h>

using namespace std;

bool check(int k){
    cout << "Are you at least " << k << " years old: ";

    string ans;
    cin >> ans;

    if (ans == "Yes") return 1;
    else if (ans == "No") return 0;
    else exit(0);
}

int main(){

    int l = -1;

    int r = 101;

    int m;

    while (l < r - 1){
        m = (r + l) / 2;

        if (check(m) == 1){
            l = m;
        }
        else r = m;
    }

}