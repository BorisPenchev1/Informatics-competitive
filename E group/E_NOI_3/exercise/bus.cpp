#include<bits/stdc++.h>

using namespace std ;

int n, m, a[100001], b[100001], br_p, br_s;

int main(){

    cin >> n >> m ;

    int c[n] = {0};
    int d[n] = {0};

    int i ;
    for (i = 0 ; i < m ; i++){
        cin >> a[i] >> b[i] ;
        c[a[i]]++ ;
        d[b[i]]++ ;
    }

    for (i = 0 ; i < n ; i++){
        cout << c[i] << " ";
    }

    cout << endl ;

    for (i = 0 ; i < n ; i++){
        cout << d[i] << " ";
    }

    cout << endl ;

    for (i = 0 ; i < n ; i++){
        if (c[i] > d[i]) br_p += c[i] - d[i];
        else br_s += d[i] - c[i];    
    }

    cout << br_p / 2 << " " << br_s / 2<< endl ;

    return 0 ;
}

// ne e gotovo