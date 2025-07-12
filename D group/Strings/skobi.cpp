#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    for (int i = 1 ; i <= n ; i++){

        string s; cin >> s;
        stack <char> st;

        bool yeah = false;
        for (char c:s){
            
            if (c == '(' or c == '{' or c == '[') st.push(c);
            else if ((c == ')' and st.top() == '(') or (c == '}' and st.top() == '{') or (c == ']' and st.top() == '[')) st.pop();
            else {
                break;
            }
        }

        if (st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}