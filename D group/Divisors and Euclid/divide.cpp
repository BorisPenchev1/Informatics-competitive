#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2 * 1e6 + 2;

int min_div[MAXN];
vector <int> decomposed_a;
vector <int> decomposed_b;

void sieve(){
    for (int i = 2; i <= MAXN ; i++){
        for (int j = i ; j <= MAXN ; j += i){
            if (min_div[j] == 0) min_div[j] = i;
        }
    }
}

int main(){

    sieve();

    int n, q; cin >> n >> q;

    int a, b;
    for (int i = 1 ; i <= q ; i ++){
        cin >> a >> b;

        int cnt;

        int tmp_a;
        cnt = 0;
        while (tmp_a > 1){
            while (tmp_a % min_div[tmp_a] == 0){
                tmp_a /= min_div[tmp_a];
                cnt++;
            } 
            decomposed_a.push_back(cnt);
            cnt = 0;
        }

        int tmp_b;
        cnt = 0;
        while (tmp_b > 1){
            while (tmp_b % min_div[tmp_b] == 0){
                tmp_b /= min_div[tmp_b];
                cnt++;
            } 
            decomposed_b.push_back(cnt);
            cnt = 0;
        }   
    }

    return 0;
}