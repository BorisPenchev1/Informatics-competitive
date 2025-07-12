#include<bits/stdc++.h>

using namespace std;

const int MAXA = 1e6 + 2;
const int MAXQ = 1e5 + 2;

int min_div[MAXA];
int ans[MAXQ];
vector <pair<int, int>> queries;

void sieve(){
    for (int i = 2 ; i <= MAXA ; i++){
        for (int j = i ; j <= MAXA ; j += i){
            if (min_div[j] == 0) min_div[j] = i;  
        }
    }
}

int main(){
    
    sieve();

    int q; cin >> q;
    for (int i = 0 ; i < q ; i++){
        int x; cin >> x;
        queries.push_back({x, i});
    }

    sort(queries.begin(), queries.end());

    int mult = 0, cnt = 0;
    for (auto [x, i] : queries){
        while (mult < x){
            mult++;
            int tmp = mult;
            while (tmp != 1){
                tmp /= min_div[tmp];
                cnt++;
            }
        }
        ans[i] = cnt;
    }

    for (int i = 0 ; i < q ; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}