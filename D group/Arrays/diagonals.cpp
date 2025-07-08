#include <bits/stdc++.h>

using namespace std;

int a[2000][2000]; 

int n;

int diagonal(){
    int sum = 0;
    int j = 1;
    for (int i = 1 ; i <= n ; i++){
        sum += a[i][j];
        j++;
    }
    
    return sum;
}

int rdiagonal(){
    int sum = 0;
    int j = n;
    for (int i = 1 ; i <= n ; i++){
        sum += a[i][j];
        j--;
    }
  
    return sum;
}

int diagonal_up(){
    int sum = 0;
    
    for (int i = 1 ; i <= n - 1; i++){
        for (int j = i + 1 ; j <= n ; j++){
            sum += a[i][j];
        }
    }

    return sum ;
    
}

int rdiagonal_up(){
    int sum = 0;
    
    for (int i = 1 ; i <= n - 1; i++){
        for (int j = n - i ; j >= 1 ; j--){
            sum += a[i][j];
        }
    }

    return sum ;
}

int diagonal_down(){
    int sum = 0;
    
    for (int i = 2 ; i <= n; i++){
        for (int j = 1 ; j <= i - 1; j++){
            sum += a[i][j];
        }
    }

    return sum ;
    
}

int rdiagonal_down(){
    int sum = 0;
    
    for (int i = 2 ; i <= n; i++){
        for (int j = n ; j >= n - i + 2; j--){
            sum += a[i][j];
        }
    }

    return sum ;
    
}


int main(){

    cin >> n;

    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n ; j++){
            cin >> a[i][j];
        }
    }

    cout << diagonal() << endl ;
    cout << diagonal_up() << endl ;
    cout << diagonal_down() << endl ;
    cout << rdiagonal() << endl ;
    cout << rdiagonal_up() << endl ;
    cout << rdiagonal_down() << endl ;


    return 0;
}