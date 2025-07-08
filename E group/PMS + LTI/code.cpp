#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m ; cin >> n >> m ;

    int del = 9;
    for (int i = 1 ; i < m ; i++) del = 9 + del * 10;

    string curr ;
    int div;

    string res ;

    for (int i = 1 ; i <= n ; i++){
        cin >> curr >> div;
        string r = to_string(div % del) ;

        if (r.size() < m){ 
            r.insert(0, m - r.size(), '0');
        }

        int j = 0;
        while (j < r.size()){
            if ((r[j] - '0') % 2 == 1) {
                res.push_back(curr[j]);
            }

            j++ ;
        }
    }

    cout << res << endl ;

    return 0;
}