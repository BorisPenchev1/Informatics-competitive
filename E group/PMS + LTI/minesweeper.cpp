#include<bits/stdc++.h>

using namespace std;

int sq[3][3];

int main(){

    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 3 ; j++){
            cin >> sq[i][j];
        }
    }

    int br = 0;
    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 3 ; j++){

            if (sq[i][j] == 9) continue;

            if (j - 1 >= 0 && sq[i][j-1] == 9) br++ ;
            if (j + 1 < 3 && sq[i][j+1] == 9) br++ ;

            if (i - 1 >= 0 && sq[i-1][j] == 9) br++ ;
            if (i + 1 < 3 && sq[i+1][j] == 9) br++ ;

            if (i - 1 >= 0 && j - 1 >= 0 && sq[i-1][j-1] == 9) br++ ;
            if (i - 1 >= 0 && j + 1 < 3 && sq[i-1][j+1] == 9) br++ ;

            if (i + 1 < 3 && j - 1 >= 0 && sq[i+1][j-1] == 9) br++ ;
            if (i + 1 < 3 && j + 1 < 3 && sq[i+1][j+1] == 9) br++ ;

            sq[i][j] = br;

            br = 0;
        }
    }

    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 3 ; j++){
            cout << sq[i][j] << " ";
        }
        cout << endl ;
    }

    return 0;
}
