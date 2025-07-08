#include<bits/stdc++.h>

using namespace std;

string s, s1;
long long sum ;

int main(){

    cin >> s ;

    int d = s.size();

    for (int i = 0 ; i <= d ; i++){
        if (isdigit(s[i])){
            s1 += s[i] ;
        }
        else {
            if (s1 != ""){
                sum += (long long) stoi(s1);
                s1 = "";
            }
            else continue;
        }
    }

    cout << sum << endl ;

}