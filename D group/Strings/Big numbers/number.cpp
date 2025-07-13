#include<bits/stdc++.h>

using namespace std;

stack <char> toStack(string s){
    stack <char> stk;
    reverse(s.begin(), s.end());

    for (int i = 0 ; i < s.size() ; i++){
        stk.push(s[i] - '0');
    }

    return stk;
}

inline bool compare(stack <char>& a, stack <char>& b){
    if (a.size() > b.size() or a.size() == b.size()) return true;
    else return false;
}

int main(){

    string s;
    cin >> s;

    stack <char> a;
    stack <char> b = toStack(s);

    int i = 0;
    for (i = 0 ; i < s.size() ; i++){
        a.push(s[i]);
        b.pop();

        if (b.top() == 0) {
            a.push(b.top());
            b.pop();
        }

        if (compare(a, b)){
            b.push(a.top());
            a.pop();
            break;
        } 
    }

    cout << i + 1 << endl;

    return 0;
}