#include<bits/stdc++.h>

using namespace std;

const int MAX = 2000;

int a[MAX][MAX];
bool r[MAX];
bool c[MAX];

int main() {

    int n, m;
    cin >> n >> m;

    int Min = INT_MAX;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];

            if (a[i][j] < Min) Min = a[i][j];

        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){

            if (a[i][j] == Min) {
                r[i] = true;
                c[j] = true;
            }
        }
    }

    for (int i = 0; i < n; i++) {

        if (r[i]) continue;     

        bool first = true;
        for (int j = 0; j < m; j++) {

            if (c[j]) continue;      
            if (!first) cout << " ";

            cout << a[i][j];
            first = false;
        }
        if (!first) cout << endl;  
    }

    return 0;
}
