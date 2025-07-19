#include<bits/stdc++.h>
#define ll unsigned long long

using namespace std;

const int MAXN = 1e5;

ll a[MAXN];
ll n, k;
ll Max = 0;

bool canWrite(ll mid){
    ll cnt = 0;
    for (int i = 0 ; i < k ; i++)
        cnt += mid / a[i];

    return cnt >= n;
}

int binary_search(){
    ll l = 1, r = Max;
    ll ans;
    while (l <= r){
        ll mid = l + (r - l) / 2;
        if (canWrite(mid)){
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    return ans;
}

void read(){
    cin >> n >> k;

    for (int i = 0; i < k ; i++){
        cin >> a[i];
        Max = max(Max, a[i]);
    }

    Max *= n;
    Max += 2;
}

void solve(){
    ll ans = binary_search();

    cout << ans << endl;
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