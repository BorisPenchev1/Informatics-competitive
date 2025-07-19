#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    int cnt = 0;
    int Max = 0;
    char Max_val;

    int i;
    for (i = 1 ; i < s.size() ; i++){
        while (s[i] == s[i - 1] and i < s.size()){
            cnt++;
            i++;
        }

        if (cnt > Max){
            Max = cnt;
            Max_val = s[i - 1];
        }
        cnt = 0;
    }

    if (cnt > Max){
        Max = cnt;
        Max_val = s[i - 1];
    }

    for (int j = 1 ; j <= Max + 1; j++){
        cout << Max_val;
    }
    cout << endl;

    return 0;
}