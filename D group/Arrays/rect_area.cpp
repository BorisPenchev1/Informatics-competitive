#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2002;

int a[MAXN][MAXN];
int b[MAXN][MAXN];

int main(){

    int n, m; cin >> n >> m;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            cin >> a[i][j];

            b[i][j] = (b[i - 1][j] - b[i - 1][j - 1]) + b[i][j - 1] + a[i][j];

            if (i == 1 and j == 1) b[i][j] = a[i][j];
            
        }
    }

    int t; cin >> t;
    int x1, y1, x2, y2;
    for (int i = 1 ; i <= t ; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        int ur = b[x1 - 1][y2];
        int dl = b[x2][y1 - 1];
        int ul = b[x1 - 1][y1 - 1];
        int s = b[x2][y2];
        
        int Sum = s - ((ur + dl) - ul);

        cout << Sum << endl;
    }

    

    return 0;
}