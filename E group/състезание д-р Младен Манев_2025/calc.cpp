#include<bits/stdc++.h>

using namespace std ;

int n, num1, num2, res = 0;
char oper ;

int main(){
	
	cin >> n ;
	
	for (int i = 1 ; i <= n - 1 ; i++){
		if (i == 1) cin >> num1 >> oper >> num2;
    	else if (i > 1)cin >> oper 
		>> num2;

		if (oper == '+' and i == 1) res = res + (num1 + num2);
		else if (oper == 'x' and i == 1) res = res + (num1 * num2);
		else if (oper == '+' and i > 1) res = res + num2 ;
		else if (oper == 'x' and i > 1) res = res * num2 ;
	}
	
	cout << res << endl ;
	
	return 0 ;
}
