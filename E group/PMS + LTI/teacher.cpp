#include<bits/stdc++.h>

using namespace std ;

const int MAXN = 10e5 + 2 ;

struct desks{
    int l, r ;
};

desks d[MAXN] ;

int mian(){

    int n ; cin >> n ;

    int br = 0, grade ;
    int MaxBr = 0, MaxGrade = 0 ;
    for (int i = 1 ; i <= n ; i++){
        cin >> d[i].l >> d[i].r ;
        if (d[i].l == d[i - 1].l or d[i].l == d[i - 1].r){
            br++ ;
            grade = d[i].l ;
        }   
        else if (d[i].r == d[i - 1].l or d[i].l == d[i - 1].r){
            br++ ;
            grade = d[i].l ;
        }

        if (br > MaxBr){
            MaxBr = br ;
            MaxGrade = grade ;
        }
    }

    cout << MaxBr << " " << MaxGrade << endl ;

    return 0;
}