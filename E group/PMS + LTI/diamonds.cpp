#include<bits/stdc++.h>

using namespace std ;

int main(){

    int v[101], d[101], i = 1 ;
    while (1){
        cin >> v[i] >> d[i] ;
        if (v[i] == 0 and d[i] == 0) break; // Fixed condition to compare array elements
        i++ ;
    }

    int diffd[100];
    int t = 1; 
    while (t <= i - 1) {
        diffd[t] = d[t] - d[t - 1];
        t++;
    }

    int Maxdiff = 0;
    int Maxdiffd = 0; 

    for (int j = 1 ; j <= i - 1 ; j++){
        for (int k = j ; k <= i - 1 ; k++){
            int diff = abs(v[k] - v[k + 1]);
            if (diff < Maxdiff){
                Maxdiff = diff;
                Maxdiffd = diffd[k];
            }
            if (diff == Maxdiff){
                if (diffd[k] < Maxdiffd){ 
                    Maxdiffd = diffd[k];
                }
            }
        }
    }

    cout << Maxdiff << " " << Maxdiffd << endl ;

    return 0 ;
}