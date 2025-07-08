#include <bits/stdc++.h>

using namespace std;

void speed() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    speed();

    string s;
    getline(cin, s);

    int i = 0, res = 0, curr = 0;
    char op = '+';

    while (i < s.length()) {
        char c = s[i];

        if (isdigit(c)) {
            curr = 0;
            while (i < s.length() && isdigit(s[i])) {
                curr = curr * 10 + (s[i] - '0');
                i++;
            }
            if (op == '+') res += curr;
            else if (op == '-') res -= curr;
            continue;
        }

        if (c == '+' || c == '-') {
            op = c;
        }

        i++;
    }

    cout << res << endl ;
    
    return 0;
}
