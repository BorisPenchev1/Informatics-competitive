#include<bits/stdc++.h>

using namespace std;

const int MAXNM = 2000;

int a[MAXNM][MAXNM];

int main(){

    int n, m; cin >> n >> m;

    bool fli = true;
    bool fld = true;

    int bri = 0;
    int brd = 0;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> a[i][j];

            if (j > 1){
                if (a[i][j] > a[i][j - 1] and fli == true) fli = true;
                else fli = false;

                if (a[i][j] < a[i][j - 1] and fld == true) fld = true;
                else fld = false;
            }
        }
        if (fli == true) bri++;
        if (fld == true) brd++;

        fli = true;
        fld = true;
    }

    cout << bri << " " << brd << endl;

    return 0;
}