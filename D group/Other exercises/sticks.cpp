#include<bits/stdc++.h>

using namespace std;

void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){

    speed();

    int n; cin >> n;

    int Max = 0;
    int br = 0;
    int res = 0;
    for (int i = 1 ; i <= n ; i++){
        int l, r;
        cin >> l >> r;

        if (Max >= l) br++;
        else {
            Max = 0;
            res++;
        }

        Max = max(Max, r);

        //cout << Max << " " << br << " " << res << endl;
    }

    cout << res << endl;

    return 0;
}