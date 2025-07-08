#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e4 + 2;

string first[MAXN];
string second[MAXN];
string third[MAXN];
string fourth[MAXN];
char c;
char c1;

bool isThere(string s){
    for (int i = 0 ; i < s.size() ; i++){
        if (s[i] == c or s[i] == c1){
            return true;
        }
    }

    return false;
}

bool isThere2(string s){
    int br = 0;
    for (int i = 0 ; i < s.size() ; i++){
        if (s[i] == c or s[i] == c1){
            br++;
        }

        if (br == 2){
            return true;
        }   
    }
    
    return false;
}

bool isLast(string s){
    int d = s.size();

    if (s[d - 1] == c or s[d - 1] == c1) return true;
    else return false;
}



int main(){

    int n;
    cin >> n >> c;

    int k = c - 32;
    c1 = k;

    int first_cnt = 0;
    int second_cnt = 0;
    int third_cnt = 0;
    int fourth_cnt = 0;

    for (int i = 1 ; i <= n ; i++){
        cin >> first[i] >> second[i] >> third[i] >> fourth[i];

        if (first[i][0] == c or first[i][0] == c1) first_cnt++;
        if (isThere(second[i])) second_cnt++;
        if (isThere2(third[i])) third_cnt++;
        if (isLast(fourth[i])) fourth_cnt++;
    }

    cout << first_cnt << " " << second_cnt << " " << third_cnt << " " << fourth_cnt << endl ;

    return 0;
}