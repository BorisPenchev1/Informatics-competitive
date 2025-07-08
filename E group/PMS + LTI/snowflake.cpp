#include <iostream>

using namespace std;

int main(){
    
    int n; cin >> n;

    int b = n / 2 + 1;

    int a = 1, c = n;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n ; j++){
            if (i != b){
                if (j == a or j == b or j == c){
                    cout << "*";
                }
                else {
                    cout << "." ;
                }
            }
            else cout << "*";
        }
        a++; c--;
        cout << endl ;
    }

    return 0;
}