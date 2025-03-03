#include<bits/stdc++.h>

using namespace std ;

string alphabet = "0abcdefghijklmnopqrstuvwxyz" ;
int n, Min = INT_MAX, sum ;
string curr, Mins ;

int main(){

    cin >> n ;

    for (int i = 1 ; i <= n ; i++){
        cin >> curr ;
        for (int j = 0 ; j < curr.size() ; j++){
            sum += alphabet.find(curr[j]);
        }
        if (sum < Min){
            Min = sum ;
            Mins = curr ;
        }
        sum = 0 ;
    }

    cout << Mins << " " << Min << endl ;

    return 0 ;
}