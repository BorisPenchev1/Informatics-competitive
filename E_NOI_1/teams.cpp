#include <bits/stdc++.h>
using namespace std;

long long g, b, t, Min, Max, res ;

int main(){
    
    cin >> g >> b ;
    
    Max = max(g, b);
    Min = min(g,b);
    
    t = Max / 2 ;
    
    res = min(Min, t);

    if (g % 2 == 0 and b % 2 == 0) res = Max / Min ;
    
    cout << res << endl ;

}