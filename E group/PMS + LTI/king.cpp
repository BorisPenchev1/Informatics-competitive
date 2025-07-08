#include<bits/stdc++.h>

using namespace std;

struct Element{
    int s, l, r;    
};
Element a[200001];

int main(){

    int n, k ; cin >> n >> k ;

    int i;
    for (i = 2 ; i <= n - 1 ; i++){
        a[i].s = i ;
        a[i].r = i + 1 ;
        a[i].l = i - 1 ;
    }

    a[1].l = n;
    a[1].r = 2; a[1].s = 1; 
    a[n].l = n - 1; 
    a[n].r = 1; 
    a[n].s = n;

    int res, n1 = 0, j, ll, rr;

    i = 1;
    j = a[i].s;

    while (1){
        i++; 
        j = a[j].r;

        if (i == k){
            ll = a[j].l;
            rr = a[j].r;
            a[ll].r = rr ;
            a[rr].l = ll ;

            i = 0;
            n1++ ;
        }

        if (n1 == n){
            res = j;
            break;
        }
    }

    cout << res << endl ;

    return 0;
}
/*
8 3


*/