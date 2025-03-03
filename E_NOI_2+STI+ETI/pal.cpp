#include <bits/stdc++.h>

using namespace std;

 

bool pal(long long k) {
long long reversed=0, number;
    number = k;
    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    return (k == reversed) ;
}

int main() {
long long i, j, pals, t, a, b, c,  Min, Max, j1;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> a >> b >> c;
        Min = LLONG_MAX ;
        Max = 0 ; j1 = 0;
        pals = 0 ;
        for (j = a; j <= b; j += c) {
            if (pal(j) == 1){
                pals++;
				if (j1 > 0){
                    Min = min(Min, j - j1 - 1);
                    Max = max(Max, j - j1 - 1);
                }
                j1 = j ;
            } 
        }
        
        if (pals == 0) cout << "0" << endl ;
        else   
    	if (pals == 1) cout << "1" << endl ;
    	else cout << pals << " " << Min << " " << Max << endl;
    }

return 0;
}
