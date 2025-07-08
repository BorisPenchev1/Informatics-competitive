#include<bits/stdc++.h>

using namespace std;

int sticks, leftS, MaxT, player = 1;

void Print(){
    cout << "The winner is: " << player << endl ;
}

bool Take(){

    int take;

    if (leftS <= MaxT) {
        take = leftS; 
    }

    else {
        take = leftS % (MaxT + 1);
        if (take == 0 or take > MaxT) take = MaxT; 
    }

    leftS -= take;

    if (leftS == 0) {
        return true;
    }
    return false;
}

int main(){
    
    cin >> sticks >> MaxT ;

    bool isWinner = false ;
    while (1){
        isWinner = Take();
        if (isWinner){
            Print();
            break; 
        } 

        if (player == 1) player = 2 ;
        else player = 1 ;
    }

    return 0;
}