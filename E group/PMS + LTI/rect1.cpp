#include<bits/stdc++.h>
#define ll long long

using namespace std;

void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){

    speed();

    ll n; cin >> n;

    ll x, w, h;
    ll x1, w1, h1 ;
    ll P = 0;
    ll Max = 0;

    cin >> x >> w >> h;

    ll first_x = x, last_x = x + w, abs_d = 0;
    ll first_h = h, last_h = h;

    x1 = x; w1 = w; h1 = h;

    for (ll i = 2 ; i <= n ; i++){
        cin >> x >> w >> h;

        if (x == x1 + w1){
            last_x = x + w;
            abs_d += abs(h - h1);
            last_h = h;
        }
        else {
            P = (last_x - first_x) * 2 + first_h + last_h + abs_d;

            Max = max(Max, P);
            
            first_x = x; 
            last_x = x + w; 
            first_h = h; 
            last_h = h; 
            abs_d = 0; 
        }

        x1 = x;
        h1 = h;
        w1 = w;
    }

    P = (last_x - first_x) * 2 + first_h + last_h + abs_d;

    Max = max(Max, P);

    cout << Max << endl ;

    return 0;
}

/*
11
1 2 3
3 1 5
4 2 2
6 2 3
8 1 4
11 1 1
12 2 3
14 2 2
18 2 2
20 2 1
22 2 3

31
*/