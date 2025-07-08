#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    
    int br = 0;
    int curr;
    for (int i = 1 ; i <= n ; i++){
        cin >> curr;
        if (curr == 1) br++;
    }

    int i = 1;
    if (br > 0){
        while (1){
            
            if (br > 0)n -= 2;
            else break;

            if (n == 1 or n == 0){
                cout << i << endl ;
                return 0;
            }
            i++;
        }
    }

    cout << i + (n - 1) << endl;
    

    return 0;
}