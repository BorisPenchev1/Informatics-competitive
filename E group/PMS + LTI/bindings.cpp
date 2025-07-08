#include<bits/stdc++.h>

using namespace std;

int main(){

    int aw1, awd1, ah1, ahd1; cin >> aw1 >> awd1 >> ah1 >> ahd1 ;

    int bw1, bwd1, bh1, bhd1; cin >> bw1 >> bwd1 >> bh1 >> bhd1 ;
    int cw1, cwd1, ch1, chd1; cin >> cw1 >> cwd1 >> ch1 >> chd1 ;

    int aw, ah ;
    aw = (aw1 / 10 % 10) + (aw1 % 10) * 10 + awd1 ;
    ah = (ah1 / 10 % 10) + (ah1 % 10) * 10 + ahd1 ;
    int bw, bh ;
    bw = (bw1 / 10 % 10) + (bw1 % 10) * 10 + bwd1 ;
    bh = (bh1 / 10 % 10) + (bh1 % 10) * 10 + bhd1 ;
    int cw, ch ;
    cw = (cw1 / 10 % 10) + (cw1 % 10) * 10 + cwd1 ;
    ch = (ch1 / 10 % 10) + (ch1 % 10) * 10 + chd1 ;

    cout << aw << " " << ah << endl ;
    cout << bw << " " << bh << endl ;
    cout << cw << " " << ch << endl ;

    // int Min = INT_MAX ;
    // if (bh >= ah and aw <= bw - 5){
    //     cout << 1 << endl ;

    //     Min = min(bw, bh);

    //     if (Min == bw){
    //         cout << bw1 << "." << bwd1 << endl ;
    //     }
    //     else {
    //         cout << bh1 << "." << bhd1 << endl ;
    //     }
    // }
    // else if (ch >= ah and aw <= cw - 5){
    //     cout << 2 << endl ;

    //     Min = min(bw, bh);

    //     if (Min == bw){
    //         cout << cw1 << "." << cwd1 << endl ;
    //     }
    //     else {
    //         cout << ch1 << "." << chd1 << endl ;
    //     }
    // }
    // else {
    //     cout << 0 << endl ;
    // }
    

    return 0;
}