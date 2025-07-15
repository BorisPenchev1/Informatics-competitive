#include<bits/stdc++.h>
#define ll long long

using namespace std;

vector <ll> numbers;
vector <ll> queries;
vector <ll> prefix;
vector <ll> precalc;
vector <ll> ans;

bool cmp(ll a, ll b){
    return a > b;
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
}

int main(){

    fastIO();

    ll n,  q; cin >> n >> q;

    ll val;
    for (ll i = 0 ; i < n ; i++){
        cin >> val;
        numbers.push_back(val);
    }

    for (ll i = 0 ; i < q ; i++){
        cin >> val;
        queries.push_back(val);
    }

    sort(numbers.begin(), numbers.end(), cmp);

    for (int i = 0 ; i < numbers.size() ; i++){
        prefix[i] = prefix[i - 1] + numbers[i];
    }

    for (int i = 1 ; i <= n ; i++){
        ll k = 1;
        for (int j = 0 ; j < n ; j++){
            precalc[i] = k * (prefix[i] - prefix[i - j - 1] );
        }
    }

    for (ll i : ans) cout << i << " " ;
    cout << endl;

    return 0;
}