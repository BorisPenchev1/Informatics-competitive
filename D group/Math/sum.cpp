#include<bits/stdc++.h>

using namespace std;

vector <int> used;

void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool find(int target){
    for (int i = 0 ; i < used.size() ; i++){
        if (used[i] == target) return true;
    }
    return false;
}

int main(){

    speed();

    int A; cin >> A;

    int sum = 0;
    int i;
    for (i = 1; ; i++){
        sum += i;
        if (sum >= A) break;
        used.push_back(i);
    }

    sum -= i;
    int r = A - sum;

    bool isThere = find(r);

    i--;

    if (isThere == true){
        cout << i << " " << r << endl;
    }
    else cout << 0 << endl;


    return 0;
}