#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1000 ;

int a[MAXN];
int prefix[MAXN];

int main(){

    int n ; cin >> n ; 
    for (int i = 0 ; i < n ; i++) cin >> a[i] ;

    prefix[0] = a[0];
    for (int i = 1 ; i < n ; i++) prefix[i] = a[i] + prefix[i - 1];

    int br, Min = INT_MAX, area = 0 ;
    for (int i = 0 ; prefix[i] <= prefix[n - 1] / 2 ; i++){
        br = 1 ;
        area = i ;
        for (int j = i + 1; j < n ; j++){
            if (prefix[j] % prefix[i] == 0 and prefix[j] / prefix[i] == br + 1) {
                br++;
                area = j;
            }
        }
        if (br < Min and br > 1 and area == n - 1) Min = br ;
    }

    if (Min != INT_MAX) cout << Min << endl ;
    else cout << 0 << endl ;

    return 0;
}