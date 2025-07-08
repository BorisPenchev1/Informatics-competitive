#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    int br = 0;
    int Max = 0;
    int Max_s = __INT_MAX__;

    for (int k = 1; k <= n ; k++){
        br = 0;
        for (int i = 1 ; i * i <= k; i++){
            if (k % i == 0){
                br++;
                if (i != k / i){
                    br++;   
                } 
            }
        }
        
        if (br > Max){
            Max = br;
            Max_s = k;
        }
    }

    cout << Max_s << endl;
    cout << Max << endl ;

    return 0;
}