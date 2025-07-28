#include<bits/stdc++.h>

using namespace std;

string s;
int cnt[53];

void solve(){
    cin >> s;
    for (int i = 0 ; i < s.size() ; i++){
        int k = s[i];
        if (k > 90) cnt[s[i] - 'a']++;
        else cnt[s[i] - 'A' + 27]++;
    }

    int cnt_odd = 0;
    for (int i = 0 ; i < 52 ; i++){
        if (cnt[i] % 2 == 1 and cnt[i] != '0')cnt_odd++;
    }

    if(cnt_odd == 0) cout << 1;
    else cout << cnt_odd;
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fastIO();
    solve();
}