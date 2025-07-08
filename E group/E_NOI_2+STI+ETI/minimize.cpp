#include<bits/stdc++.h>
using namespace std;

int k, arr[5], i;

bool comp(int a, int b) {
    return a > b;
}

int main() {
    for (i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cin >> k;

    sort(arr, arr + 5, comp);
    
    while (k > 0) {
        sort(arr, arr + 5, comp);  
        arr[0]--;  
        k--;
    }

    sort(arr, arr + 5, comp);

    cout << arr[0] << endl;

    return 0;
}

