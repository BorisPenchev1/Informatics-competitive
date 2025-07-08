#include<bits/stdc++.h>
using namespace std;

int main(){

    int x, y, z ; cin >> x >> y >> z ;
    int n ; cin >> n ;

    int p3 = 0, p2 = 0, p1 = 0 ;
    int id3 = 0, id2 = 0, id1 = 0;
    for (int i = 1 ; i <= n ; i++){
        int a, b, c ; cin >> a >> b >> c ;

        int p = a * x + b * y + c * z ;

        if (p > p3){
            p3 = p ;
            id3 = i ;
        }
        
        if (p3 > p2){
            swap(id3, id2);
            swap(p3, p2);
        }
        if (p2 > p1){
            swap(id2, id1);
            swap(p2, p1);
        }
    }

    cout << p3 + p2 + p1 << endl ;
    cout << id1 << " " << id2 << " " << id3 << endl ;

    return 0;
}