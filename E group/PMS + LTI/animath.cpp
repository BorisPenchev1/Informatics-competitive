#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    char c;
    cin >> n >> c;
    cin.ignore(); 

    string s;
    for (int i = 1; i <= n; i++) {
        getline(cin, s);
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == ' ') { 
                s.erase(j, 1);
                j--; 
            }
        }

        int l = s.length();
         l /= 2 ;

         int res = 0 ;
         string num = "";
         for (int i = 0 ; i < l ; i += 2){
            string si = to_string(s[i]) + to_string(s[i]);
            if (si == "no") num.append("0") ;
            else if (si == "pa") num.append("1") ;
            else if (si == "re") num.append("2") ;
            else if (si == "ci") num.append("3") ;
            else if (si == "vo") num.append("4") ;
            else if (si == "mu") num.append("5") ;
            else if (si == "xa") num.append("6") ;
            else if (si == "ze") num.append("7") ;
            else if (si == "bi") num.append("8") ;
            else if (si == "so") num.append("9") ;
         }
        res += stoi(num);
    }

    

    return 0;
}