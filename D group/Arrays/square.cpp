#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2000 + 2;

int a[MAXN][MAXN];

int main(){

    int n, m;
    cin >> n >> m;

    int Max = 0, br = 0;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= m ; j++){
            int k; cin >> k;
            if (k == 1){
                a[i][j] = 1 + min(min(a[i][j - 1], a[i - 1][j - 1]), a[i - 1][j]);
                
                if (Max < a[i][j]){
                    Max = a[i][j];
                    br = 1;
                }
                else if (Max == a[i][j])    {
                    br++;
                }
            }
            else a[i][j] = 0;
        }
    }

    cout << Max << " " << br << endl;

    return 0;
}