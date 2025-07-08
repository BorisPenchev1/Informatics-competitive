#include<bits/stdc++.h>

using namespace std;

int main(){

    int N; cin >> N;

    while (1){
        int a = N / 2;

        if (a + a + 1 != N) break;

        N /= 2; N++;
    }

    cout << N << endl ;

    return 0;
}