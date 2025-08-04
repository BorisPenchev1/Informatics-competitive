#include<bits/stdc++.h>

using namespace std;

string key;
string message;
string table[7][7];
string alphabet[27] = {"a", "b", "c", "d", "e", "f", "g", "h", "ij", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

int n;

void read(){
    cin >> key;
    cin >> message;

    n = key.size();

    int k = 0;
    bool fl = false;
    for (int i = 1 ; i <= 5 ; i++){
        if (i > 1){
           table[i][1] = key[k];
           k++; 
        }
        for (int j = 1 ; j <= 5 ; j++){
            if (i > 1 and j == 1) j = 2;
            table[i][j] = key[k];
            alphabet[k] = "0";
            k++;

            if (k >= n){
                fl = true;
                break;
            }
        }
        if (fl){
            break;
        }
    }

    int line = n / 5;
    if (n % 5 > 1) line++;

    int column = n % 5 + 1;

    for (int i = line ; i <= 5 ; i++){
        for (int j = column ; j <= 5 ; j++){
            if (alphabet[i] != "0") table[i][j] = alphabet[i];
        } 
    }

    for (int i = 1 ; i <= 5 ; i++){
        for (int j = 1 ; j <= 5 ; j++){
            cout << table[i][j] << " ";
        } 
        cout << endl;
    }
}

void solve(){

}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fastIO();
    read();
    solve();
}