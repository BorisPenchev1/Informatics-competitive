#include<bits/stdc++.h>

using namespace std ;

const int MAXN = 30 + 2 ;

char favs[MAXN];
string curr_price ;
string prices[MAXN] ;
int n, m ; 

int TimesNeeded(char target){
    int br = 0 ;
    for (int i = 1 ; i <= n ; i++){
        if (favs[i] == target) br++ ;
    }
    return br ;
}

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(){

    fastIO();

    cin >> n >> m ;
    
    for (int i = 1 ; i <= n ; i++){
        cin >> favs[i] ;
    }

    char p_color ;
    int p_price ;
    double sum = 0 ;
    
    for (int i = 1 ; i <= m ; i++){
        cin >> prices[i] ;
    }
    
    sort(prices + 1, prices + n + 1);

    for (int i = 1 ; i <= m ; i++){
    	
        curr_price = prices[i] ;
        char color = curr_price[0] ;
        int price = stoi(curr_price.substr(1, curr_price.size() - 1));

		if (color == p_color){
			sum -= p_price ;
			sum += max(price, p_price) * TimesNeeded(color);
		} 
		else sum += price * TimesNeeded(color); 

        p_price = price ;
        p_color = color ;
    }

    cout << sum / 100 - 0.10 << setprecision(2) << endl ;

    return 0;

}
