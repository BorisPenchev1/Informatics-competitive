#include<bits/stdc++.h>

using namespace std;

int sum;

int simplify(){
    if (sum == 33) return 33;
    while (sum >= 10){
        int s = 0;
        while (sum > 0){
            s += sum % 10;
            sum /= 10;
        }
        sum = s;
    }

    return sum;
}

int main() {
    
    string s; cin >> s;

    
    for (int i = 0 ; i < s.size() ; i++){
        if (s[i] == 'a' or s[i] == 'j' or s[i] == 's' or s[i] == 'A' or s[i] == 'J' or s[i] == 'S') sum += 1;
        else if (s[i] == 'b' or s[i] == 'k' or s[i] == 't' or s[i] == 'B' or s[i] == 'K' or s[i] == 'T') sum += 2;
        else if (s[i] == 'c' or s[i] == 'l' or s[i] == 'u' or s[i] == 'C' or s[i] == 'L' or s[i] == 'U') sum += 3;
        else if (s[i] == 'd' or s[i] == 'm' or s[i] == 'v' or s[i] == 'D' or s[i] == 'M' or s[i] == 'V') sum += 4;
        else if (s[i] == 'e' or s[i] == 'n' or s[i] == 'w' or s[i] == 'E' or s[i] == 'N' or s[i] == 'W') sum += 5;
        else if (s[i] == 'f' or s[i] == 'o' or s[i] == 'x' or s[i] == 'F' or s[i] == 'O' or s[i] == 'X') sum += 6;
        else if (s[i] == 'g' or s[i] == 'p' or s[i] == 'y' or s[i] == 'G' or s[i] == 'P' or s[i] == 'Y') sum += 7;
        else if (s[i] == 'h' or s[i] == 'q' or s[i] == 'z' or s[i] == 'H' or s[i] == 'Q' or s[i] == 'Z') sum += 8;
        else if (s[i] == 'i' or s[i] == 'r' or s[i] == 'I' or s[i] == 'R') sum += 9;
    }

    int res = simplify();

    cout << res << endl ;

    return 0;
}