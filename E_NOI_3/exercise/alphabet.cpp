#include<bits/stdc++.h>

using namespace std ;

string alphabet = "0abcdefghijklmnopqrstuvwxyz";
int m, n ;
char curr ;

int main(){

    cin >> n >> m ;

    int j = 0, i, op, Min = INT_MAX;
    bool win_lose = false ;

    for (i = 1 ; i <= m ; i++){
        while (true){
        
            cin >> curr ;

            j++ ;

            if (curr == '.') break ;

            if (curr == alphabet[n] and j == 1){
                win_lose = true ;
                
                if (i < Min){
                    Min = i ;
                    op = i ;
                }
                
            }
        }
        j = 0 ;
    }

    if (win_lose) cout << "win" << " " << op << endl ;
    else cout << "lose" << endl ;

    return 0 ;
}