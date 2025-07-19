#include<bits/stdc++.h>

using namespace std;

const int MAX = 1002;

int a1[MAX], cnt_a;
int b1[MAX], cnt_b;
int c1[MAX];
int cs = 1000;
int k = 3;

void createArr(string a, int* m, int& cnt){
    cnt = 0;
    int i = a.length() - k - 1;
    string curr;
    while (i >= 0){
        curr = a.substr(i + 1, k);
        m[cnt] = stoi(curr);
        i -= k;
        cnt++;
    }

    if (i != cnt * k){
        curr = a.substr(0, a.length() % k);
        m[cnt] = stoi(curr);
        cnt++;
    }
}

void Sum(){
    int sum = 0;
    int c = 0;
    int i;
    for (i = 0 ; i < max(cnt_a, cnt_b); i++){
        c1[i] = a1[i] + b1[i] + c;

        string tmp = to_string(c1[i]);
        if (tmp.size() > k){
            c = tmp.front() - '0';
            tmp.erase(tmp.front(), 1);
        }
    }
}

int main(){

    string a;
    cin >> a;

    string b;
    cin >> b;

    createArr(a, a1, cnt_a);
    createArr(b, b1, cnt_b);

    Sum();

    for (int i = 0; i < max(cnt_a, cnt_b); i++){
        cout << c1[i] << " ";
    }
    cout << endl;

    return 0;
}