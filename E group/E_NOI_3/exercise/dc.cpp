#include<bits/stdc++.h>

using namespace std ;

string Sum(string s1, string s2){

    int d1 = s1.size();
    int d2 = s2.size();
    int ost = 0;
    string s = "";

    if (d1 > d2){
        for (int i = 1 ; i <= d1 - d2 ; i++ ){
            s2.insert(s2.begin(), '0');
        }
    }
    else if (d2 > d1) {
        for (int i = 1; i <= d2 - d1; i++) {
            s1.insert(s1.begin(), '0');
        }
    }


    for (int i = s1.size() - 1 ; i >= 0 ; i--){

        int c1 = s1[i] - '0' ;
        int c2 = s2[i] - '0' ;
        int sum = c1 + c2 + ost;

        s.push_back((sum % 10) + '0');
        if (sum >= 10 and i == 0){
            sum /= 10 ;
            s.push_back(sum + '0');
        }
        ost = sum / 10 ;
    }

    reverse(s.begin(), s.end());

    return s ;

}

int main(){

    string sum = "";
    string cs ;

    int n ;
    cin >> n ;

    for (int i = 1 ; i <= n ; i++){
        cin >> cs ;
        sum = Sum(cs, sum);
    }

    cout << sum << endl ;

    return 0 ;
}