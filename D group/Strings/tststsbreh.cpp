#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n; cin >> n ;

    string curr;                        
    int br = 0;
    int shp = 0;
    
    for (int j = 1; j <= n ; j++){
        cin.ignore();
        getline(cin, curr);

        for (int i = 0 ; curr[i] != '.'; i++){

            if (curr[i] == ' ' or curr[i] == 'a' or curr[i] == 'e' or curr[i] == 'o' or curr[i] == 'u' or curr[i] == 'i' or curr[i] == 'y' or curr[i] == 'a' or curr[i] == 'a') br = 0;

            else if (++br > 3) {
                shp++;
                break;
            }

        }
    }

    cout << n - shp << " " << shp << endl;

    return 0;
}