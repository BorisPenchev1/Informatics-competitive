#include<bits/stdc++.h>

using namespace std ;

int br = 1, st, n, curr, previous = 0, Max_br = 0, Max_st = 0;

int main(){

    cin >> n ;

    for (int i = 1 ; i <= n ; i++){
        cin >> curr ;
        if (curr == previous){
            br++;
            st = curr ;
        }
        else br = 1 ;
        
        if (br > Max_br){
            Max_br = br ;
            Max_st = st ;
        }
        previous = curr ;
    }

    cout << Max_br << " " << st << endl ;

    return 0;
}