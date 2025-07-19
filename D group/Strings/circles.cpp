#include <bits/stdc++.h>

using namespace std;

int circles(long long n){
    int br = 0;
    while(n > 0){
        int curr = n % 10;
        n /= 10;

        if (curr == 0 or curr == 6 or curr == 9) br++;
        else if (curr == 8) br += 2;
    }

    return br;
}

int main() {
    
    int a, b; 
    cin >> a >> b;
    char oper;
    cin >> oper;

    unsigned long long res;
    switch (oper){

        case '+':
            res = a + b;
            break;
        
        case '-':
            res = a - b;
            break;

        case '*':
            res = a * b;
            break;
    }

    cout << circles(res) << endl;

    return 0;
}