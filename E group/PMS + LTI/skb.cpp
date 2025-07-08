#include<bits/stdc++.h>

using namespace std;

int main(){

    int n ; cin >> n ;

    char c;
    int ol = 0, cl = 0;
    int om = 0, cm = 0;
    int ob = 0, cb = 0;

    for (int i = 1;  i <= n ; i++){
        cin >> c ;

        if (c == '(') ol++;
        else if (c == ')') cl++;
        else if (c == '[') om++;
        else if (c == ']') cm++;
        else if (c == '{') ob++;
        else cb++;
    }

    if (ob > cb) cout << "L " << ob - cb << endl;
    else if (cb > ob) cout << "R " << cb - ob << endl;
    else cout << 0 << endl ;
    
    if (om > cm) cout << "L " << om - cm << endl;
    else if (cm > om) cout << "R " << cm - om << endl;
    else cout << 0 << endl ;

    if (ol > cl) cout << "L " << ol - cl << endl;
    else if (cl > ol) cout << "R " << cl - ol << endl;
    else cout << 0 << endl ;

    return 0;
}