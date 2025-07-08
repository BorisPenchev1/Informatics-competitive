#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string n; 
    cin >> n;

    while (n.length() > 1) {
        int sum = 0; 
        for (int i = 0; i < n.length(); i++) {
            sum += n[i] - '0';
        }
        n = to_string(sum);
    }

    cout << n << endl;

    return 0;
}