#include<bits/stdc++.h>

using namespace std ;

int main(){

    int a, b, c ; 
    string an, bn, cn ;
    int h[10] = {0};

    cin >> a ;
    cin >> an ;
    for (int i = 0 ; i < a ; i++){
        h[an[i] - '0']++ ;
    }

    cin >> b ;
    cin >> bn ;
    for (int i = 0 ; i < b ; i++){
        h[bn[i] - '0']++ ;
    } 

    cin >> c ; 
    cin >> cn ;
    for (int i = 0 ; i < c ; i++){
        h[cn[i] - '0']++ ;
    }

    int br = 0 ;
    string res = "";
    for (int i = 0 ; i < 10; i++){
        if (h[i] >= 3){
            res += to_string(i);
            br++ ;
        } 
    }

    cout << br << endl ;
    
    for(int i = 0 ; i < res.size(); i++){
        if (i != res.size() - 1) cout << res[i] << " ";
        else cout << res[i] ;
    }
    cout << endl ;

    return 0;
}