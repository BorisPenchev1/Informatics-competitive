#include<bits/stdc++.h>

using namespace std;

int n;
vector <int> vec;

int custom_lower(int k){
    int l = -1, r = n;
    int mid;
    while (l < r - 1){
        mid = l + (r - l) / 2;

        if (vec[mid] < k){
            l = mid;
        }
        else r = mid;
    }

    return r;
}

int custom_upper(int k){
    int r = custom_lower(k);
    int up;

    if (vec[r] == k){
        return r + 1;
    }
    else {
        return r;
    }
}

int strictly_less_than(int k){
    int r = custom_lower(k);
    int less;

    while (vec[r] == k){
        r--;
    }

    return r;
}

int main(){
    //input n, vec
    //input k

    cin >> n;
    int curr;
    for (int i = 1 ; i <= n ; i++){
        cin >> curr;
        vec.push_back(curr);
    }

    int k;
    cin >> k;

    //custom_lower(k);
    //custom_upper(k);
    //strictly_less_than(k);

    cout << custom_lower(k) << endl;
    cout << custom_upper(k) << endl;
    cout << strictly_less_than(k) << endl;

    return 0;
}