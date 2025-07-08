#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 2;

int a[MAXN];
int cnt[32];

int main() {

    int n, k;
    cin >> n >> k;

    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    int best = 0;
    int Max = 0;
    int l = 0, r = 0;

    for (int i = 0; i < n; ++i) {
        cnt[a[i]]++;

        int Max = 0;
        for (int j = 0; j <= 30; ++j) Max = max(Max, cnt[j]);

        int window = i - l + 1;  
        if (window - Max > k) {
            cnt[a[l]]--;
            l++;
            window--;     
        }

        best = max(best, window); 
    }


    cout << best << endl;
    
    return 0;
}