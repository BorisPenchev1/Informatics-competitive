#include<bits/stdc++.h>

using namespace std ;

const int MAXN = 2e4 + 2 ;

struct people{
    int in, out, nat ;
};

people a[MAXN] ;

int main(){

    int n ; cin >> n ;

    for (int i = 0 ; i < n ;i++){
        cin >> a[i].in >> a[i].out >> a[i].nat ;
    }

    int br = 1, Max = 0;
    for (int i = 0 ; i < n ;i++){
        int j = i + 1 ;
        while (a[i].out >= a[j].in and j < n){
            if (a[i].nat == a[j].nat) br++;
            j++ ;
        }

        if (br > Max){
            Max = br ; 
        }

        br = 1 ;
    }

    cout << Max << endl ;

    return 0 ;

}