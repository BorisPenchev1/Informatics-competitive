#include<bits/stdc++.h>
#define ll long long 

using namespace std;

const int MAXN = 1e5 + 7;

int n, k;
int a[MAXN];

void read(){
    cin >> n >> k;
    for (int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);
}

void solve(){
    int left = 1;
    int right = n;
    int cnt = 0;
    while (left <= right and right > 0){
        cnt++;
        if (a[left] + a[right] <= k){
            left++;
        }
        right--;
    }
    cout << cnt << endl;
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fastIO();
    read();
    solve();
}