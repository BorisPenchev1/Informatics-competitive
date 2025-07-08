#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 2;

int a[MAXN];

int main(){

    int n; cin >> n;

    int brv = 0, brd = 0, brp = 0;
    bool fl = false, fl1 = false;

    for (int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }

    for (int i = 1 ; i <= n ; i++){

        // if (fl == true){
        //     if (curr == previ and curr < next){
                
        //         brd++;
        //     } 
        //     fl = false;
        // }

        // else if (fl1 == true){
        //     if (curr == previ and curr > next){
                
        //         brp++;
        //     } 
        //     fl = false;
        // }

        if (a[i] > a[i-1] and a[i] > a[i+1]) brv++;
        if (a[i] > a[i-1] and a[i] > a[i+1]) brv++;
        else if (a[i] < a[i-1] and a[i] < a[i+1]) brd++;
        else {
            if (a[i] > a[i-1] and a[i+1] == a[i]){
                fl1 = true;
            } 
            else if (a[i] < a[i-1] and a[i+1] == a[i]){
                fl = true;
            } 
        }
    }

    cout << brv << " " << brd << " " << brp << endl ; 

    return 0;
}