#include<bits/stdc++.h>

using namespace std;

int main(){

    string a, b ; cin >> a >> b ;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int br = 1 ;
    for (int i = 0 ; i < a.size() ; i++){
        if (a[i] == b[i]){
            if ((a[i] >= '0' and b[i] <= '0') or (a[i] == '?' and (b[i] >= '0' and b[i] <= '0')) or (b[i] == '?' and (b[i] >= '0' and a[i] <= '0'))){
                br++ ;
            }
            br *= 4 ;
        }
        else {
            br = 0;            
            
        }
    }

    cout << br << endl ;

    return 0;
}