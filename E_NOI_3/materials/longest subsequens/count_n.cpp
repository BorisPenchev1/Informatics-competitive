#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    cin >> s;
    
    int freq[256] = {0};
    int Max = 0;

    for (int i = 0; i < s.size(); i++) {
        freq[s[i]]++;
        Max = max(Max, freq[s[i]]);
    }

    cout << Max << endl;
    return 0;
} 

// finds how many times does a charachter repeats in a string 
// freq[256] - creates an array for every type of char
// every tyme it adds one to the index of the char (its ASKII)
// finds the max
