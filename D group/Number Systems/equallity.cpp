#include<bits/stdc++.h>

using namespace std;

int a[10], b[10], c[10];

void toArray(string s, int arr[]){
    int k = s.length();
    for (int i = 0 ; i < k ; i++){
        if (s[i] >= '0' and s[i] <= '9'){
            arr[i] = s[i] - '0';
        }
        else {
            arr[i] = s[i] - 'A' + 10;
        }
    }
}

int findMax(int currMax, int currLen, int arr[]){
    for (int i = 0 ; i < currLen ; i++){
        currMax = max(currMax, arr[i]);
    }

    return currMax;
}

int toDecimal(int base, int currLen, int arr[]){
    int sum = 0;
    int j = currLen - 1;
    for (int i = 0; i < currLen ; i++){
        sum += arr[i] * pow(base, j);
        j--;
    }

    return sum;
}

int main(){

    string s; cin >> s;

    string a1 = s.substr(0, s.find("+"));
    int m = s.find("=");
    string a2 = s.substr(s.find("+") + 1, m - a1.length() - 1);
    string a3 = s.substr(m + 1);

    toArray(a1, a);
    toArray(a2, b);
    toArray(a3, c);

    int Max = 0;
    Max = findMax(0, a1.length(), a);
    Max = max(findMax(Max, a2.length(), b), Max);
    Max = max(findMax(Max, a3.length(), c), Max);

    int Min = Max + 1;
    for (int i = Min ; i <= 36 ; i++){
        int x = toDecimal(i, a1.length(), a);
        int y = toDecimal(i, a2.length(), b);
        int z = toDecimal(i, a3.length(), c);

        if (x + y == z){
            cout << i << endl;
            return 0;
        }
    }


    return 0;
}