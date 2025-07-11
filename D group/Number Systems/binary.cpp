#include<bits/stdc++.h>

using namespace std;

int main(){

    long long n; cin >> n;

    long long sum = 0;
    long i = 0;
    while (true){
        i++;
        sum += (1LL << (i - 1)) * i;
        if (sum >= n) break;
    }

    sum -= (1LL << (i - 1)) * i;

    long pos = n - sum;

    long long number_pos = (pos - 1) / i + 1;
    long long number = (1LL << (i - 1)) + (number_pos - 1);

    cout << number << " " ;

    long long lr = pos % i;
    if (lr == 0) lr = i;
    long long rl = i + 1 - lr;

    for (int i = 1 ; i < rl ; i++){
        number /= 2;
    }

    cout << number % 2 << endl;


    return 0;
}