#include<bits/stdc++.h>

using namespace std ;

int main(){

    string symbols ; cin >> symbols ;
    string number ;

    int k = 1 ;
    while (k <= 9){
        string s = to_string(k);
        number = s;
        for (int i = 0 ; i < symbols.length() ; i++){
            if (symbols[i] == '+'){
                if (number[i] + 1 - '0'> 9){
                    cout << 0 << endl ;
                    return 0 ;
                }
                number.push_back(number[i] + 1);
            }
            else if (symbols[i] == '-'){
                if (number[i] - 1 - '0' < 0){
                    break;
                }
                number.push_back(number[i] - 1);
            }
            else number.push_back(number[i]);
        }
        if (number.length() == symbols.length() + 1) break ;
        k++;
    }

    cout << number << '\n' ;

    return 0 ;
}