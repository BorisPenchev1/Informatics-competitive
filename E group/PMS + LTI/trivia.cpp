#include<bits/stdc++.h>

using namespace std;

double Trivia(int n){
    int i = 2, sum = 0 ;
    while (i * i < n){
        if (n % i == 0){
            while (n % i == 0) n /= i ;
            sum += i ;
            cout << i << " " << sum << endl ;
        }
        i++;
    }

	sum++ ;
    return sum / n ;
}

void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(){

    speed();

    int l, r ; cin >> l >> r ;

    double curr, Max = 0, Min = INT64_MAX ;
    for (int i = l ; i <= r ; i++){
        curr = Trivia(i);
        cout << curr << endl ;
        Max = max(curr, Max);
        Min = min(curr, Min);
    }

    cout << Max << " " << Min << endl ;

    return 0;
}
