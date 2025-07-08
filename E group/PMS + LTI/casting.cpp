#include<bits/stdc++.h>

using namespace std;

int main(){

    int m; cin >> m ;
    int n, a, b, c; cin >> n >> a >> b >> c ;

    int Max = 0, Min = INT_MAX, Mid = 0, res = 0;
    if (m == 1){
        Max = max(a, b);
        Max = max(Max, c);

        Min = min(a, b);
        Min = min(Min, c);

        if (Max == a and Min == b) Mid = c ;
        else if (Max == b and Min == c) Mid = a ;
        else Mid = b ;

        res = Min - (Max - Mid);
    }
    else {
        Min = min(a, b);
        Min = min(Min, c);

        res = Min ;
    }

    cout << res << endl ;

    return 0;
}

/*
1
min = 4 - b - blue eyes
max = 11 - a - tall
mid = 6 - c - blonde
*/